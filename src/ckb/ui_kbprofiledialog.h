/********************************************************************************
** Form generated from reading UI file 'kbprofiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KBPROFILEDIALOG_H
#define UI_KBPROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include "rlistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_KbProfileDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    RListWidget *profileList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *KbProfileDialog)
    {
        if (KbProfileDialog->objectName().isEmpty())
            KbProfileDialog->setObjectName(QStringLiteral("KbProfileDialog"));
        KbProfileDialog->resize(400, 300);
        KbProfileDialog->setFocusPolicy(Qt::ClickFocus);
        gridLayout = new QGridLayout(KbProfileDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        profileList = new RListWidget(KbProfileDialog);
        profileList->setObjectName(QStringLiteral("profileList"));
        profileList->setContextMenuPolicy(Qt::CustomContextMenu);
        profileList->setFrameShadow(QFrame::Plain);
        profileList->setIconSize(QSize(24, 24));

        gridLayout->addWidget(profileList, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(KbProfileDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 3);


        retranslateUi(KbProfileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), KbProfileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), KbProfileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(KbProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *KbProfileDialog)
    {
        KbProfileDialog->setWindowTitle(QApplication::translate("KbProfileDialog", "Keyboard Profiles", 0));
    } // retranslateUi

};

namespace Ui {
    class KbProfileDialog: public Ui_KbProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KBPROFILEDIALOG_H
