#include "dialog_addquantity.h"
#include "ui_dialog_addquantity.h"

Dialog_addquantity::Dialog_addquantity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_addquantity)
{
    ui->setupUi(this);
    this->setFixedSize(300, 100);
    this->setWindowTitle("Add Quantity");
    core = new nobuk::Core();
}

Dialog_addquantity::~Dialog_addquantity()
{
    delete ui;
}

void Dialog_addquantity::on_pushButton_2_clicked()
{
    //Add
    if(core->add_quantity(row, ui->doubleSpinBox->value()))
        QMessageBox::information(this, "Sucess", "Quantity added.");
    else
        QMessageBox::information(this, "Error", "Quantity Not added.");
    this->close();
}

void Dialog_addquantity::on_pushButton_clicked()
{
    this->close();
}
