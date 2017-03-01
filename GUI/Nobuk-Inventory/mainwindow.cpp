#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    core(nullptr)
{
    ui->setupUi(this);

    ui->mainToolBar->setMovable(false);
    this->setFixedSize(1000,600);
    this->setCentralWidget(ui->tableWidget);
    defaultTableWidget();
    connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(showDetailsItem(int,int)));

    //Initializing variables
    dialogRemoveitem = new Dialog_removeitem(this);
    dialogRemoveQuantity = new Dialog_removeQuantity(this);
    dialogExit = new Dialog_exit(this);
    dialogEdit = new Dialog_edit2(this);
    dialogAddquantity = new Dialog_addquantity(this);
    dialogAddItem = new Dialog_additem(this);
    dialogInformation = new Dialog_information(this);
    dialogFind = new Dialog_find(this);
    dialogGetkey = new Dialog_getKey(this);
    dialogEdit->product = new nobuk::Product();
    //Well done.
    ui->statusBar->showMessage("Wellcome, Nobuk", 5000);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete dialogEdit;
    delete dialogExit;
    delete dialogRemoveitem;
    delete dialogAddquantity;
    delete dialogRemoveQuantity;
    delete dialogGetkey;
}

void MainWindow::showMessageStatusbar(QString message)
{
    ui->statusBar->showMessage(message, 5000);
}

void MainWindow::defaultTableWidget()
{
    ui->tableWidget->setRowCount(70000);
    ui->tableWidget->setColumnCount(3);

    //Configuring header
    QStringList TableHeader;
    TableHeader << "CODE" << "NAME" << "QUANTITY";
    ui->tableWidget->setHorizontalHeaderLabels(TableHeader);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setColumnWidth(0,65);          //61
    ui->tableWidget->setColumnWidth(1,769);         //634
    ui->tableWidget->setColumnWidth(2,110);         //123

    //No row Edit
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //Changing mode to select row
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
}

void MainWindow::addItemTableWidget(int row, QString listItem[])
{
    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(listItem[0]));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(listItem[1]));
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(listItem[2]));
}

void MainWindow::addItemTableWidget(int row, nobuk::Product product)
{
    QString qtd = QString::number(product.quantity) + (product.isDecimal ? " Kg" : "  ");
    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(product.code)));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(product.name)));
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(qtd));
}

bool MainWindow::updateTableList()
{
    ui->tableWidget->clearContents();

    std::list<nobuk::Product> listProducts = core->ioDatabase->get_Products();

    size_t i = 0;
    for(auto item = listProducts.begin(); item != listProducts.end(); item++, i++)
        addItemTableWidget(i, *item);
    return true;
}

bool MainWindow::updateTableList(int id)
{
    nobuk::Product product = core->ioDatabase->get_Product(id);
    QString qtd = QString::number(product.quantity) + (product.isDecimal ? " Kg" : "  ");
    ui->tableWidget->item(id-1, 0)->setText(QString::number(product.code));
    ui->tableWidget->item(id-1, 1)->setText(QString::fromStdString(product.name));
    ui->tableWidget->item(id-1, 2)->setText(qtd);

    return true;
}

nobuk::Product MainWindow::get_selected_item_list()
{
    nobuk::Product product;
    int row = ui->tableWidget->currentRow();
    product.id = row+1;
    product.code = ui->tableWidget->item(row, 0)->text().toInt();
    product.name = ui->tableWidget->item(row, 1)->text().toStdString();

    std::string qtdStr = ui->tableWidget->item(row, 2)->text().toStdString();
    std::string sub = qtdStr.substr(0, qtdStr.length()-2);
    product.quantity = QString::fromStdString(sub).toFloat();

    sub = qtdStr.substr(qtdStr.length()-2, qtdStr.length()-1);
    product.isDecimal = sub == "Kg";

    product.price = core->ioDatabase->get_price(row+1);

    product.total = core->ioDatabase->get_Total1(row+1);

    return product;
}

