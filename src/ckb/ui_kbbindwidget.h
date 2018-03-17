/********************************************************************************
** Form generated from reading UI file 'kbbindwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KBBINDWIDGET_H
#define UI_KBBINDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "keywidget.h"
#include "rebindwidget.h"

QT_BEGIN_NAMESPACE

class Ui_KbBindWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QFrame *line;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    KeyWidget *keyWidget;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *copyButton;
    QLabel *selectLabel;
    QPushButton *resetButton;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QFrame *line_2;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    RebindWidget *rbWidget;

    void setupUi(QWidget *KbBindWidget)
    {
        if (KbBindWidget->objectName().isEmpty())
            KbBindWidget->setObjectName(QStringLiteral("KbBindWidget"));
        KbBindWidget->resize(581, 473);
        verticalLayout = new QVBoxLayout(KbBindWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(KbBindWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(KbBindWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        keyWidget = new KeyWidget(KbBindWidget);
        keyWidget->setObjectName(QStringLiteral("keyWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(keyWidget->sizePolicy().hasHeightForWidth());
        keyWidget->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(keyWidget, 0, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        copyButton = new QPushButton(KbBindWidget);
        copyButton->setObjectName(QStringLiteral("copyButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(copyButton->sizePolicy().hasHeightForWidth());
        copyButton->setSizePolicy(sizePolicy2);
        copyButton->setMinimumSize(QSize(140, 0));
        copyButton->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_2->addWidget(copyButton);

        selectLabel = new QLabel(KbBindWidget);
        selectLabel->setObjectName(QStringLiteral("selectLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(selectLabel->sizePolicy().hasHeightForWidth());
        selectLabel->setSizePolicy(sizePolicy3);
        selectLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(selectLabel);

        resetButton = new QPushButton(KbBindWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy4);
        resetButton->setMinimumSize(QSize(140, 0));
        resetButton->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_2->addWidget(resetButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));

        gridLayout->addLayout(formLayout, 1, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(KbBindWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        line_2 = new QFrame(KbBindWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        widget = new QWidget(KbBindWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy5);
        widget->setMinimumSize(QSize(0, 280));
        widget->setMaximumSize(QSize(16777215, 280));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        rbWidget = new RebindWidget(widget);
        rbWidget->setObjectName(QStringLiteral("rbWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(rbWidget->sizePolicy().hasHeightForWidth());
        rbWidget->setSizePolicy(sizePolicy6);

        gridLayout_2->addWidget(rbWidget, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        QWidget::setTabOrder(copyButton, resetButton);

        retranslateUi(KbBindWidget);

        QMetaObject::connectSlotsByName(KbBindWidget);
    } // setupUi

    void retranslateUi(QWidget *KbBindWidget)
    {
        KbBindWidget->setWindowTitle(QApplication::translate("KbBindWidget", "Form", 0));
        label->setText(QApplication::translate("KbBindWidget", "Keys", 0));
        copyButton->setText(QApplication::translate("KbBindWidget", "Copy to mode...", 0));
        selectLabel->setText(QApplication::translate("KbBindWidget", "Click to select keys", 0));
        resetButton->setText(QApplication::translate("KbBindWidget", "Reset", 0));
        label_2->setText(QApplication::translate("KbBindWidget", "Binding", 0));
    } // retranslateUi

};

namespace Ui {
    class KbBindWidget: public Ui_KbBindWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KBBINDWIDGET_H
