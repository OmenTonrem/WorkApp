#ifndef MAINWINDOW_H
#define MAINWINDOW_H



#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QListWidget>
#include <QApplication>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_seeHomeWork_clicked();

    void on_seeProject_clicked();

    void on_addHomeWork_clicked();

    void on_addProject_clicked();

    void on_anyButton_clicked();

    void saveProject(const QString &text);
    void saveWork(const QString &text);
    void on_enterPressed();
    void loadFileContent(const QString &filename);


    void on_pushButton_clicked();
    void onWaitTimeout() {

        QApplication::restoreOverrideCursor();
        ui->input->show();
        ui->anyButton->show();
        ui->contentTitle->show();
        ui->seeProject->show();
        ui->seeHomeWork->show();
        ui->addHomeWork->show();
        ui->addProject->show();
        ui->listWidget->show();
        ui->deleteLast_2->show();
        ui->deleteLast->show();
        ui->pushButton->hide();
        ui->title1->hide();
        ui->title2->hide();
        ui->title3->hide();
        ui->title4->hide();

    };



    void on_deleteLast_clicked();

    void on_deleteLast_2_clicked();

private:

    Ui::MainWindow *ui;
    QString Project;
    QString Work;
    QStringList projectList;
    void loadData();
    void loadDataButWorkOne();

};
#endif // MAINWINDOW_H
