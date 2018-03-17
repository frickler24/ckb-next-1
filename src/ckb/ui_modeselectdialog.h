/********************************************************************************
** Form generated from reading UI file 'modeselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODESELECTDIALOG_H
#define UI_MODESELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ModeSelectDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QListWidget *modeList;
    QPushButton *selAllButton;
    QPushButton *selNoneButton;

    void setupUi(QDialog *ModeSelectDialog)
    {
        if (ModeSelectDialog->objectName().isEmpty())
            ModeSelectDialog->setObjectName(QStringLiteral("ModeSelectDialog"));
        ModeSelectDialog->resize(320, 320);
        gridLayout = new QGridLayout(ModeSelectDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ModeSelectDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(ModeSelectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout->addWidget(buttonBox, 0, 2, 3, 1);

        modeList = new QListWidget(ModeSelectDialog);
        modeList->setObjectName(QStringLiteral("modeList"));
        modeList->setFrameShadow(QFrame::Plain);
        modeList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout->addWidget(modeList, 1, 0, 1, 2);

        selAllButton = new QPushButton(ModeSelectDialog);
        selAllButton->setObjectName(QStringLiteral("selAllButton"));

        gridLayout->addWidget(selAllButton, 2, 0, 1, 1);

        selNoneButton = new QPushButton(ModeSelectDialog);
        selNoneButton->setObjectName(QStringLiteral("selNoneButton"));

        gridLayout->addWidget(selNoneButton, 2, 1, 1, 1);

        QWidget::setTabOrder(modeList, selAllButton);
        QWidget::setTabOrder(selAllButton, selNoneButton);

        retranslateUi(ModeSelectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ModeSelectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ModeSelectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ModeSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *ModeSelectDialog)
    {
        ModeSelectDialog->setWindowTitle(QApplication::translate("ModeSelectDialog", "Select Modes", 0));
        label->setText(QApplication::translate("ModeSelectDialog", "TextLabel", 0));
        selAllButton->setText(QApplication::translate("ModeSelectDialog", "Select All", 0));
        selNoneButton->setText(QApplication::translate("ModeSelectDialog", "Select None", 0));
    } // retranslateUi

};

namespace Ui {
    class ModeSelectDialog: public Ui_ModeSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODESELECTDIALOG_H
