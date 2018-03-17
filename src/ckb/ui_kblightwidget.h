/********************************************************************************
** Form generated from reading UI file 'kblightwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KBLIGHTWIDGET_H
#define UI_KBLIGHTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorbutton.h"
#include "kbanimwidget.h"
#include "keywidget.h"

QT_BEGIN_NAMESPACE

class Ui_KbLightWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QCheckBox *showAnimBox;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout;
    KeyWidget *keyWidget;
    QHBoxLayout *horizontalLayout;
    ColorButton *bgButton;
    QLabel *selLabel;
    QPushButton *animButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_2;
    QComboBox *brightnessBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QFrame *line;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    KbAnimWidget *animWidget;

    void setupUi(QWidget *KbLightWidget)
    {
        if (KbLightWidget->objectName().isEmpty())
            KbLightWidget->setObjectName(QStringLiteral("KbLightWidget"));
        KbLightWidget->resize(632, 540);
        KbLightWidget->setFocusPolicy(Qt::ClickFocus);
        verticalLayout = new QVBoxLayout(KbLightWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(KbLightWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        showAnimBox = new QCheckBox(KbLightWidget);
        showAnimBox->setObjectName(QStringLiteral("showAnimBox"));
        showAnimBox->setChecked(true);

        horizontalLayout_3->addWidget(showAnimBox);


        verticalLayout->addLayout(horizontalLayout_3);

        line_2 = new QFrame(KbLightWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        keyWidget = new KeyWidget(KbLightWidget);
        keyWidget->setObjectName(QStringLiteral("keyWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(keyWidget->sizePolicy().hasHeightForWidth());
        keyWidget->setSizePolicy(sizePolicy1);
        keyWidget->setMinimumSize(QSize(100, 100));
        keyWidget->setFocusPolicy(Qt::ClickFocus);

        gridLayout->addWidget(keyWidget, 0, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        bgButton = new ColorButton(KbLightWidget);
        bgButton->setObjectName(QStringLiteral("bgButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bgButton->sizePolicy().hasHeightForWidth());
        bgButton->setSizePolicy(sizePolicy2);
        bgButton->setMinimumSize(QSize(140, 0));
        bgButton->setMaximumSize(QSize(140, 16777215));

        horizontalLayout->addWidget(bgButton);

        selLabel = new QLabel(KbLightWidget);
        selLabel->setObjectName(QStringLiteral("selLabel"));
        sizePolicy.setHeightForWidth(selLabel->sizePolicy().hasHeightForWidth());
        selLabel->setSizePolicy(sizePolicy);
        selLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(selLabel);

        animButton = new QPushButton(KbLightWidget);
        animButton->setObjectName(QStringLiteral("animButton"));
        sizePolicy2.setHeightForWidth(animButton->sizePolicy().hasHeightForWidth());
        animButton->setSizePolicy(sizePolicy2);
        animButton->setMinimumSize(QSize(140, 0));
        animButton->setMaximumSize(QSize(140, 16777215));

        horizontalLayout->addWidget(animButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        brightnessBox = new QComboBox(KbLightWidget);
        brightnessBox->setObjectName(QStringLiteral("brightnessBox"));
        sizePolicy2.setHeightForWidth(brightnessBox->sizePolicy().hasHeightForWidth());
        brightnessBox->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(brightnessBox, 1, 3, 1, 1);

        label = new QLabel(KbLightWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_2 = new QLabel(KbLightWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        line = new QFrame(KbLightWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget = new QWidget(KbLightWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 170));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 0, -1, 0);
        animWidget = new KbAnimWidget(widget);
        animWidget->setObjectName(QStringLiteral("animWidget"));

        gridLayout_4->addWidget(animWidget, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        QWidget::setTabOrder(showAnimBox, bgButton);
        QWidget::setTabOrder(bgButton, animButton);
        QWidget::setTabOrder(animButton, brightnessBox);

        retranslateUi(KbLightWidget);

        QMetaObject::connectSlotsByName(KbLightWidget);
    } // setupUi

    void retranslateUi(QWidget *KbLightWidget)
    {
        KbLightWidget->setWindowTitle(QApplication::translate("KbLightWidget", "Form", 0));
        label_3->setText(QApplication::translate("KbLightWidget", "Colors", 0));
#ifndef QT_NO_TOOLTIP
        showAnimBox->setToolTip(QApplication::translate("KbLightWidget", "If enabled, the same colors will be displayed here as on the keyboard. If disabled, the base colors will be shown.", 0));
#endif // QT_NO_TOOLTIP
        showAnimBox->setText(QApplication::translate("KbLightWidget", "Show animated", 0));
        bgButton->setText(QApplication::translate("KbLightWidget", "Change color...", 0));
        selLabel->setText(QApplication::translate("KbLightWidget", "Click to select", 0));
        animButton->setText(QApplication::translate("KbLightWidget", "New animation...", 0));
        brightnessBox->clear();
        brightnessBox->insertItems(0, QStringList()
         << QApplication::translate("KbLightWidget", "100%", 0)
         << QApplication::translate("KbLightWidget", "67%", 0)
         << QApplication::translate("KbLightWidget", "33%", 0)
         << QApplication::translate("KbLightWidget", "Off", 0)
        );
        label->setText(QApplication::translate("KbLightWidget", "\342\230\274", 0));
        label_2->setText(QApplication::translate("KbLightWidget", "Animations", 0));
    } // retranslateUi

};

namespace Ui {
    class KbLightWidget: public Ui_KbLightWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KBLIGHTWIDGET_H
