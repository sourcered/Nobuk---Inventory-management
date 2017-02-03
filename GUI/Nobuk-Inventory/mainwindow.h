#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#include "../../include/core.h"
#include "dialog_exit.h"
#include "dialog_removequantity.h"
#include "dialog_addquantity.h"
#include "dialog_additem.h"
#include "dialog_removeitem.h"
#include "dialog_edit2.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    nobuk::Core * core;

private:
    Ui::MainWindow *ui;
    void defaultTableWidget();
    void addItemTableWidget(int, QString []);       //Row position, column text
    void addItemTableWidget(int, nobuk::Product);       //Row position, struct Product
    bool updateTableList();
    nobuk::Product get_selected_item_list();
    Dialog_additem * dialogAddItem;
    Dialog_removeitem * dialogRemoveitem;
    Dialog_addquantity * dialogAddquantity;
    Dialog_removeQuantity * dialogRemoveQuantity;
    Dialog_edit2 * dialogEdit;
    Dialog_exit * dialogExit;

public slots:
    void showDetailsItem(int, int);                 //Display Dialog window with informations

private slots:
    void on_actionExit_triggered();
    void on_actionAbout_triggered();
    void on_actionHelp_triggered();
    void on_actionCarregar_triggered();
    void on_actionDelete_All_triggered();
    void on_actionAdd_Item_triggered();
    void on_actionDelete_Item_triggered();
    void on_actionAdd_triggered();
    void on_actionRemove_triggered();
    void on_actionEdit_triggered();
};

#endif // MAINWINDOW_H
