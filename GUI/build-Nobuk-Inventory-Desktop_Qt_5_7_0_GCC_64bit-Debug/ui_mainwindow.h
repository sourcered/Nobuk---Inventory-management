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
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionDelete_All = new QAction(MainWindow);
        actionDelete_All->setObjectName(QStringLiteral("actionDelete_All"));
        actionAdd_Item = new QAction(MainWindow);
        actionAdd_Item->setObjectName(QStringLiteral("actionAdd_Item"));
        actionDelete_Item = new QAction(MainWindow);
        actionDelete_Item->setObjectName(QStringLiteral("actionDelete_Item"));
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionRemove = new QAction(MainWindow);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QStringLiteral("actionEdit"));
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
        menuQuantity->addAction(actionAdd);
        menuQuantity->addAction(actionRemove);

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
