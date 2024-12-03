#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFile>
#include <QStringList>
#include <QCursor>
#include <QTimer>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->input, &QLineEdit::returnPressed, this, &MainWindow::on_enterPressed);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
    loadFileContent("project.txt");
    loadFileContent("homeWork.txt");
    ui->input->hide();
    ui->anyButton->hide();
    ui->contentTitle->hide();
    ui->seeProject->hide();
    ui->seeHomeWork->hide();
    ui->addHomeWork->hide();
    ui->addProject->hide();
    ui->listWidget->hide();
    ui->deleteLast->hide();
    ui->deleteLast_2->hide();
}

MainWindow::~MainWindow()
{
    saveProject(Project);
    saveWork(Work);

    delete ui;

}

void MainWindow::on_seeHomeWork_clicked()
{
    ui->contentTitle->setText("See Home Work");
    ui->anyButton->hide();
    ui->input->hide();
    loadFileContent("homeWork.txt");
}


void MainWindow::on_seeProject_clicked()
{
    ui->contentTitle->setText("See Projects");
    ui->anyButton->hide();
    ui->input->hide();
    loadFileContent("project.txt");
}

void MainWindow::loadFileContent(const QString &filename)
{
    QFile file(filename);
    if (file.open(QIODevice::ReadOnly| QIODevice::Text)) {
        QTextStream in(&file);
        ui->listWidget->clear();
        while (!in.atEnd()) {
            QString line = in.readLine();
            ui->listWidget->addItem(line);
        }
        file.close();
    } else {
        qDebug() << filename << " dosyası açılamadı canim benim";
    }
}

void MainWindow::on_addHomeWork_clicked()
{

    if (ui->input->placeholderText() == "Enter Project") {
        ui->listWidget->clear();
        ui->input->clear();
    }

    ui->contentTitle->setText("Add Home Work");
    ui->anyButton->show();
    ui->input->show();
    ui->input->setPlaceholderText("Enter Home Work");
    ui->anyButton->setText("Add Home Work");
    loadFileContent("homeWork.txt");
}


void MainWindow::on_addProject_clicked()
{
    if (ui->input->placeholderText() == "Enter Home Work") {
        ui->listWidget->clear();
        ui->input->clear();
    }
    ui->contentTitle->setText("Add Projects");
    ui->anyButton->show();
    ui->input->show();
    ui->input->setPlaceholderText("Enter Project");
    ui->anyButton->setText("Add Project");
    loadFileContent("project.txt");
}

void MainWindow::saveProject(const QString &text)
{
    QFile file("project.txt");

    if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream out(&file);


        QStringList lines = text.split("\n");


        for (const QString &line : lines) {
            if (!line.isEmpty()) {
                out << line << "\n";
            }
        }
        file.close();
        qDebug() << "Veri dosyaya yazıldı bohohoyt";
    } else {
        qDebug() << "Dosya açılmadı mal";
    }
}
void MainWindow::loadData() {
    QFile file("project.txt"); 
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (int i = 0; i < ui->listWidget->count(); ++i) {
            out << ui->listWidget->item(i)->text() << "\n"; 
        }
        file.close();
    }
}
void MainWindow::loadDataButWorkOne() {
    QFile file("homeWork.txt");  // Dosya adı
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (int i = 0; i < ui->listWidget->count(); ++i) {
            out << ui->listWidget->item(i)->text() << "\n";
        }
        file.close();
    }
}
void MainWindow::saveWork(const QString &text)
{
    QFile file("homeWork.txt");

    if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream out(&file);


        QStringList lines = text.split("\n");


        for (const QString &line : lines) {
            if (!line.isEmpty()) {
                out << line << "\n";
            }
        }
        file.close();
        qDebug() << "Veri dosyaya yazıldı";
    } else {
        qDebug() << "Dosya açılmadı";
    }
}

void MainWindow::on_enterPressed()
{
    QString text = ui->input->text();
    if (ui->input->placeholderText() == "Enter Project") {
        ui->listWidget->addItem(text);
        ui->input->clear();
        Project.append(text + '\n');
        qDebug() << Project;
        saveProject(Project);
    } else {
        ui->listWidget->addItem(text);
        ui->input->clear();
        Work.append(text + '\n');
        qDebug() << Work;
        saveWork(Work);
    }

}
void MainWindow::on_anyButton_clicked()
{
    QString text = ui->input->text();

    if (ui->input->placeholderText() == "Enter Project") {
        ui->listWidget->addItem(text);
        ui->input->clear();
        Project.append(text + '\n');
        qDebug() << Project;
        saveProject(Project);

    }
    if (ui->input->placeholderText() == "Enter Home Work") {
        ui->listWidget->addItem(text);
        ui->input->clear();
        Work.append(text + '\n');
        qDebug() << Work;
        saveWork(Work);

    }

}

void MainWindow::on_pushButton_clicked()
{

    loadFileContent("homeWork.txt");

    QApplication::setOverrideCursor(Qt::WaitCursor);


    QTimer::singleShot(1000, this, &::MainWindow::onWaitTimeout);
}




void MainWindow::on_deleteLast_clicked()
{

    QString fileName;
    if (ui->input->placeholderText() == "Enter Project") {
        fileName = "project.txt";
    } else {
        fileName = "homeWork.txt";
    }


    int itemCount = ui->listWidget->count();
    if (itemCount > 0) {

        QListWidgetItem* item = ui->listWidget->takeItem(itemCount - 1);
        delete item;

        QFile file(fileName);
        if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
            QTextStream in(&file);
            QStringList lines;


            while (!in.atEnd()) {
                lines.append(in.readLine());
            }
            file.close();


            if (!lines.isEmpty()) {
                lines.removeLast();
            }


            if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
                QTextStream out(&file);
                for (const QString &line : lines) {
                    out << line << "\n";
                }
                file.close();
            }
        }
    }
}


void MainWindow::on_deleteLast_2_clicked()
{
    if (ui->input->placeholderText() == "Enter Home Work") {
        ui->listWidget->clear();
        loadDataButWorkOne();
    }
    else if (ui->input->placeholderText() == "Enter Project") {
        ui->listWidget->clear();
        loadData();
    }



}

