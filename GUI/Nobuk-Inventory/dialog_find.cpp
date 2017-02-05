#include "dialog_find.h"
#include "ui_dialog_find.h"

Dialog_find::Dialog_find(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_find)
{
    ui->setupUi(this);
    this->setFixedSize(300,115);
    core = new nobuk::Core();
    dialogInformation = new Dialog_information(this);
}

Dialog_find::~Dialog_find()
{
    delete ui;
    delete core;
    delete dialogInformation;
    core = nullptr;
}

void Dialog_find::on_pushButton_clicked()
{
    this->close();
}

void Dialog_find::on_pushButton_2_clicked()
{
    nobuk::Product product;
    int code = ui->spinBox_code->value();
    product = core->ioDatabase->get_ProductByCode(code);
    dialogInformation->updateDialogTexts(&product);
    dialogInformation->exec();
}
