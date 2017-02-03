/********************************************************************************
** Form generated from reading UI file 'dialog_addquantity.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ADDQUANTITY_H
#define UI_DIALOG_ADDQUANTITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_addquantity
{
public:
    QVBoxLayout *verticalLayout;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_addquantity)
    {
        if (Dialog_addquantity->objectName().isEmpty())
            Dialog_addquantity->setObjectName(QStringLiteral("Dialog_addquantity"));
        Dialog_addquantity->resize(300, 100);
        verticalLayout = new QVBoxLayout(Dialog_addquantity);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        doubleSpinBox = new QDoubleSpinBox(Dialog_addquantity);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));

        verticalLayout->addWidget(doubleSpinBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(Dialog_addquantity);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Dialog_addquantity);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Dialog_addquantity);

        QMetaObject::connectSlotsByName(Dialog_addquantity);
    } // setupUi

    void retranslateUi(QDialog *Dialog_addquantity)
    {
        Dialog_addquantity->setWindowTitle(QApplication::translate("Dialog_addquantity", "Dialog", 0));
        pushButton->setText(QApplication::translate("Dialog_addquantity", "Cancel", 0));
        pushButton_2->setText(QApplication::translate("Dialog_addquantity", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_addquantity: public Ui_Dialog_addquantity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ADDQUANTITY_H
