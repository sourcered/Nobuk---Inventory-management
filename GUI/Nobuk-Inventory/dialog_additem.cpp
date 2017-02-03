#include "dialog_additem.h"
#include "ui_dialog_additem.h"

Dialog_additem::Dialog_additem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_additem)
{
    ui->setupUi(this);
    core = new nobuk::Core();
}

Dialog_additem::~Dialog_additem()
{
    delete ui;
}

void Dialog_additem::on_pushButton_clicked()
{
    this->close();
}

void Dialog_additem::on_pushButton_2_clicked()
{
    //Add
    nobuk::Product product;
    product.code = ui->spinBox_Code->value();
    product.name = ui->lineEdit_Name->text().toStdString();
    product.quantity = ui->doubleSpinBox_Quantity->value();
    product.price = ui->doubleSpinBox_Price->value();
    std::cout << product.quantity << std::endl;
    core->add_product(&product);
    QMessageBox::information(this, "Sucess", "Item added with sucess.");
    this->close();
}
