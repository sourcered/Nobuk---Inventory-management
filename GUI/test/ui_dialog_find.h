/********************************************************************************
** Form generated from reading UI file 'dialog_find.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_FIND_H
#define UI_DIALOG_FIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_find
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_code;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_find)
    {
        if (Dialog_find->objectName().isEmpty())
            Dialog_find->setObjectName(QStringLiteral("Dialog_find"));
        Dialog_find->resize(301, 114);
        verticalLayout = new QVBoxLayout(Dialog_find);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Dialog_find);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBox_code = new QSpinBox(Dialog_find);
        spinBox_code->setObjectName(QStringLiteral("spinBox_code"));
        spinBox_code->setMaximum(10000);

        horizontalLayout->addWidget(spinBox_code);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(Dialog_find);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(Dialog_find);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(spinBox_code, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton);

        retranslateUi(Dialog_find);

        QMetaObject::connectSlotsByName(Dialog_find);
    } // setupUi

    void retranslateUi(QDialog *Dialog_find)
    {
        Dialog_find->setWindowTitle(QApplication::translate("Dialog_find", "Dialog", 0));
        label->setText(QApplication::translate("Dialog_find", "<html><head/><body><p align=\"right\"><span style=\" font-size:20pt; font-weight:600;\">Code:</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("Dialog_find", "Cancel", 0));
        pushButton_2->setText(QApplication::translate("Dialog_find", "FInd", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_find: public Ui_Dialog_find {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_FIND_H
