/********************************************************************************
** Form generated from reading UI file 'animadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMADDDIALOG_H
#define UI_ANIMADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AnimAddDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *animBox;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QComboBox *presetBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *previewBox;

    void setupUi(QDialog *AnimAddDialog)
    {
        if (AnimAddDialog->objectName().isEmpty())
            AnimAddDialog->setObjectName(QStringLiteral("AnimAddDialog"));
        AnimAddDialog->resize(350, 205);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AnimAddDialog->sizePolicy().hasHeightForWidth());
        AnimAddDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(AnimAddDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonBox = new QDialogButtonBox(AnimAddDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 4);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        animBox = new QComboBox(AnimAddDialog);
        animBox->setObjectName(QStringLiteral("animBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(animBox->sizePolicy().hasHeightForWidth());
        animBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(animBox, 1, 2, 1, 1);

        label_2 = new QLabel(AnimAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 2, 1, 1);

        label = new QLabel(AnimAddDialog);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 2, 1, 1);

        presetBox = new QComboBox(AnimAddDialog);
        presetBox->setObjectName(QStringLiteral("presetBox"));
        sizePolicy1.setHeightForWidth(presetBox->sizePolicy().hasHeightForWidth());
        presetBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(presetBox, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        previewBox = new QCheckBox(AnimAddDialog);
        previewBox->setObjectName(QStringLiteral("previewBox"));
        previewBox->setChecked(true);

        gridLayout->addWidget(previewBox, 3, 2, 1, 1);


        retranslateUi(AnimAddDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AnimAddDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AnimAddDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AnimAddDialog);
    } // setupUi

    void retranslateUi(QDialog *AnimAddDialog)
    {
        AnimAddDialog->setWindowTitle(QApplication::translate("AnimAddDialog", "Add Animation", 0));
        label_2->setText(QApplication::translate("AnimAddDialog", "Preset:", 0));
        label->setText(QApplication::translate("AnimAddDialog", "Animation:", 0));
        previewBox->setText(QApplication::translate("AnimAddDialog", "Show preview", 0));
    } // retranslateUi

};

namespace Ui {
    class AnimAddDialog: public Ui_AnimAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMADDDIALOG_H
