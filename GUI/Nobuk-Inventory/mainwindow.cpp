#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->mainToolBar->setMovable(false);
    this->setFixedSize(840,600);
    this->setCentralWidget(ui->tableWidget);
    defaultTableWidget();
    connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(showDetailsItem(int,int)));

    //Initializing variables
    dialogRemoveitem = new Dialog_removeitem(this);
    dialogRemoveQuantity = new Dialog_removeQuantity(this);
    dialogExit = new Dialog_exit(this);
    dialogEdit = new Dialog_edit(this);
    dialogAddquantity = new Dialog_addquantity(this);
    dialogAddItem = new Dialog_additem(this);
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
    ui->tableWidget->setColumnWidth(0,61);          //61
    ui->tableWidget->setColumnWidth(1,634);         //634
    ui->tableWidget->setColumnWidth(2,102);         //123

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
    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(product.code)));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(product.name)));
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(product.quantity)));
}

bool MainWindow::updateTableList()
{
    ui->tableWidget->clearContents();
    //
    std::list<nobuk::Product> listProducts = core->ioDatabase->get_Products();

    size_t i = 0;
    for(auto item = listProducts.begin(); item != listProducts.end(); item++, i++)
        addItemTableWidget(i, *item);
    return true;
}

nobuk::Product MainWindow::get_selected_item_list()
{
    nobuk::Product product;
    int row = ui->tableWidget->currentRow();
    product.id = row+1;
    product.code = ui->tableWidget->takeItem(row, 0)->text().toInt();
    product.name = ui->tableWidget->takeItem(row, 1)->text().toStdString();
    product.quantity = ui->tableWidget->takeItem(row, 2)->text().toDouble();
    return product;
}

void MainWindow::showDetailsItem(int row, int column)
{
    //Show Dialog
    QMessageBox::information(this, "Informations", "Row index Selected: " + QString::number(row));
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
    //Dialog
    int key = 0;    //1977
    if(core->delete_database(key)) QMessageBox::information(this, "Database", "All data has been deleted.");
    //Update table
    updateTableList();
}

void MainWindow::on_actionAdd_Item_triggered()
{
    dialogAddItem->exec();
    //Update table
    updateTableList();
}

void MainWindow::on_actionDelete_Item_triggered()
{
    dialogRemoveitem->row = ui->tableWidget->currentRow() + 1;
    dialogRemoveitem->exec();
    core->ioDatabase->update_ids();
    //Update table
    updateTableList();
}

void MainWindow::on_actionAdd_triggered()
{
    dialogAddquantity->row = ui->tableWidget->currentRow() + 1;
    dialogAddquantity->exec();
    //Update table
    updateTableList();
}

void MainWindow::on_actionRemove_triggered()
{
    dialogRemoveQuantity->row = ui->tableWidget->currentRow() + 1;
    dialogRemoveQuantity->exec();
    //Update table
    updateTableList();
}

void MainWindow::on_actionEdit_triggered()
{
    dialogEdit->exec();
    //Update table
    updateTableList();
}

//Make a method get row index table and execute operation
