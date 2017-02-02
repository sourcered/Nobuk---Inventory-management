#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void defaultTableWidget();
    void addItemTableWidget(int, QString []);       //Row position, column text

public slots:
    void showDetailsItem(int, int);                 //Display Dialog window with informations

private slots:
    void on_actionExit_triggered();
    void on_actionAbout_triggered();
    void on_actionHelp_triggered();
};

#endif // MAINWINDOW_H
