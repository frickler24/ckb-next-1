/********************************************************************************
** Form generated from reading UI file 'kperfwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KPERFWIDGET_H
#define UI_KPERFWIDGET_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "colorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_KPerfWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_20;
    ColorButton *scrollColorOn;
    QComboBox *scrollBox;
    QCheckBox *muteBox;
    QFrame *line;
    QWidget *k95Spacer;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer;
    ColorButton *numColorOn;
    QLabel *label_7;
    QLabel *label_22;
    ColorButton *muteColorOn;
    QLabel *label_3;
    ColorButton *capsColorOn;
    QFrame *line_3;
    QCheckBox *lightBox;
    ColorButton *numColorOff;
    QCheckBox *modeBox;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_6;
    ColorButton *modeColorOn;
    QLabel *label_18;
    QLabel *label_16;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_23;
    ColorButton *scrollColorOff;
    ColorButton *lightColor2;
    QLabel *label_5;
    ColorButton *lockColorOff;
    QLabel *label_24;
    QLabel *k95Label3;
    QCheckBox *macroBox;
    ColorButton *macroColorOff;
    QComboBox *numBox;
    QCheckBox *lockBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *copyButton;
    QSpacerItem *horizontalSpacer_8;
    ColorButton *lockColorOn;
    QFrame *line_2;
    QLabel *k95Label2;
    QComboBox *capsBox;
    QSpacerItem *verticalSpacer_4;
    QLabel *k95Label5;
    ColorButton *capsColorOff;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_11;
    QLabel *label_14;
    ColorButton *macroColorOn;
    ColorButton *muteColorOff;
    QLabel *k95Label6;
    ColorButton *lightColor1;
    QLabel *label_15;
    ColorButton *modeColorOff;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_10;
    QLabel *label_12;
    QFrame *k95Line;
    QLabel *label_17;
    QSpacerItem *verticalSpacer;
    QLabel *k95Label4;
    QLabel *k95Label1;
    QLabel *label_8;
    ColorButton *lightColor3;
    QSpacerItem *verticalSpacer_2;
    ColorButton *muteColorNA;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *intensityBox;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *KPerfWidget)
    {
        if (KPerfWidget->objectName().isEmpty())
            KPerfWidget->setObjectName(QStringLiteral("KPerfWidget"));
        KPerfWidget->resize(840, 679);
        gridLayout = new QGridLayout(KPerfWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 9);
        label_20 = new QLabel(KPerfWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout->addWidget(label_20, 22, 5, 1, 1);

        scrollColorOn = new ColorButton(KPerfWidget);
        scrollColorOn->setObjectName(QStringLiteral("scrollColorOn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollColorOn->sizePolicy().hasHeightForWidth());
        scrollColorOn->setSizePolicy(sizePolicy);
        scrollColorOn->setMinimumSize(QSize(0, 40));
        scrollColorOn->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(scrollColorOn, 23, 4, 1, 1);

        scrollBox = new QComboBox(KPerfWidget);
        scrollBox->setObjectName(QStringLiteral("scrollBox"));

        gridLayout->addWidget(scrollBox, 23, 2, 1, 1);

        muteBox = new QCheckBox(KPerfWidget);
        muteBox->setObjectName(QStringLiteral("muteBox"));

        gridLayout->addWidget(muteBox, 17, 1, 1, 2);

        line = new QFrame(KPerfWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 13);

        k95Spacer = new QWidget(KPerfWidget);
        k95Spacer->setObjectName(QStringLiteral("k95Spacer"));
        sizePolicy.setHeightForWidth(k95Spacer->sizePolicy().hasHeightForWidth());
        k95Spacer->setSizePolicy(sizePolicy);
        k95Spacer->setMinimumSize(QSize(15, 10));
        k95Spacer->setMaximumSize(QSize(15, 10));

        gridLayout->addWidget(k95Spacer, 12, 4, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 17, 3, 1, 1);

        label_21 = new QLabel(KPerfWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout->addWidget(label_21, 23, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 15, 12, 1, 1);

        numColorOn = new ColorButton(KPerfWidget);
        numColorOn->setObjectName(QStringLiteral("numColorOn"));
        sizePolicy.setHeightForWidth(numColorOn->sizePolicy().hasHeightForWidth());
        numColorOn->setSizePolicy(sizePolicy);
        numColorOn->setMinimumSize(QSize(0, 40));
        numColorOn->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(numColorOn, 21, 4, 1, 1);

        label_7 = new QLabel(KPerfWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 23, 1, 1, 1);

        label_22 = new QLabel(KPerfWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout->addWidget(label_22, 21, 8, 1, 1);

        muteColorOn = new ColorButton(KPerfWidget);
        muteColorOn->setObjectName(QStringLiteral("muteColorOn"));
        sizePolicy.setHeightForWidth(muteColorOn->sizePolicy().hasHeightForWidth());
        muteColorOn->setSizePolicy(sizePolicy);
        muteColorOn->setMinimumSize(QSize(0, 40));
        muteColorOn->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(muteColorOn, 17, 4, 1, 1);

        label_3 = new QLabel(KPerfWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 13, 0, 1, 3);

        capsColorOn = new ColorButton(KPerfWidget);
        capsColorOn->setObjectName(QStringLiteral("capsColorOn"));
        sizePolicy.setHeightForWidth(capsColorOn->sizePolicy().hasHeightForWidth());
        capsColorOn->setSizePolicy(sizePolicy);
        capsColorOn->setMinimumSize(QSize(0, 40));
        capsColorOn->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(capsColorOn, 22, 4, 1, 1);

        line_3 = new QFrame(KPerfWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 20, 0, 1, 13);

        lightBox = new QCheckBox(KPerfWidget);
        lightBox->setObjectName(QStringLiteral("lightBox"));

        gridLayout->addWidget(lightBox, 15, 1, 1, 2);

        numColorOff = new ColorButton(KPerfWidget);
        numColorOff->setObjectName(QStringLiteral("numColorOff"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(40);
        sizePolicy1.setHeightForWidth(numColorOff->sizePolicy().hasHeightForWidth());
        numColorOff->setSizePolicy(sizePolicy1);
        numColorOff->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(numColorOff, 21, 7, 1, 1);

        modeBox = new QCheckBox(KPerfWidget);
        modeBox->setObjectName(QStringLiteral("modeBox"));

        gridLayout->addWidget(modeBox, 9, 1, 1, 2);

        label_19 = new QLabel(KPerfWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout->addWidget(label_19, 21, 5, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 17, 9, 1, 1);

        modeColorOn = new ColorButton(KPerfWidget);
        modeColorOn->setObjectName(QStringLiteral("modeColorOn"));
        sizePolicy.setHeightForWidth(modeColorOn->sizePolicy().hasHeightForWidth());
        modeColorOn->setSizePolicy(sizePolicy);
        modeColorOn->setMinimumSize(QSize(0, 40));
        modeColorOn->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(modeColorOn, 9, 4, 1, 1);

        label_18 = new QLabel(KPerfWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout->addWidget(label_18, 15, 11, 1, 1);

        label_16 = new QLabel(KPerfWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 15, 8, 1, 1);

        label = new QLabel(KPerfWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(0, 23));
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 13);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 17, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 15, 0, 1, 1);

        label_23 = new QLabel(KPerfWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout->addWidget(label_23, 22, 8, 1, 1);

        scrollColorOff = new ColorButton(KPerfWidget);
        scrollColorOff->setObjectName(QStringLiteral("scrollColorOff"));
        sizePolicy.setHeightForWidth(scrollColorOff->sizePolicy().hasHeightForWidth());
        scrollColorOff->setSizePolicy(sizePolicy);
        scrollColorOff->setMinimumSize(QSize(0, 40));
        scrollColorOff->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(scrollColorOff, 23, 7, 1, 1);

        lightColor2 = new ColorButton(KPerfWidget);
        lightColor2->setObjectName(QStringLiteral("lightColor2"));
        sizePolicy.setHeightForWidth(lightColor2->sizePolicy().hasHeightForWidth());
        lightColor2->setSizePolicy(sizePolicy);
        lightColor2->setMinimumSize(QSize(0, 40));
        lightColor2->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(lightColor2, 15, 7, 1, 1);

        label_5 = new QLabel(KPerfWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 21, 1, 1, 1);

        lockColorOff = new ColorButton(KPerfWidget);
        lockColorOff->setObjectName(QStringLiteral("lockColorOff"));
        sizePolicy.setHeightForWidth(lockColorOff->sizePolicy().hasHeightForWidth());
        lockColorOff->setSizePolicy(sizePolicy);
        lockColorOff->setMinimumSize(QSize(0, 40));
        lockColorOff->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(lockColorOff, 16, 7, 1, 1);

        label_24 = new QLabel(KPerfWidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout->addWidget(label_24, 23, 8, 1, 1);

        k95Label3 = new QLabel(KPerfWidget);
        k95Label3->setObjectName(QStringLiteral("k95Label3"));

        gridLayout->addWidget(k95Label3, 9, 8, 1, 1);

        macroBox = new QCheckBox(KPerfWidget);
        macroBox->setObjectName(QStringLiteral("macroBox"));

        gridLayout->addWidget(macroBox, 10, 1, 1, 2);

        macroColorOff = new ColorButton(KPerfWidget);
        macroColorOff->setObjectName(QStringLiteral("macroColorOff"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(40);
        sizePolicy3.setHeightForWidth(macroColorOff->sizePolicy().hasHeightForWidth());
        macroColorOff->setSizePolicy(sizePolicy3);
        macroColorOff->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(macroColorOff, 10, 7, 1, 1);

        numBox = new QComboBox(KPerfWidget);
        numBox->setObjectName(QStringLiteral("numBox"));

        gridLayout->addWidget(numBox, 21, 2, 1, 1);

        lockBox = new QCheckBox(KPerfWidget);
        lockBox->setObjectName(QStringLiteral("lockBox"));

        gridLayout->addWidget(lockBox, 16, 1, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        copyButton = new QPushButton(KPerfWidget);
        copyButton->setObjectName(QStringLiteral("copyButton"));

        horizontalLayout_2->addWidget(copyButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_2, 3, 10, 1, 3);

        lockColorOn = new ColorButton(KPerfWidget);
        lockColorOn->setObjectName(QStringLiteral("lockColorOn"));
        sizePolicy.setHeightForWidth(lockColorOn->sizePolicy().hasHeightForWidth());
        lockColorOn->setSizePolicy(sizePolicy);
        lockColorOn->setMinimumSize(QSize(0, 40));
        lockColorOn->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(lockColorOn, 16, 4, 1, 1);

        line_2 = new QFrame(KPerfWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 14, 0, 1, 13);

        k95Label2 = new QLabel(KPerfWidget);
        k95Label2->setObjectName(QStringLiteral("k95Label2"));

        gridLayout->addWidget(k95Label2, 9, 5, 1, 1);

        capsBox = new QComboBox(KPerfWidget);
        capsBox->setObjectName(QStringLiteral("capsBox"));

        gridLayout->addWidget(capsBox, 22, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(0, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 24, 4, 1, 1);

        k95Label5 = new QLabel(KPerfWidget);
        k95Label5->setObjectName(QStringLiteral("k95Label5"));

        gridLayout->addWidget(k95Label5, 10, 8, 1, 1);

        capsColorOff = new ColorButton(KPerfWidget);
        capsColorOff->setObjectName(QStringLiteral("capsColorOff"));
        sizePolicy.setHeightForWidth(capsColorOff->sizePolicy().hasHeightForWidth());
        capsColorOff->setSizePolicy(sizePolicy);
        capsColorOff->setMinimumSize(QSize(0, 40));
        capsColorOff->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(capsColorOff, 22, 7, 1, 1);

        label_4 = new QLabel(KPerfWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 19, 0, 1, 13);

        label_6 = new QLabel(KPerfWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 22, 1, 1, 1);

        label_11 = new QLabel(KPerfWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 16, 5, 1, 1);

        label_14 = new QLabel(KPerfWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 17, 8, 1, 1);

        macroColorOn = new ColorButton(KPerfWidget);
        macroColorOn->setObjectName(QStringLiteral("macroColorOn"));
        sizePolicy3.setHeightForWidth(macroColorOn->sizePolicy().hasHeightForWidth());
        macroColorOn->setSizePolicy(sizePolicy3);
        macroColorOn->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(macroColorOn, 10, 4, 1, 1);

        muteColorOff = new ColorButton(KPerfWidget);
        muteColorOff->setObjectName(QStringLiteral("muteColorOff"));
        sizePolicy.setHeightForWidth(muteColorOff->sizePolicy().hasHeightForWidth());
        muteColorOff->setSizePolicy(sizePolicy);
        muteColorOff->setMinimumSize(QSize(0, 40));
        muteColorOff->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(muteColorOff, 17, 7, 1, 1);

        k95Label6 = new QLabel(KPerfWidget);
        k95Label6->setObjectName(QStringLiteral("k95Label6"));
        QFont font1;
        font1.setPointSize(8);
        font1.setItalic(true);
        k95Label6->setFont(font1);

        gridLayout->addWidget(k95Label6, 11, 1, 1, 10);

        lightColor1 = new ColorButton(KPerfWidget);
        lightColor1->setObjectName(QStringLiteral("lightColor1"));
        sizePolicy.setHeightForWidth(lightColor1->sizePolicy().hasHeightForWidth());
        lightColor1->setSizePolicy(sizePolicy);
        lightColor1->setMinimumSize(QSize(0, 40));
        lightColor1->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(lightColor1, 15, 10, 1, 1);

        label_15 = new QLabel(KPerfWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 16, 8, 1, 1);

        modeColorOff = new ColorButton(KPerfWidget);
        modeColorOff->setObjectName(QStringLiteral("modeColorOff"));
        sizePolicy.setHeightForWidth(modeColorOff->sizePolicy().hasHeightForWidth());
        modeColorOff->setSizePolicy(sizePolicy);
        modeColorOff->setMinimumSize(QSize(0, 40));
        modeColorOff->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(modeColorOff, 9, 7, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 18, 4, 1, 1);

        label_10 = new QLabel(KPerfWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 15, 5, 1, 1);

        label_12 = new QLabel(KPerfWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 17, 5, 1, 1);

        k95Line = new QFrame(KPerfWidget);
        k95Line->setObjectName(QStringLiteral("k95Line"));
        k95Line->setFrameShape(QFrame::HLine);
        k95Line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(k95Line, 8, 0, 1, 13);

        label_17 = new QLabel(KPerfWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout->addWidget(label_17, 17, 11, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 26, 2, 1, 1);

        k95Label4 = new QLabel(KPerfWidget);
        k95Label4->setObjectName(QStringLiteral("k95Label4"));

        gridLayout->addWidget(k95Label4, 10, 5, 1, 1);

        k95Label1 = new QLabel(KPerfWidget);
        k95Label1->setObjectName(QStringLiteral("k95Label1"));
        k95Label1->setFont(font);

        gridLayout->addWidget(k95Label1, 7, 0, 1, 5);

        label_8 = new QLabel(KPerfWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 25, 1, 1, 12);

        lightColor3 = new ColorButton(KPerfWidget);
        lightColor3->setObjectName(QStringLiteral("lightColor3"));
        sizePolicy.setHeightForWidth(lightColor3->sizePolicy().hasHeightForWidth());
        lightColor3->setSizePolicy(sizePolicy);
        lightColor3->setMinimumSize(QSize(0, 40));
        lightColor3->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(lightColor3, 15, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        muteColorNA = new ColorButton(KPerfWidget);
        muteColorNA->setObjectName(QStringLiteral("muteColorNA"));
        muteColorNA->setMinimumSize(QSize(0, 40));
        muteColorNA->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(muteColorNA, 17, 10, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(KPerfWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        intensityBox = new QSpinBox(KPerfWidget);
        intensityBox->setObjectName(QStringLiteral("intensityBox"));
        intensityBox->setMaximum(100);
        intensityBox->setValue(100);

        horizontalLayout->addWidget(intensityBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 9);

        QWidget::setTabOrder(intensityBox, copyButton);
        QWidget::setTabOrder(copyButton, modeBox);
        QWidget::setTabOrder(modeBox, modeColorOn);
        QWidget::setTabOrder(modeColorOn, modeColorOff);
        QWidget::setTabOrder(modeColorOff, macroBox);
        QWidget::setTabOrder(macroBox, macroColorOn);
        QWidget::setTabOrder(macroColorOn, macroColorOff);
        QWidget::setTabOrder(macroColorOff, lightBox);
        QWidget::setTabOrder(lightBox, lightColor3);
        QWidget::setTabOrder(lightColor3, lightColor2);
        QWidget::setTabOrder(lightColor2, lightColor1);
        QWidget::setTabOrder(lightColor1, lockBox);
        QWidget::setTabOrder(lockBox, lockColorOn);
        QWidget::setTabOrder(lockColorOn, lockColorOff);
        QWidget::setTabOrder(lockColorOff, muteBox);
        QWidget::setTabOrder(muteBox, muteColorOn);
        QWidget::setTabOrder(muteColorOn, muteColorOff);
        QWidget::setTabOrder(muteColorOff, muteColorNA);
        QWidget::setTabOrder(muteColorNA, numBox);
        QWidget::setTabOrder(numBox, numColorOn);
        QWidget::setTabOrder(numColorOn, numColorOff);
        QWidget::setTabOrder(numColorOff, capsBox);
        QWidget::setTabOrder(capsBox, capsColorOn);
        QWidget::setTabOrder(capsColorOn, capsColorOff);
        QWidget::setTabOrder(capsColorOff, scrollBox);
        QWidget::setTabOrder(scrollBox, scrollColorOn);
        QWidget::setTabOrder(scrollColorOn, scrollColorOff);

        retranslateUi(KPerfWidget);

        QMetaObject::connectSlotsByName(KPerfWidget);
    } // setupUi

    void retranslateUi(QWidget *KPerfWidget)
    {
        KPerfWidget->setWindowTitle(QApplication::translate("KPerfWidget", "Form", 0));
        label_20->setText(QApplication::translate("KPerfWidget", "On", 0));
        scrollColorOn->setText(QString());
        scrollBox->clear();
        scrollBox->insertItems(0, QStringList()
         << QApplication::translate("KPerfWidget", "Normal", 0)
         << QApplication::translate("KPerfWidget", "Always on", 0)
         << QApplication::translate("KPerfWidget", "Always off", 0)
         << QApplication::translate("KPerfWidget", "RGB indicator", 0)
         << QApplication::translate("KPerfWidget", "RGB + normal", 0)
        );
        muteBox->setText(QApplication::translate("KPerfWidget", "Indicate mute:", 0));
        label_21->setText(QApplication::translate("KPerfWidget", "On", 0));
        numColorOn->setText(QString());
        label_7->setText(QApplication::translate("KPerfWidget", "Scroll lock:", 0));
        label_22->setText(QApplication::translate("KPerfWidget", "Off", 0));
        muteColorOn->setText(QString());
        label_3->setText(QApplication::translate("KPerfWidget", "Top row", 0));
        capsColorOn->setText(QString());
        lightBox->setText(QApplication::translate("KPerfWidget", "Indicate brightness:", 0));
        numColorOff->setText(QString());
        modeBox->setText(QApplication::translate("KPerfWidget", "Indicate current mode:", 0));
        label_19->setText(QApplication::translate("KPerfWidget", "On", 0));
        modeColorOn->setText(QString());
        label_18->setText(QApplication::translate("KPerfWidget", "33%", 0));
        label_16->setText(QApplication::translate("KPerfWidget", "67%", 0));
        label->setText(QApplication::translate("KPerfWidget", "Miscellaneous", 0));
        label_23->setText(QApplication::translate("KPerfWidget", "Off", 0));
        scrollColorOff->setText(QString());
        lightColor2->setText(QString());
        label_5->setText(QApplication::translate("KPerfWidget", "Num lock:", 0));
        lockColorOff->setText(QString());
        label_24->setText(QApplication::translate("KPerfWidget", "Off", 0));
        k95Label3->setText(QApplication::translate("KPerfWidget", "Off", 0));
        macroBox->setText(QApplication::translate("KPerfWidget", "Indicate macro recording:", 0));
        macroColorOff->setText(QString());
        numBox->clear();
        numBox->insertItems(0, QStringList()
         << QApplication::translate("KPerfWidget", "Normal", 0)
         << QApplication::translate("KPerfWidget", "Always on", 0)
         << QApplication::translate("KPerfWidget", "Always off", 0)
         << QApplication::translate("KPerfWidget", "RGB indicator", 0)
         << QApplication::translate("KPerfWidget", "RGB + normal", 0)
        );
        lockBox->setText(QApplication::translate("KPerfWidget", "Indicate Windows Lock:", 0));
        copyButton->setText(QApplication::translate("KPerfWidget", "Copy to mode...", 0));
        lockColorOn->setText(QString());
        k95Label2->setText(QApplication::translate("KPerfWidget", "On", 0));
        capsBox->clear();
        capsBox->insertItems(0, QStringList()
         << QApplication::translate("KPerfWidget", "Normal", 0)
         << QApplication::translate("KPerfWidget", "Always on", 0)
         << QApplication::translate("KPerfWidget", "Always off", 0)
         << QApplication::translate("KPerfWidget", "RGB indicator", 0)
         << QApplication::translate("KPerfWidget", "RGB + normal", 0)
        );
        k95Label5->setText(QApplication::translate("KPerfWidget", "Off", 0));
        capsColorOff->setText(QString());
        label_4->setText(QApplication::translate("KPerfWidget", "Lock lights", 0));
        label_6->setText(QApplication::translate("KPerfWidget", "Caps lock:", 0));
        label_11->setText(QApplication::translate("KPerfWidget", "On", 0));
        label_14->setText(QApplication::translate("KPerfWidget", "Off", 0));
        macroColorOn->setText(QString());
        muteColorOff->setText(QString());
        k95Label6->setText(QApplication::translate("KPerfWidget", "Note: macro recording not yet implemented. Indicator will always display \"off\".", 0));
        lightColor1->setText(QString());
        label_15->setText(QApplication::translate("KPerfWidget", "Off", 0));
        modeColorOff->setText(QString());
        label_10->setText(QApplication::translate("KPerfWidget", "100%", 0));
        label_12->setText(QApplication::translate("KPerfWidget", "On", 0));
        label_17->setText(QApplication::translate("KPerfWidget", "Unknown", 0));
        k95Label4->setText(QApplication::translate("KPerfWidget", "On", 0));
        k95Label1->setText(QApplication::translate("KPerfWidget", "K95 buttons", 0));
        label_8->setText(QApplication::translate("KPerfWidget", "Note: many desktop environments do not use scroll lock. The indicator may not turn on even when enabled.", 0));
        lightColor3->setText(QString());
#ifndef QT_NO_TOOLTIP
        muteColorNA->setToolTip(QApplication::translate("KPerfWidget", "If the sound device does not support muting, or if mute status is unknown, this color will be displayed.", 0));
#endif // QT_NO_TOOLTIP
        muteColorNA->setText(QString());
        label_2->setText(QApplication::translate("KPerfWidget", "Indicator intensity:", 0));
        intensityBox->setSuffix(QApplication::translate("KPerfWidget", "%", 0));
    } // retranslateUi

};

namespace Ui {
    class KPerfWidget: public Ui_KPerfWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KPERFWIDGET_H
