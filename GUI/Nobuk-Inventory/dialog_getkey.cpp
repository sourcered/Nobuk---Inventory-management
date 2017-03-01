#include "dialog_getkey.h"
#include "ui_dialog_getkey.h"

Dialog_getKey::Dialog_getKey(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_getKey)
{
    ui->setupUi(this);
    core = new nobuk::Core();
}

Dialog_getKey::~Dialog_getKey()
{
    delete ui;
}

void Dialog_getKey::on_pushButton_clicked()
{
    int key;
    key = ui->spinBox_passoword->value();

    std::string str;

    std::fstream infile;
    infile.open("../../other/delete-key.txt");
    std::getline(infile, str);
    infile.close();
    std::string::size_type sz = str.size();
    int filekey = std::stoi(str, &sz);
    if(key == filekey)
    {
    float total = 0.0f;
    std::list<nobuk::Product> products;
    //Get All products
    products = core->ioDatabase->get_Products();
    //Multiply quantity by price of each product
    for(auto it = products.begin(); it != products.end(); it++)
        total += it->price * it->quantity;
    //Shows total
    QMessageBox::information(this, "inventory\'s Total", "Total: " + QString::number(total));
    }
    else QMessageBox::information(this, "inventory\'s Total", "Wrong passwod");
    ui->spinBox_passoword->setValue(0);
    this->close();
}

void Dialog_getKey::on_pushButton_2_clicked()
{
    this->close();
}
