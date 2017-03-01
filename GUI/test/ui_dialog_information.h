/********************************************************************************
** Form generated from reading UI file 'dialog_information.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_INFORMATION_H
#define UI_DIALOG_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_information
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_code;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_quantity;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_price;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *label_total;

    void setupUi(QDialog *Dialog_information)
    {
        if (Dialog_information->objectName().isEmpty())
            Dialog_information->setObjectName(QStringLiteral("Dialog_information"));
        Dialog_information->resize(576, 288);
        verticalLayout = new QVBoxLayout(Dialog_information);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Dialog_information);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_code = new QLabel(Dialog_information);
        label_code->setObjectName(QStringLiteral("label_code"));

        horizontalLayout_2->addWidget(label_code);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Dialog_information);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_name = new QLabel(Dialog_information);
        label_name->setObjectName(QStringLiteral("label_name"));

        horizontalLayout->addWidget(label_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(Dialog_information);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_quantity = new QLabel(Dialog_information);
        label_quantity->setObjectName(QStringLiteral("label_quantity"));

        horizontalLayout_3->addWidget(label_quantity);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(Dialog_information);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_price = new QLabel(Dialog_information);
        label_price->setObjectName(QStringLiteral("label_price"));

        horizontalLayout_4->addWidget(label_price);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(Dialog_information);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        label_total = new QLabel(Dialog_information);
        label_total->setObjectName(QStringLiteral("label_total"));

        horizontalLayout_5->addWidget(label_total);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(Dialog_information);

        QMetaObject::connectSlotsByName(Dialog_information);
    } // setupUi

    void retranslateUi(QDialog *Dialog_information)
    {
        Dialog_information->setWindowTitle(QApplication::translate("Dialog_information", "Dialog", 0));
        label_2->setText(QApplication::translate("Dialog_information", "<html><head/><body><p align=\"right\"><span style=\" font-size:20pt; font-weight:600;\">Code:</span></p></body></html>", 0));
        label_code->setText(QApplication::translate("Dialog_information", "<html><head/><body><p><span style=\" font-size:18pt; font-style:italic;\">0</span></p></body></html>", 0));
        label->setText(QApplication::translate("Dialog_information", "<html><head/><body><p align=\"right\"><span style=\" font-size:20pt; font-weight:600;\">Name:</span></p></body></html>", 0));
        label_name->setText(QApplication::translate("Dialog_information", "<html><head/><body><p><span style=\" font-size:18pt; font-style:italic;\">0</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("Dialog_information", "<html><head/><body><p align=\"right\"><span style=\" font-size:20pt; font-weight:600;\">Quantity:</span></p></body></html>", 0));
        label_quantity->setText(QApplication::translate("Dialog_information", "<html><head/><body><p><span style=\" font-size:18pt; font-style:italic;\">0</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("Dialog_information", "<html><head/><body><p align=\"right\"><span style=\" font-size:20pt; font-weight:600;\">Price:</span></p></body></html>", 0));
        label_price->setText(QApplication::translate("Dialog_information", "<html><head/><body><p><span style=\" font-size:18pt; font-style:italic;\">0</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("Dialog_information", "<html><head/><body><p align=\"right\"><span style=\" font-size:20pt; font-weight:600;\">Total:</span></p></body></html>", 0));
        label_total->setText(QApplication::translate("Dialog_information", "<html><head/><body><p><span style=\" font-size:18pt; font-style:italic;\">0</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_information: public Ui_Dialog_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_INFORMATION_H
