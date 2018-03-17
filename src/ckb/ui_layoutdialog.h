/********************************************************************************
** Form generated from reading UI file 'layoutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTDIALOG_H
#define UI_LAYOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LayoutDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *LayoutDialog)
    {
        if (LayoutDialog->objectName().isEmpty())
            LayoutDialog->setObjectName(QStringLiteral("LayoutDialog"));
        LayoutDialog->resize(400, 240);
        gridLayout = new QGridLayout(LayoutDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(LayoutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 3);

        label = new QLabel(LayoutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        comboBox = new QComboBox(LayoutDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 3, 1, 1, 1);

        label_2 = new QLabel(LayoutDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(8);
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 5, 0, 1, 3);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 2, 1, 1, 1);


        retranslateUi(LayoutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LayoutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LayoutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LayoutDialog);
    } // setupUi

    void retranslateUi(QDialog *LayoutDialog)
    {
        LayoutDialog->setWindowTitle(QApplication::translate("LayoutDialog", "Keyboard Layout", 0));
        label->setText(QApplication::translate("LayoutDialog", "Please select your keyboard layout:", 0));
        label_2->setText(QApplication::translate("LayoutDialog", "Note: this only controls the layout within the ckb application. If your keys are typing the wrong characters, check your system preferences.", 0));
    } // retranslateUi

};

namespace Ui {
    class LayoutDialog: public Ui_LayoutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTDIALOG_H
