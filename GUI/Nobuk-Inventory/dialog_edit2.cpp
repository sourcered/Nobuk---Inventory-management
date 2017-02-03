#include "dialog_edit2.h"
#include "ui_dialog_edit2.h"

Dialog_edit2::Dialog_edit2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_edit2)
{
    ui->setupUi(this);
    core = new nobuk::Core();
}

Dialog_edit2::~Dialog_edit2()
{
    delete ui;
}

void Dialog_edit2::on_pushButton_2_clicked()
{
    nobuk::Product p;
    p.id = row;
    p.code = ui->spinBox_Code->value();
    p.name = ui->lineEdit_Name->text().toStdString();
    p.price = ui->doubleSpinBox_Price->value();
    p.quantity = ui->doubleSpinBox_Quantity->value();
    p.isDecimal = ui->checkBox_Kg->isChecked();

    //Edit
    if(core->update_product(&p))
        QMessageBox::information(this, "Sucess", "Item Edited.");
    else
        QMessageBox::information(this, "Error", "Item Not Edited");
    this->close();
}

void Dialog_edit2::on_pushButton_clicked()
{
    this->close();
}

void Dialog_edit2::attL()
{
    ui->doubleSpinBox_Price->setValue(price);
    ui->doubleSpinBox_Quantity->setValue(quantity);
    ui->lineEdit_Name->setText(name);
    ui->spinBox_Code->setValue(code);
    ui->checkBox_Kg->setChecked(isdec);
}
