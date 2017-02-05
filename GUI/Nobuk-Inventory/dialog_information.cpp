#include "dialog_information.h"
#include "ui_dialog_information.h"

Dialog_information::Dialog_information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_information)
{
    ui->setupUi(this);
}

Dialog_information::~Dialog_information()
{
    delete ui;
}

void Dialog_information::updateDialogTexts(nobuk::Product * product)
{
    QString before = "<html><head/><body><p><span style=\" font-size:18pt; font-style:italic;\">";
    QString after = "</span></p></body></html>";
    ui->label_name->setText(before + QString::fromStdString(product->name) + after);
    ui->label_code->setText(before + QString::number(product->code) + after);
    ui->label_quantity->setText(before + QString::number(product->quantity) + (product->isDecimal? " Kg" : "  ") + after);
    ui->label_price->setText(before + QString::number(product->price) + after);
    ui->label_total->setText(before + QString::number(product->total) + after);
}
