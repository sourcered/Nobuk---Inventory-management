#ifndef DIALOG_GETKEY_H
#define DIALOG_GETKEY_H

#include <QDialog>
#include "../../include/core.h"
#include <QMessageBox>

namespace Ui {
class Dialog_getKey;
}

class Dialog_getKey : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_getKey(QWidget *parent = 0);
    ~Dialog_getKey();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_getKey *ui;
    nobuk::Core * core;
};

#endif // DIALOG_GETKEY_H
