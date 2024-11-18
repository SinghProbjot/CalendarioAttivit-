/********************************************************************************
** Form generated from reading UI file 'activitydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVITYDIALOG_H
#define UI_ACTIVITYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ActivityDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QTextEdit *titleTextEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *typeComboBox;
    QTimeEdit *endHourTimeEdit;
    QComboBox *repeatComboBox;
    QTimeEdit *startHourTimeEdit;
    QLabel *label_6;
    QComboBox *repeatTimecomboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ActivityDialog)
    {
        if (ActivityDialog->objectName().isEmpty())
            ActivityDialog->setObjectName("ActivityDialog");
        ActivityDialog->resize(400, 293);
        verticalLayout_2 = new QVBoxLayout(ActivityDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(ActivityDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        titleTextEdit = new QTextEdit(ActivityDialog);
        titleTextEdit->setObjectName("titleTextEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, titleTextEdit);

        label_2 = new QLabel(ActivityDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(ActivityDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(ActivityDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(ActivityDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        typeComboBox = new QComboBox(ActivityDialog);
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->setObjectName("typeComboBox");

        formLayout->setWidget(1, QFormLayout::FieldRole, typeComboBox);

        endHourTimeEdit = new QTimeEdit(ActivityDialog);
        endHourTimeEdit->setObjectName("endHourTimeEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, endHourTimeEdit);

        repeatComboBox = new QComboBox(ActivityDialog);
        repeatComboBox->addItem(QString());
        repeatComboBox->addItem(QString());
        repeatComboBox->setObjectName("repeatComboBox");

        formLayout->setWidget(4, QFormLayout::FieldRole, repeatComboBox);

        startHourTimeEdit = new QTimeEdit(ActivityDialog);
        startHourTimeEdit->setObjectName("startHourTimeEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, startHourTimeEdit);

        label_6 = new QLabel(ActivityDialog);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        repeatTimecomboBox = new QComboBox(ActivityDialog);
        repeatTimecomboBox->addItem(QString());
        repeatTimecomboBox->addItem(QString());
        repeatTimecomboBox->addItem(QString());
        repeatTimecomboBox->addItem(QString());
        repeatTimecomboBox->addItem(QString());
        repeatTimecomboBox->setObjectName("repeatTimecomboBox");

        formLayout->setWidget(5, QFormLayout::FieldRole, repeatTimecomboBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(ActivityDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ActivityDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ActivityDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ActivityDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ActivityDialog);
    } // setupUi

    void retranslateUi(QDialog *ActivityDialog)
    {
        ActivityDialog->setWindowTitle(QCoreApplication::translate("ActivityDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ActivityDialog", "Title", nullptr));
        label_2->setText(QCoreApplication::translate("ActivityDialog", "Type", nullptr));
        label_3->setText(QCoreApplication::translate("ActivityDialog", "Start Hour", nullptr));
        label_4->setText(QCoreApplication::translate("ActivityDialog", "End Hour (opt)", nullptr));
        label_5->setText(QCoreApplication::translate("ActivityDialog", "Repeat", nullptr));
        typeComboBox->setItemText(0, QCoreApplication::translate("ActivityDialog", "Attivita", nullptr));
        typeComboBox->setItemText(1, QCoreApplication::translate("ActivityDialog", "Evento", nullptr));

        repeatComboBox->setItemText(0, QCoreApplication::translate("ActivityDialog", "Mai", nullptr));
        repeatComboBox->setItemText(1, QCoreApplication::translate("ActivityDialog", "Ogni anno", nullptr));

        label_6->setText(QCoreApplication::translate("ActivityDialog", "Repeat times", nullptr));
        repeatTimecomboBox->setItemText(0, QCoreApplication::translate("ActivityDialog", "1", nullptr));
        repeatTimecomboBox->setItemText(1, QCoreApplication::translate("ActivityDialog", "2", nullptr));
        repeatTimecomboBox->setItemText(2, QCoreApplication::translate("ActivityDialog", "3", nullptr));
        repeatTimecomboBox->setItemText(3, QCoreApplication::translate("ActivityDialog", "4", nullptr));
        repeatTimecomboBox->setItemText(4, QCoreApplication::translate("ActivityDialog", "5", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ActivityDialog: public Ui_ActivityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVITYDIALOG_H
