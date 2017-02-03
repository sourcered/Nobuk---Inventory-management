#include "dialog_edit.h"
#include "ui_dialog_edit.h"

Dialog_edit::Dialog_edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_edit)
{
    ui->setupUi(this);
}

Dialog_edit::~Dialog_edit()
{
    delete ui;
}

void Dialog_edit::on_pushButton_2_clicked()
{
    this->close();
}

void Dialog_edit::on_pushButton_clicked()
{

}
