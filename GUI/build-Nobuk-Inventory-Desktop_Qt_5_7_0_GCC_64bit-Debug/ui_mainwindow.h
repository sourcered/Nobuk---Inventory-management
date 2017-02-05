/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCarregar;
    QAction *actionExit;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionDelete_All;
    QAction *actionAdd_Item;
    QAction *actionDelete_Item;
    QAction *actionAdd;
    QAction *actionRemove;
    QAction *actionEdit;
    QAction *actionInformation;
    QAction *actionFInd;
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menuFIle;
    QMenu *menuAbout;
    QMenu *menuItem;
    QMenu *menuQuantity;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(840, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionCarregar = new QAction(MainWindow);
        actionCarregar->setObjectName(QStringLiteral("actionCarregar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/Nobuk-Inventory-Icons/Load.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCarregar->setIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/Nobuk-Inventory-Icons/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/Nobuk-Inventory-Icons/Help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon2);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/Nobuk-Inventory-Icons/About.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon3);
        actionDelete_All = new QAction(MainWindow);
        actionDelete_All->setObjectName(QStringLiteral("actionDelete_All"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/Nobuk-Inventory-Icons/Delete_all.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_All->setIcon(icon4);
        actionAdd_Item = new QAction(MainWindow);
        actionAdd_Item->setObjectName(QStringLiteral("actionAdd_Item"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/Nobuk-Inventory-Icons/Add_Item.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Item->setIcon(icon5);
        actionDelete_Item = new QAction(MainWindow);
        actionDelete_Item->setObjectName(QStringLiteral("actionDelete_Item"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/Nobuk-Inventory-Icons/Delete_Item.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_Item->setIcon(icon6);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/res/Nobuk-Inventory-Icons/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon7);
        actionRemove = new QAction(MainWindow);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/res/Nobuk-Inventory-Icons/Remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove->setIcon(icon8);
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QStringLiteral("actionEdit"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/res/Nobuk-Inventory-Icons/Edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit->setIcon(icon9);
        actionInformation = new QAction(MainWindow);
        actionInformation->setObjectName(QStringLiteral("actionInformation"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/res/Nobuk-Inventory-Icons/Show_Informations.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInformation->setIcon(icon10);
        actionFInd = new QAction(MainWindow);
        actionFInd->setObjectName(QStringLiteral("actionFInd"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/res/Nobuk-Inventory-Icons/Find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFInd->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 821, 561));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 840, 19));
        menuFIle = new QMenu(menuBar);
        menuFIle->setObjectName(QStringLiteral("menuFIle"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuItem = new QMenu(menuBar);
        menuItem->setObjectName(QStringLiteral("menuItem"));
        menuQuantity = new QMenu(menuBar);
        menuQuantity->setObjectName(QStringLiteral("menuQuantity"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFIle->menuAction());
        menuBar->addAction(menuItem->menuAction());
        menuBar->addAction(menuQuantity->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFIle->addAction(actionCarregar);
        menuFIle->addSeparator();
        menuFIle->addAction(actionDelete_All);
        menuFIle->addSeparator();
        menuFIle->addAction(actionExit);
        menuAbout->addAction(actionHelp);
        menuAbout->addSeparator();
        menuAbout->addAction(actionAbout);
        menuItem->addAction(actionAdd_Item);
        menuItem->addAction(actionDelete_Item);
        menuItem->addSeparator();
        menuItem->addAction(actionEdit);
        menuItem->addAction(actionInformation);
        menuItem->addAction(actionFInd);
        menuQuantity->addAction(actionAdd);
        menuQuantity->addAction(actionRemove);
        mainToolBar->addAction(actionAdd_Item);
        mainToolBar->addAction(actionDelete_Item);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionEdit);
        mainToolBar->addAction(actionInformation);
        mainToolBar->addAction(actionFInd);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAdd);
        mainToolBar->addAction(actionRemove);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionCarregar->setText(QApplication::translate("MainWindow", "Load", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About ", 0));
        actionDelete_All->setText(QApplication::translate("MainWindow", "Delete All", 0));
        actionAdd_Item->setText(QApplication::translate("MainWindow", "Add", 0));
        actionDelete_Item->setText(QApplication::translate("MainWindow", "Delete", 0));
        actionAdd->setText(QApplication::translate("MainWindow", "Add", 0));
        actionRemove->setText(QApplication::translate("MainWindow", "Remove", 0));
        actionEdit->setText(QApplication::translate("MainWindow", "Edit", 0));
        actionInformation->setText(QApplication::translate("MainWindow", "Information", 0));
        actionFInd->setText(QApplication::translate("MainWindow", "Find", 0));
        menuFIle->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
        menuItem->setTitle(QApplication::translate("MainWindow", "Item", 0));
        menuQuantity->setTitle(QApplication::translate("MainWindow", "Quantity", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
