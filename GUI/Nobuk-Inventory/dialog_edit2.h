#ifndef DIALOG_EDIT2_H
#define DIALOG_EDIT2_H

#include <QDialog>
#include <QMessageBox>
#include "../../include/core.h"

namespace Ui {
class Dialog_edit2;
}

class Dialog_edit2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_edit2(QWidget *parent = 0);
    ~Dialog_edit2();

//    nobuk::Product product;
    nobuk::Product *product;
    QString name;
    int code;
    float price;
    float quantity;
    int row;

    void attL();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Dialog_edit2 *ui;
    nobuk::Core * core;
};

#endif // DIALOG_EDIT2_H
