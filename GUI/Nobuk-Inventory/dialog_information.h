#ifndef DIALOG_INFORMATION_H
#define DIALOG_INFORMATION_H

#include <QDialog>
#include "../../include/core.h"

namespace Ui {
class Dialog_information;
}

class Dialog_information : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_information(QWidget *parent = 0);
    ~Dialog_information();

    void updateDialogTexts(nobuk::Product *);

private:
    Ui::Dialog_information *ui;
};

#endif // DIALOG_INFORMATION_H
