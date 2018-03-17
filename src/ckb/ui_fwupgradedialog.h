/********************************************************************************
** Form generated from reading UI file 'fwupgradedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FWUPGRADEDIALOG_H
#define UI_FWUPGRADEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_FwUpgradeDialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QLabel *curLabel;
    QLabel *newLabel;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *devLabel;
    QProgressBar *progressBar;
    QPushButton *actionButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *FwUpgradeDialog)
    {
        if (FwUpgradeDialog->objectName().isEmpty())
            FwUpgradeDialog->setObjectName(QStringLiteral("FwUpgradeDialog"));
        FwUpgradeDialog->resize(420, 280);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FwUpgradeDialog->sizePolicy().hasHeightForWidth());
        FwUpgradeDialog->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(FwUpgradeDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(127, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        label_4 = new QLabel(FwUpgradeDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 1, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 6, 1, 1);

        label_2 = new QLabel(FwUpgradeDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        curLabel = new QLabel(FwUpgradeDialog);
        curLabel->setObjectName(QStringLiteral("curLabel"));

        gridLayout->addWidget(curLabel, 1, 2, 1, 1);

        newLabel = new QLabel(FwUpgradeDialog);
        newLabel->setObjectName(QStringLiteral("newLabel"));

        gridLayout->addWidget(newLabel, 1, 5, 1, 1);

        statusLabel = new QLabel(FwUpgradeDialog);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy1);
        statusLabel->setAlignment(Qt::AlignCenter);
        statusLabel->setWordWrap(true);

        gridLayout->addWidget(statusLabel, 2, 0, 1, 7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        devLabel = new QLabel(FwUpgradeDialog);
        devLabel->setObjectName(QStringLiteral("devLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(devLabel->sizePolicy().hasHeightForWidth());
        devLabel->setSizePolicy(sizePolicy2);
        devLabel->setFont(font);
        devLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(devLabel, 0, 0, 1, 7);

        progressBar = new QProgressBar(FwUpgradeDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 3, 0, 1, 7);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 3);

        actionButton = new QPushButton(FwUpgradeDialog);
        actionButton->setObjectName(QStringLiteral("actionButton"));
        actionButton->setEnabled(false);

        gridLayout_2->addWidget(actionButton, 1, 2, 1, 1);

        cancelButton = new QPushButton(FwUpgradeDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setEnabled(false);

        gridLayout_2->addWidget(cancelButton, 1, 1, 1, 1);

        QWidget::setTabOrder(actionButton, cancelButton);

        retranslateUi(FwUpgradeDialog);

        actionButton->setDefault(true);


        QMetaObject::connectSlotsByName(FwUpgradeDialog);
    } // setupUi

    void retranslateUi(QDialog *FwUpgradeDialog)
    {
        FwUpgradeDialog->setWindowTitle(QApplication::translate("FwUpgradeDialog", "Firmware update", 0));
        label_4->setText(QApplication::translate("FwUpgradeDialog", "New:", 0));
        label_2->setText(QApplication::translate("FwUpgradeDialog", "Current:", 0));
        curLabel->setText(QApplication::translate("FwUpgradeDialog", "0.00", 0));
        newLabel->setText(QApplication::translate("FwUpgradeDialog", "0.00", 0));
        statusLabel->setText(QApplication::translate("FwUpgradeDialog", "Downloading new firmware, please wait...", 0));
        devLabel->setText(QApplication::translate("FwUpgradeDialog", "Device", 0));
        actionButton->setText(QApplication::translate("FwUpgradeDialog", "Start", 0));
        cancelButton->setText(QApplication::translate("FwUpgradeDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class FwUpgradeDialog: public Ui_FwUpgradeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FWUPGRADEDIALOG_H
