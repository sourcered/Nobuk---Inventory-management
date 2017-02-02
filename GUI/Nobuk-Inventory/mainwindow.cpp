#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

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

    //Well done.
    ui->statusBar->showMessage("Wellcome, Nobuk", 5000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::defaultTableWidget()
{
    ui->tableWidget->setRowCount(2);
    ui->tableWidget->setColumnCount(3);

    //Configuring header
    QStringList TableHeader;
    TableHeader << "CODE" << "NAME" << "QUANTITY";
    ui->tableWidget->setHorizontalHeaderLabels(TableHeader);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setColumnWidth(0,123);
    ui->tableWidget->setColumnWidth(1,573);
    ui->tableWidget->setColumnWidth(2,123);

    //No row Edit
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //Changing mode to select row
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    //Debug
    QString l[] = {"1244", "Truck", "10.5"};
    addItemTableWidget(0,l);
}

void MainWindow::addItemTableWidget(int row, QString listItem[])
{
    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(listItem[0]));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(listItem[1]));
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(listItem[2]));
}

void MainWindow::showDetailsItem(int row, int column)
{
    //Show Dialog
    QMessageBox::information(this,"Informations","Row index Selected: " + QString::number(row));
}

void MainWindow::on_actionExit_triggered()
{
    exit(0);
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "About", "Author: Igor\nVersion: 0.0.1");
}

void MainWindow::on_actionHelp_triggered()
{
    QMessageBox::information(this, "Help", "E-mail: panddoby@outlook.com");
}
