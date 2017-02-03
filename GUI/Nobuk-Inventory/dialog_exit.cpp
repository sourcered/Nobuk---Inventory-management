#include "dialog_exit.h"
#include "ui_dialog_exit.h"

Dialog_exit::Dialog_exit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_exit)
{
    ui->setupUi(this);
    this->setWindowTitle("Exit");
    this->setFixedSize(350, 130);
}

Dialog_exit::~Dialog_exit()
{
    delete ui;
}

void Dialog_exit::on_buttonBox_accepted()
{
    exit(0);
}

void Dialog_exit::on_buttonBox_rejected()
{
    this->close();
}
