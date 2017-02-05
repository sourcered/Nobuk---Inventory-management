#include "dialog_removequantity.h"
#include "ui_dialog_removequantity.h"

Dialog_removeQuantity::Dialog_removeQuantity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_removeQuantity)
{
    ui->setupUi(this);
    this->setFixedSize(300, 100);
    this->setWindowTitle("Remove Quantity");
    core = new nobuk::Core();
}

Dialog_removeQuantity::~Dialog_removeQuantity()
{
    delete ui;
    delete core;
}

void Dialog_removeQuantity::on_pushButton_clicked()
{
    this->close();
}

void Dialog_removeQuantity::on_pushButton_2_clicked()
{
    //Remove
    if(core->remove_quantity(row, ui->doubleSpinBox->value()))
        QMessageBox::information(this, "Sucess", "Quantity removed.");
    else
        QMessageBox::information(this, "Error", "Quantity Not removed.");
    this->close();
}
