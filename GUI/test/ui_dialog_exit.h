/********************************************************************************
** Form generated from reading UI file 'dialog_exit.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_EXIT_H
#define UI_DIALOG_EXIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_exit
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_exit)
    {
        if (Dialog_exit->objectName().isEmpty())
            Dialog_exit->setObjectName(QStringLiteral("Dialog_exit"));
        Dialog_exit->resize(350, 130);
        verticalLayout = new QVBoxLayout(Dialog_exit);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Dialog_exit);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        buttonBox = new QDialogButtonBox(Dialog_exit);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog_exit);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_exit, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_exit, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_exit);
    } // setupUi

    void retranslateUi(QDialog *Dialog_exit)
    {
        Dialog_exit->setWindowTitle(QApplication::translate("Dialog_exit", "Dialog", 0));
        label->setText(QApplication::translate("Dialog_exit", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Are you sure to Exit?</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_exit: public Ui_Dialog_exit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_EXIT_H