void MainWindow::showDetailsItem(int row, int column)
{
    //Show Dialog
//    QMessageBox::information(this, "Informations", "Row index Selected: " + QString::number(row));
    QMessageBox::information(this, "Informations", "Total: " + QString::number(core->ioDatabase->get_Total1(row+1)));
}

void MainWindow::on_actionExit_triggered()
{
    dialogExit->exec();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "About", "Author: Igor\nVersion: 0.0.1");
}

void MainWindow::on_actionHelp_triggered()
{
    QMessageBox::information(this, "Help", "E-mail: panddoby@outlook.com");
}

void MainWindow::on_actionCarregar_triggered()
{
    //Load database or create one
    core = new nobuk::Core();
    if(updateTableList()) QMessageBox::information(this, "Sucess", "Sucess.");
    else QMessageBox::information(this, "Error", "Error to load.");
}

void MainWindow::on_actionDelete_All_triggered()
{
    if(core == nullptr)
    {
        QMessageBox::information(this, "Error", "Error, Load first.");
        return;
    }
    //Dialog
    int key = 1977;    //1977
    if(core->delete_database(key)) QMessageBox::information(this, "Database", "All data has been deleted.");
    //Update table
    updateTableList();
}

void MainWindow::on_actionAdd_Item_triggered()
{
    if(core == nullptr)
    {
        QMessageBox::information(this, "Error", "Error, Load first.");
        return;
    }
    dialogAddItem->exec();
    //Update table
    updateTableList();
}

void MainWindow::on_actionDelete_Item_triggered()
{
    if(core == nullptr)
    {
        QMessageBox::information(this, "Error", "Error, Load first.");
        return;
    }
    dialogRemoveitem->row = ui->tableWidget->currentRow() + 1;
    dialogRemoveitem->exec();
    core->ioDatabase->update_ids();
    //Update table
    updateTableList();
}

void MainWindow::on_actionAdd_triggered()
{
    if(core == nullptr)
    {
        QMessageBox::information(this, "Error", "Error, Load first.");
        return;
    }
    int id = ui->tableWidget->currentRow() + 1;
    dialogAddquantity->row = id;
    dialogAddquantity->exec();
    //Update table
    updateTableList(id);
}

void MainWindow::on_actionRemove_triggered()
{
    if(core == nullptr)
    {
        QMessageBox::information(this, "Error", "Error, Load first.");
        return;
    }
    int id = ui->tableWidget->currentRow() + 1;
    dialogRemoveQuantity->row = id;
    dialogRemoveQuantity->exec();
    //Update table
    updateTableList(id);
}

void MainWindow::on_actionEdit_triggered()
{
    if(core == nullptr)
    {
        QMessageBox::information(this, "Error", "Error, Load first.");
        return;
    }
    nobuk::Product p = get_selected_item_list();
    dialogEdit->code =      p.code;
    dialogEdit->name =      QString::fromStdString(p.name);
    dialogEdit->quantity =  p.quantity;
    dialogEdit->price =     p.price;
    dialogEdit->row =       p.id;
    dialogEdit->isdec =     p.isDecimal;

    //Update fields in Dialogs
    dialogEdit->attL();

    dialogEdit->exec();
//    updateTableList();
    updateTableList(p.id);
}

void MainWindow::on_actionInformation_triggered()
{
    if(core == nullptr)
    {
        QMessageBox::information(this, "Error", "Error, Load first.");
        return;
    }
    nobuk::Product product = get_selected_item_list();
    dialogInformation->updateDialogTexts(&product);
    dialogInformation->exec();
//    updateTableList();
}

void MainWindow::on_actionFInd_triggered()
{
    if(core == nullptr)
    {
        QMessageBox::information(this, "Error", "Error, Load first.");
        return;
    }
    dialogFind->exec();
}

void MainWindow::on_actionTotal_triggered()
{
    if(core == nullptr)
    {
        QMessageBox::information(this, "Error", "Error, Load first.");
        return;
    }
    dialogGetkey->exec();
}
