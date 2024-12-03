/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *seeProject;
    QPushButton *seeHomeWork;
    QPushButton *addHomeWork;
    QPushButton *addProject;
    QSpacerItem *verticalSpacer_2;
    QLabel *contentTitle;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLineEdit *input;
    QPushButton *anyButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *deleteLast_2;
    QPushButton *deleteLast;
    QPushButton *pushButton;
    QLabel *title4;
    QLabel *title3;
    QLabel *title1;
    QLabel *title2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 600);
        MainWindow->setMinimumSize(QSize(1000, 600));
        MainWindow->setMaximumSize(QSize(1000, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 981, 597));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 0, 5, 0);
        seeProject = new QPushButton(verticalLayoutWidget);
        seeProject->setObjectName("seeProject");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(seeProject->sizePolicy().hasHeightForWidth());
        seeProject->setSizePolicy(sizePolicy);
        seeProject->setMinimumSize(QSize(0, 30));
        seeProject->setMaximumSize(QSize(16777215, 30));
        seeProject->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font.setPointSize(10);
        font.setBold(true);
        seeProject->setFont(font);
        seeProject->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        seeProject->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: transparent"));

        horizontalLayout->addWidget(seeProject);

        seeHomeWork = new QPushButton(verticalLayoutWidget);
        seeHomeWork->setObjectName("seeHomeWork");
        sizePolicy.setHeightForWidth(seeHomeWork->sizePolicy().hasHeightForWidth());
        seeHomeWork->setSizePolicy(sizePolicy);
        seeHomeWork->setMinimumSize(QSize(0, 30));
        seeHomeWork->setMaximumSize(QSize(16777215, 30));
        seeHomeWork->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setStrikeOut(false);
        seeHomeWork->setFont(font1);
        seeHomeWork->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        seeHomeWork->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: transparent"));

        horizontalLayout->addWidget(seeHomeWork);

        addHomeWork = new QPushButton(verticalLayoutWidget);
        addHomeWork->setObjectName("addHomeWork");
        sizePolicy.setHeightForWidth(addHomeWork->sizePolicy().hasHeightForWidth());
        addHomeWork->setSizePolicy(sizePolicy);
        addHomeWork->setMinimumSize(QSize(100, 30));
        addHomeWork->setMaximumSize(QSize(200, 30));
        addHomeWork->setFont(font);
        addHomeWork->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        addHomeWork->setStyleSheet(QString::fromUtf8("border: none;"));

        horizontalLayout->addWidget(addHomeWork);

        addProject = new QPushButton(verticalLayoutWidget);
        addProject->setObjectName("addProject");
        sizePolicy.setHeightForWidth(addProject->sizePolicy().hasHeightForWidth());
        addProject->setSizePolicy(sizePolicy);
        addProject->setMinimumSize(QSize(0, 30));
        addProject->setMaximumSize(QSize(16777215, 30));
        addProject->setFont(font);
        addProject->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        addProject->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: transparent"));

        horizontalLayout->addWidget(addProject);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        contentTitle = new QLabel(verticalLayoutWidget);
        contentTitle->setObjectName("contentTitle");
        sizePolicy.setHeightForWidth(contentTitle->sizePolicy().hasHeightForWidth());
        contentTitle->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font2.setPointSize(12);
        font2.setBold(true);
        contentTitle->setFont(font2);
        contentTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(contentTitle);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 50, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        input = new QLineEdit(verticalLayoutWidget);
        input->setObjectName("input");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(input->sizePolicy().hasHeightForWidth());
        input->setSizePolicy(sizePolicy1);
        input->setMinimumSize(QSize(500, 35));
        input->setMaximumSize(QSize(500, 35));

        horizontalLayout_4->addWidget(input);

        anyButton = new QPushButton(verticalLayoutWidget);
        anyButton->setObjectName("anyButton");
        sizePolicy1.setHeightForWidth(anyButton->sizePolicy().hasHeightForWidth());
        anyButton->setSizePolicy(sizePolicy1);
        anyButton->setMinimumSize(QSize(110, 37));
        anyButton->setMaximumSize(QSize(110, 37));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font3.setBold(true);
        anyButton->setFont(font3);
        anyButton->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));

        horizontalLayout_4->addWidget(anyButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_3);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setMinimumSize(QSize(600, 300));
        listWidget->setMaximumSize(QSize(600, 300));
        listWidget->setFont(font);

        horizontalLayout_5->addWidget(listWidget);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(200);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, -1, 50);
        deleteLast_2 = new QPushButton(verticalLayoutWidget);
        deleteLast_2->setObjectName("deleteLast_2");
        deleteLast_2->setMinimumSize(QSize(100, 50));
        deleteLast_2->setMaximumSize(QSize(100, 50));
        deleteLast_2->setFont(font);

        horizontalLayout_2->addWidget(deleteLast_2);

        deleteLast = new QPushButton(verticalLayoutWidget);
        deleteLast->setObjectName("deleteLast");
        deleteLast->setMinimumSize(QSize(100, 50));
        deleteLast->setMaximumSize(QSize(100, 50));
        deleteLast->setFont(font);

        horizontalLayout_2->addWidget(deleteLast);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 350, 401, 161));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font4.setPointSize(16);
        font4.setBold(true);
        pushButton->setFont(font4);
        pushButton->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"background-color: #0F0F0F;\n"
"border-radius: 25px;\n"
""));
        title4 = new QLabel(centralwidget);
        title4->setObjectName("title4");
        title4->setGeometry(QRect(0, 30, 1001, 71));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font5.setBold(false);
        title4->setFont(font5);
        title4->setStyleSheet(QString::fromUtf8("olor: white;\n"
"font-size: 50px;"));
        title4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        title3 = new QLabel(centralwidget);
        title3->setObjectName("title3");
        title3->setGeometry(QRect(2, 140, 1001, 31));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        title3->setFont(font6);
        title3->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: #E8E8E8;"));
        title3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        title1 = new QLabel(centralwidget);
        title1->setObjectName("title1");
        title1->setGeometry(QRect(460, 210, 91, 20));
        title1->setFont(font5);
        title1->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"color :#E8E8E8;"));
        title2 = new QLabel(centralwidget);
        title2->setObjectName("title2");
        title2->setGeometry(QRect(470, 250, 63, 61));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font7.setPointSize(24);
        font7.setBold(true);
        title2->setFont(font7);
        title2->setStyleSheet(QString::fromUtf8("olor: white;"));
        title2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        seeProject->setText(QCoreApplication::translate("MainWindow", "See Projects", nullptr));
        seeHomeWork->setText(QCoreApplication::translate("MainWindow", "See Home Work", nullptr));
        addHomeWork->setText(QCoreApplication::translate("MainWindow", "Add Home Work", nullptr));
        addProject->setText(QCoreApplication::translate("MainWindow", "Add Projects", nullptr));
        contentTitle->setText(QCoreApplication::translate("MainWindow", "Add Home Work", nullptr));
        input->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Home Work", nullptr));
        anyButton->setText(QCoreApplication::translate("MainWindow", "Add Home Work", nullptr));
        deleteLast_2->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        deleteLast->setText(QCoreApplication::translate("MainWindow", "Delete Last", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        title4->setText(QCoreApplication::translate("MainWindow", "The App For Students!", nullptr));
        title3->setText(QCoreApplication::translate("MainWindow", "Presented By Berke...", nullptr));
        title1->setText(QCoreApplication::translate("MainWindow", "Click To Start", nullptr));
        title2->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
