/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSLOT;
    QAction *actionUSB_IO;
    QAction *actionCAMERA;
    QAction *actionJ1_TOOLS;
    QAction *actionEXIT;
    QAction *actionTerminal;
    QAction *actionReboot;
    QAction *actionPowerOff;
    QAction *actionNetwork;
    QAction *actionFonts;
    QWidget *centralwidget;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_Network;
    QLabel *label_ip;
    QLabel *label_ip_2;
    QLabel *label_ip_3;
    QLabel *label_IPValue;
    QLabel *label_Subnetvalue;
    QLabel *label_GatewayValue;
    QPushButton *pushButtonclose;
    QMenuBar *menubar;
    QMenu *menuApplications;
    QMenu *menuExit;
    QMenu *menuNetwork;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 480);
        MainWindow->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.952, y1:0.0284091, x2:0, y2:0.982909, stop:0 rgba(53, 94, 255, 255), stop:0.792271 rgba(121, 100, 195, 255));"));
        actionSLOT = new QAction(MainWindow);
        actionSLOT->setObjectName(QStringLiteral("actionSLOT"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/slot-machine.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSLOT->setIcon(icon);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        actionSLOT->setFont(font);
        actionUSB_IO = new QAction(MainWindow);
        actionUSB_IO->setObjectName(QStringLiteral("actionUSB_IO"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/usb.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUSB_IO->setIcon(icon1);
        actionUSB_IO->setFont(font);
        actionCAMERA = new QAction(MainWindow);
        actionCAMERA->setObjectName(QStringLiteral("actionCAMERA"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCAMERA->setIcon(icon2);
        actionCAMERA->setFont(font);
        actionJ1_TOOLS = new QAction(MainWindow);
        actionJ1_TOOLS->setObjectName(QStringLiteral("actionJ1_TOOLS"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/control-panel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJ1_TOOLS->setIcon(icon3);
        QFont font1;
        font1.setFamily(QStringLiteral("Sans Serif"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        actionJ1_TOOLS->setFont(font1);
        actionEXIT = new QAction(MainWindow);
        actionEXIT->setObjectName(QStringLiteral("actionEXIT"));
        actionEXIT->setFont(font);
        actionTerminal = new QAction(MainWindow);
        actionTerminal->setObjectName(QStringLiteral("actionTerminal"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/terminal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminal->setIcon(icon4);
        QFont font2;
        font2.setPointSize(16);
        actionTerminal->setFont(font2);
        actionReboot = new QAction(MainWindow);
        actionReboot->setObjectName(QStringLiteral("actionReboot"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/reboot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReboot->setIcon(icon5);
        actionReboot->setFont(font2);
        actionPowerOff = new QAction(MainWindow);
        actionPowerOff->setObjectName(QStringLiteral("actionPowerOff"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/on-off-button (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPowerOff->setIcon(icon6);
        actionPowerOff->setFont(font2);
        actionNetwork = new QAction(MainWindow);
        actionNetwork->setObjectName(QStringLiteral("actionNetwork"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/systeminfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNetwork->setIcon(icon7);
        actionFonts = new QAction(MainWindow);
        actionFonts->setObjectName(QStringLiteral("actionFonts"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFonts->setIcon(icon8);
        actionFonts->setFont(font1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 190, 801, 171));
        QFont font3;
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label->setAlignment(Qt::AlignCenter);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 321, 221));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: Transparent;"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_Network = new QWidget();
        page_Network->setObjectName(QStringLiteral("page_Network"));
        page_Network->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        label_ip = new QLabel(page_Network);
        label_ip->setObjectName(QStringLiteral("label_ip"));
        label_ip->setGeometry(QRect(10, 40, 141, 31));
        label_ip_2 = new QLabel(page_Network);
        label_ip_2->setObjectName(QStringLiteral("label_ip_2"));
        label_ip_2->setGeometry(QRect(10, 90, 141, 31));
        label_ip_3 = new QLabel(page_Network);
        label_ip_3->setObjectName(QStringLiteral("label_ip_3"));
        label_ip_3->setGeometry(QRect(10, 140, 151, 31));
        label_IPValue = new QLabel(page_Network);
        label_IPValue->setObjectName(QStringLiteral("label_IPValue"));
        label_IPValue->setGeometry(QRect(170, 40, 131, 31));
        label_Subnetvalue = new QLabel(page_Network);
        label_Subnetvalue->setObjectName(QStringLiteral("label_Subnetvalue"));
        label_Subnetvalue->setGeometry(QRect(170, 90, 131, 31));
        label_GatewayValue = new QLabel(page_Network);
        label_GatewayValue->setObjectName(QStringLiteral("label_GatewayValue"));
        label_GatewayValue->setGeometry(QRect(170, 140, 131, 31));
        pushButtonclose = new QPushButton(page_Network);
        pushButtonclose->setObjectName(QStringLiteral("pushButtonclose"));
        pushButtonclose->setGeometry(QRect(230, 190, 89, 25));
        pushButtonclose->setStyleSheet(QLatin1String("background-color:rgb(186, 189, 182);\n"
"border-radius:5px;"));
        stackedWidget->addWidget(page_Network);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 37));
        menubar->setFont(font);
        menubar->setStyleSheet(QLatin1String("background-color:rgb(46, 52, 54);\n"
"color:rgb(255,255,255);"));
        menuApplications = new QMenu(menubar);
        menuApplications->setObjectName(QStringLiteral("menuApplications"));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        menuApplications->setFont(font4);
        menuApplications->setStyleSheet(QStringLiteral(""));
        menuApplications->setSeparatorsCollapsible(true);
        menuExit = new QMenu(menubar);
        menuExit->setObjectName(QStringLiteral("menuExit"));
        menuNetwork = new QMenu(menubar);
        menuNetwork->setObjectName(QStringLiteral("menuNetwork"));
        menuNetwork->setGeometry(QRect(412, 156, 265, 96));
        menuNetwork->setFont(font);
        menuNetwork->setIcon(icon7);
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setStyleSheet(QStringLiteral("background-color:rgb(238, 238, 236)"));
        MainWindow->addToolBar(Qt::BottomToolBarArea, toolBar);

        menubar->addAction(menuNetwork->menuAction());
        menubar->addAction(menuApplications->menuAction());
        menubar->addAction(menuExit->menuAction());
        menuApplications->addSeparator();
        menuApplications->addSeparator();
        menuApplications->addAction(actionSLOT);
        menuApplications->addSeparator();
        menuApplications->addAction(actionUSB_IO);
        menuApplications->addSeparator();
        menuApplications->addAction(actionCAMERA);
        menuApplications->addSeparator();
        menuApplications->addSeparator();
        menuApplications->addSeparator();
        menuApplications->addAction(actionJ1_TOOLS);
        menuApplications->addSeparator();
        menuApplications->addAction(actionFonts);
        menuApplications->addSeparator();
        menuApplications->addSeparator();
        menuApplications->addSeparator();
        menuExit->addSeparator();
        menuExit->addAction(actionTerminal);
        menuExit->addSeparator();
        menuExit->addAction(actionReboot);
        menuExit->addAction(actionPowerOff);
        menuNetwork->addAction(actionNetwork);
        toolBar->addAction(actionSLOT);
        toolBar->addSeparator();
        toolBar->addAction(actionUSB_IO);
        toolBar->addSeparator();
        toolBar->addAction(actionJ1_TOOLS);
        toolBar->addSeparator();
        toolBar->addAction(actionCAMERA);
        toolBar->addSeparator();
        toolBar->addAction(actionFonts);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSLOT->setText(QApplication::translate("MainWindow", "Slot", nullptr));
        actionUSB_IO->setText(QApplication::translate("MainWindow", "Usb I/O", nullptr));
        actionCAMERA->setText(QApplication::translate("MainWindow", "Camera", nullptr));
        actionJ1_TOOLS->setText(QApplication::translate("MainWindow", "J1 Tools", nullptr));
        actionEXIT->setText(QApplication::translate("MainWindow", "EXIT", nullptr));
        actionTerminal->setText(QApplication::translate("MainWindow", "Terminal", nullptr));
#ifndef QT_NO_TOOLTIP
        actionTerminal->setToolTip(QApplication::translate("MainWindow", "TERMINAL", nullptr));
#endif // QT_NO_TOOLTIP
        actionReboot->setText(QApplication::translate("MainWindow", "Reboot", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReboot->setToolTip(QApplication::translate("MainWindow", "REBOOT", nullptr));
#endif // QT_NO_TOOLTIP
        actionPowerOff->setText(QApplication::translate("MainWindow", "PowerOff", nullptr));
#ifndef QT_NO_TOOLTIP
        actionPowerOff->setToolTip(QApplication::translate("MainWindow", "POWEROFF", nullptr));
#endif // QT_NO_TOOLTIP
        actionNetwork->setText(QApplication::translate("MainWindow", "Network", nullptr));
        actionFonts->setText(QApplication::translate("MainWindow", "Fonts", nullptr));
        label->setText(QApplication::translate("MainWindow", "J1-MX6 Demo Software Selection", nullptr));
        label_ip->setText(QApplication::translate("MainWindow", "IP Address:", nullptr));
        label_ip_2->setText(QApplication::translate("MainWindow", "Subnet Mask:", nullptr));
        label_ip_3->setText(QApplication::translate("MainWindow", "Default Gateway:", nullptr));
        label_IPValue->setText(QString());
        label_Subnetvalue->setText(QString());
        label_GatewayValue->setText(QString());
        pushButtonclose->setText(QApplication::translate("MainWindow", "Close", nullptr));
        menuApplications->setTitle(QApplication::translate("MainWindow", "Applications", nullptr));
        menuExit->setTitle(QApplication::translate("MainWindow", "Exit", nullptr));
        menuNetwork->setTitle(QApplication::translate("MainWindow", "Network", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
