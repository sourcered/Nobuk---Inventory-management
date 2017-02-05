#ifndef DIALOG_FIND_H
#define DIALOG_FIND_H

#include <QDialog>
#include <QMessageBox>
#include "../../include/core.h"
#include "dialog_information.h"

namespace Ui {
class Dialog_find;
}

class Dialog_find : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_find(QWidget *parent = 0);
    ~Dialog_find();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_find *ui;
    nobuk::Core * core;
    Dialog_information * dialogInformation;
};

#endif // DIALOG_FIND_H
