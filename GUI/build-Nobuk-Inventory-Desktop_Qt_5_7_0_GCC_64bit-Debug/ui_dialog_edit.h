/********************************************************************************
** Form generated from reading UI file 'dialog_edit.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_EDIT_H
#define UI_DIALOG_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_edit
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpinBox *spinBox_Code;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_Quantity;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_Price;
    QCheckBox *checkBox_Kg;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Dialog_edit)
    {
        if (Dialog_edit->objectName().isEmpty())
            Dialog_edit->setObjectName(QStringLiteral("Dialog_edit"));
        Dialog_edit->resize(400, 236);
        verticalLayout_2 = new QVBoxLayout(Dialog_edit);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(Dialog_edit);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        spinBox_Code = new QSpinBox(Dialog_edit);
        spinBox_Code->setObjectName(QStringLiteral("spinBox_Code"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox_Code->sizePolicy().hasHeightForWidth());
        spinBox_Code->setSizePolicy(sizePolicy);
        spinBox_Code->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(spinBox_Code);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(Dialog_edit);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        lineEdit_Name = new QLineEdit(Dialog_edit);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));

        horizontalLayout_5->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(Dialog_edit);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        doubleSpinBox_Quantity = new QDoubleSpinBox(Dialog_edit);
        doubleSpinBox_Quantity->setObjectName(QStringLiteral("doubleSpinBox_Quantity"));
        sizePolicy.setHeightForWidth(doubleSpinBox_Quantity->sizePolicy().hasHeightForWidth());
        doubleSpinBox_Quantity->setSizePolicy(sizePolicy);
        doubleSpinBox_Quantity->setMinimumSize(QSize(100, 0));

        horizontalLayout_4->addWidget(doubleSpinBox_Quantity);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(Dialog_edit);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox_Price = new QDoubleSpinBox(Dialog_edit);
        doubleSpinBox_Price->setObjectName(QStringLiteral("doubleSpinBox_Price"));
        sizePolicy.setHeightForWidth(doubleSpinBox_Price->sizePolicy().hasHeightForWidth());
        doubleSpinBox_Price->setSizePolicy(sizePolicy);
        doubleSpinBox_Price->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(doubleSpinBox_Price);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        checkBox_Kg = new QCheckBox(Dialog_edit);
        checkBox_Kg->setObjectName(QStringLiteral("checkBox_Kg"));

        verticalLayout_2->addWidget(checkBox_Kg);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_3 = new QPushButton(Dialog_edit);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_6->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(Dialog_edit);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_6->addWidget(pushButton_4);


        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(Dialog_edit);

        QMetaObject::connectSlotsByName(Dialog_edit);
    } // setupUi

    void retranslateUi(QDialog *Dialog_edit)
    {
        Dialog_edit->setWindowTitle(QApplication::translate("Dialog_edit", "Dialog", 0));
        label_4->setText(QApplication::translate("Dialog_edit", "Code:", 0));
        label->setText(QApplication::translate("Dialog_edit", "Name:", 0));
        label_2->setText(QApplication::translate("Dialog_edit", "Quantity:", 0));
        label_3->setText(QApplication::translate("Dialog_edit", "Price:", 0));
        checkBox_Kg->setText(QApplication::translate("Dialog_edit", "Kg", 0));
        pushButton_3->setText(QApplication::translate("Dialog_edit", "Cancel", 0));
        pushButton_4->setText(QApplication::translate("Dialog_edit", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_edit: public Ui_Dialog_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_EDIT_H