#include "dialog_removeitem.h"
#include "ui_dialog_removeitem.h"

Dialog_removeitem::Dialog_removeitem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_removeitem)
{
    ui->setupUi(this);
    this->setFixedSize(300, 100);
    this->setWindowTitle("Delete Item");
    core = new nobuk::Core();
}

Dialog_removeitem::~Dialog_removeitem()
{
    delete ui;
    delete core;
}

void Dialog_removeitem::on_pushButton_clicked()
{
//    delete this;
    this->close();
}

void Dialog_removeitem::on_pushButton_2_clicked()
{
    //Delete item
    core->delete_product(row);
    QMessageBox::information(this, "Sucess", "Item has been deleted with sucess.");
    this->close();
}
