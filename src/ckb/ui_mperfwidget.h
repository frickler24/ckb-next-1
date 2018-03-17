/********************************************************************************
** Form generated from reading UI file 'mperfwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPERFWIDGET_H
#define UI_MPERFWIDGET_H

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
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_MPerfWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QGridLayout *gridLayout;
    QLabel *label_25;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *lHeightBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *eBox2;
    QSlider *ySlider3;
    QSlider *xSlider2;
    QSpinBox *xBox3;
    QSpinBox *yBox0;
    QSlider *ySlider0;
    ColorButton *iButton4;
    ColorButton *iButton5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    ColorButton *iButton3;
    QLabel *label_12;
    QSpinBox *xBox4;
    QSpinBox *xBox0;
    QSpinBox *yBox5;
    QCheckBox *eBox5;
    QSlider *xSlider5;
    QSpinBox *xBox1;
    QSpinBox *yBox2;
    QSpinBox *yBox3;
    QSlider *xSlider4;
    QLabel *label_4;
    QSlider *xSlider0;
    ColorButton *iButton2;
    QFrame *line_3;
    ColorButton *iButtonO;
    QSpinBox *yBox1;
    QSlider *ySlider2;
    QSpinBox *xBox2;
    QSlider *xSlider1;
    QSpacerItem *horizontalSpacer;
    QSpinBox *yBox4;
    ColorButton *iButton1;
    QSlider *ySlider4;
    QSlider *ySlider1;
    ColorButton *iButton0;
    QSlider *xSlider3;
    QSpinBox *xBox5;
    QLabel *label_3;
    QLabel *label_6;
    QSlider *ySlider5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_15;
    QLabel *label_13;
    QLabel *label_14;
    QCheckBox *eBox4;
    QLabel *label_11;
    QCheckBox *eBox3;
    QCheckBox *eBox1;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QCheckBox *aSnapBox;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *indicBox;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *xyBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *copyButton;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *MPerfWidget)
    {
        if (MPerfWidget->objectName().isEmpty())
            MPerfWidget->setObjectName(QStringLiteral("MPerfWidget"));
        MPerfWidget->resize(932, 637);
        verticalLayout = new QVBoxLayout(MPerfWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(MPerfWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(MPerfWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_25 = new QLabel(MPerfWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_25, 16, 5, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lHeightBox = new QComboBox(MPerfWidget);
        lHeightBox->setObjectName(QStringLiteral("lHeightBox"));

        horizontalLayout_2->addWidget(lHeightBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 16, 8, 1, 3);

        eBox2 = new QCheckBox(MPerfWidget);
        eBox2->setObjectName(QStringLiteral("eBox2"));

        gridLayout->addWidget(eBox2, 7, 1, 1, 1);

        ySlider3 = new QSlider(MPerfWidget);
        ySlider3->setObjectName(QStringLiteral("ySlider3"));
        ySlider3->setMinimum(0);
        ySlider3->setMaximum(1000);
        ySlider3->setSingleStep(10);
        ySlider3->setPageStep(50);
        ySlider3->setValue(0);
        ySlider3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ySlider3, 8, 8, 1, 1);

        xSlider2 = new QSlider(MPerfWidget);
        xSlider2->setObjectName(QStringLiteral("xSlider2"));
        xSlider2->setMinimum(0);
        xSlider2->setMaximum(1000);
        xSlider2->setSingleStep(10);
        xSlider2->setPageStep(50);
        xSlider2->setValue(0);
        xSlider2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(xSlider2, 7, 5, 1, 1);

        xBox3 = new QSpinBox(MPerfWidget);
        xBox3->setObjectName(QStringLiteral("xBox3"));
        xBox3->setMinimum(100);
        xBox3->setMaximum(12000);
        xBox3->setSingleStep(50);

        gridLayout->addWidget(xBox3, 8, 6, 1, 1);

        yBox0 = new QSpinBox(MPerfWidget);
        yBox0->setObjectName(QStringLiteral("yBox0"));
        yBox0->setMinimum(100);
        yBox0->setMaximum(12000);
        yBox0->setSingleStep(50);

        gridLayout->addWidget(yBox0, 11, 9, 1, 1);

        ySlider0 = new QSlider(MPerfWidget);
        ySlider0->setObjectName(QStringLiteral("ySlider0"));
        ySlider0->setMinimum(0);
        ySlider0->setMaximum(1000);
        ySlider0->setSingleStep(10);
        ySlider0->setPageStep(50);
        ySlider0->setValue(0);
        ySlider0->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ySlider0, 11, 8, 1, 1);

        iButton4 = new ColorButton(MPerfWidget);
        iButton4->setObjectName(QStringLiteral("iButton4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iButton4->sizePolicy().hasHeightForWidth());
        iButton4->setSizePolicy(sizePolicy);
        iButton4->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(iButton4, 9, 2, 1, 1);

        iButton5 = new ColorButton(MPerfWidget);
        iButton5->setObjectName(QStringLiteral("iButton5"));
        sizePolicy.setHeightForWidth(iButton5->sizePolicy().hasHeightForWidth());
        iButton5->setSizePolicy(sizePolicy);
        iButton5->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(iButton5, 10, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 4, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 3, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 4, 7, 1, 1);

        iButton3 = new ColorButton(MPerfWidget);
        iButton3->setObjectName(QStringLiteral("iButton3"));
        sizePolicy.setHeightForWidth(iButton3->sizePolicy().hasHeightForWidth());
        iButton3->setSizePolicy(sizePolicy);
        iButton3->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(iButton3, 8, 2, 1, 1);

        label_12 = new QLabel(MPerfWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_12, 4, 5, 1, 1);

        xBox4 = new QSpinBox(MPerfWidget);
        xBox4->setObjectName(QStringLiteral("xBox4"));
        xBox4->setMinimum(100);
        xBox4->setMaximum(12000);
        xBox4->setSingleStep(50);

        gridLayout->addWidget(xBox4, 9, 6, 1, 1);

        xBox0 = new QSpinBox(MPerfWidget);
        xBox0->setObjectName(QStringLiteral("xBox0"));
        xBox0->setMinimum(100);
        xBox0->setMaximum(12000);
        xBox0->setSingleStep(50);

        gridLayout->addWidget(xBox0, 11, 6, 1, 1);

        yBox5 = new QSpinBox(MPerfWidget);
        yBox5->setObjectName(QStringLiteral("yBox5"));
        yBox5->setMinimum(100);
        yBox5->setMaximum(12000);
        yBox5->setSingleStep(50);

        gridLayout->addWidget(yBox5, 10, 9, 1, 1);

        eBox5 = new QCheckBox(MPerfWidget);
        eBox5->setObjectName(QStringLiteral("eBox5"));

        gridLayout->addWidget(eBox5, 10, 1, 1, 1);

        xSlider5 = new QSlider(MPerfWidget);
        xSlider5->setObjectName(QStringLiteral("xSlider5"));
        xSlider5->setMinimum(0);
        xSlider5->setMaximum(1000);
        xSlider5->setSingleStep(10);
        xSlider5->setPageStep(50);
        xSlider5->setValue(0);
        xSlider5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(xSlider5, 10, 5, 1, 1);

        xBox1 = new QSpinBox(MPerfWidget);
        xBox1->setObjectName(QStringLiteral("xBox1"));
        sizePolicy.setHeightForWidth(xBox1->sizePolicy().hasHeightForWidth());
        xBox1->setSizePolicy(sizePolicy);
        xBox1->setMinimum(100);
        xBox1->setMaximum(12000);
        xBox1->setSingleStep(50);

        gridLayout->addWidget(xBox1, 6, 6, 1, 1);

        yBox2 = new QSpinBox(MPerfWidget);
        yBox2->setObjectName(QStringLiteral("yBox2"));
        yBox2->setMinimum(100);
        yBox2->setMaximum(12000);
        yBox2->setSingleStep(50);

        gridLayout->addWidget(yBox2, 7, 9, 1, 1);

        yBox3 = new QSpinBox(MPerfWidget);
        yBox3->setObjectName(QStringLiteral("yBox3"));
        yBox3->setMinimum(100);
        yBox3->setMaximum(12000);
        yBox3->setSingleStep(50);

        gridLayout->addWidget(yBox3, 8, 9, 1, 1);

        xSlider4 = new QSlider(MPerfWidget);
        xSlider4->setObjectName(QStringLiteral("xSlider4"));
        xSlider4->setMinimum(0);
        xSlider4->setMaximum(1000);
        xSlider4->setSingleStep(10);
        xSlider4->setPageStep(50);
        xSlider4->setValue(0);
        xSlider4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(xSlider4, 9, 5, 1, 1);

        label_4 = new QLabel(MPerfWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_4, 4, 8, 1, 1);

        xSlider0 = new QSlider(MPerfWidget);
        xSlider0->setObjectName(QStringLiteral("xSlider0"));
        xSlider0->setMinimum(0);
        xSlider0->setMaximum(1000);
        xSlider0->setSingleStep(10);
        xSlider0->setPageStep(50);
        xSlider0->setValue(0);
        xSlider0->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(xSlider0, 11, 5, 1, 1);

        iButton2 = new ColorButton(MPerfWidget);
        iButton2->setObjectName(QStringLiteral("iButton2"));
        sizePolicy.setHeightForWidth(iButton2->sizePolicy().hasHeightForWidth());
        iButton2->setSizePolicy(sizePolicy);
        iButton2->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(iButton2, 7, 2, 1, 1);

        line_3 = new QFrame(MPerfWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 5, 0, 1, 11);

        iButtonO = new ColorButton(MPerfWidget);
        iButtonO->setObjectName(QStringLiteral("iButtonO"));
        sizePolicy.setHeightForWidth(iButtonO->sizePolicy().hasHeightForWidth());
        iButtonO->setSizePolicy(sizePolicy);
        iButtonO->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(iButtonO, 12, 2, 1, 1);

        yBox1 = new QSpinBox(MPerfWidget);
        yBox1->setObjectName(QStringLiteral("yBox1"));
        sizePolicy.setHeightForWidth(yBox1->sizePolicy().hasHeightForWidth());
        yBox1->setSizePolicy(sizePolicy);
        yBox1->setMinimum(100);
        yBox1->setMaximum(12000);
        yBox1->setSingleStep(50);

        gridLayout->addWidget(yBox1, 6, 9, 1, 1);

        ySlider2 = new QSlider(MPerfWidget);
        ySlider2->setObjectName(QStringLiteral("ySlider2"));
        ySlider2->setMinimum(0);
        ySlider2->setMaximum(1000);
        ySlider2->setSingleStep(10);
        ySlider2->setPageStep(50);
        ySlider2->setValue(0);
        ySlider2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ySlider2, 7, 8, 1, 1);

        xBox2 = new QSpinBox(MPerfWidget);
        xBox2->setObjectName(QStringLiteral("xBox2"));
        xBox2->setMinimum(100);
        xBox2->setMaximum(12000);
        xBox2->setSingleStep(50);

        gridLayout->addWidget(xBox2, 7, 6, 1, 1);

        xSlider1 = new QSlider(MPerfWidget);
        xSlider1->setObjectName(QStringLiteral("xSlider1"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(xSlider1->sizePolicy().hasHeightForWidth());
        xSlider1->setSizePolicy(sizePolicy2);
        xSlider1->setMinimum(0);
        xSlider1->setMaximum(1000);
        xSlider1->setSingleStep(10);
        xSlider1->setPageStep(50);
        xSlider1->setValue(0);
        xSlider1->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(xSlider1, 6, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        yBox4 = new QSpinBox(MPerfWidget);
        yBox4->setObjectName(QStringLiteral("yBox4"));
        yBox4->setMinimum(100);
        yBox4->setMaximum(12000);
        yBox4->setSingleStep(50);

        gridLayout->addWidget(yBox4, 9, 9, 1, 1);

        iButton1 = new ColorButton(MPerfWidget);
        iButton1->setObjectName(QStringLiteral("iButton1"));
        sizePolicy.setHeightForWidth(iButton1->sizePolicy().hasHeightForWidth());
        iButton1->setSizePolicy(sizePolicy);
        iButton1->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(iButton1, 6, 2, 1, 1);

        ySlider4 = new QSlider(MPerfWidget);
        ySlider4->setObjectName(QStringLiteral("ySlider4"));
        ySlider4->setMinimum(0);
        ySlider4->setMaximum(1000);
        ySlider4->setSingleStep(10);
        ySlider4->setPageStep(50);
        ySlider4->setValue(0);
        ySlider4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ySlider4, 9, 8, 1, 1);

        ySlider1 = new QSlider(MPerfWidget);
        ySlider1->setObjectName(QStringLiteral("ySlider1"));
        ySlider1->setMinimum(0);
        ySlider1->setMaximum(1000);
        ySlider1->setSingleStep(10);
        ySlider1->setPageStep(50);
        ySlider1->setValue(0);
        ySlider1->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ySlider1, 6, 8, 1, 1);

        iButton0 = new ColorButton(MPerfWidget);
        iButton0->setObjectName(QStringLiteral("iButton0"));
        sizePolicy.setHeightForWidth(iButton0->sizePolicy().hasHeightForWidth());
        iButton0->setSizePolicy(sizePolicy);
        iButton0->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(iButton0, 11, 2, 1, 1);

        xSlider3 = new QSlider(MPerfWidget);
        xSlider3->setObjectName(QStringLiteral("xSlider3"));
        xSlider3->setMinimum(0);
        xSlider3->setMaximum(1000);
        xSlider3->setSingleStep(10);
        xSlider3->setPageStep(50);
        xSlider3->setValue(0);
        xSlider3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(xSlider3, 8, 5, 1, 1);

        xBox5 = new QSpinBox(MPerfWidget);
        xBox5->setObjectName(QStringLiteral("xBox5"));
        xBox5->setMinimum(100);
        xBox5->setMaximum(12000);
        xBox5->setSingleStep(50);

        gridLayout->addWidget(xBox5, 10, 6, 1, 1);

        label_3 = new QLabel(MPerfWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 12, 5, 1, 5);

        label_6 = new QLabel(MPerfWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 7, 3, 1, 1);

        ySlider5 = new QSlider(MPerfWidget);
        ySlider5->setObjectName(QStringLiteral("ySlider5"));
        ySlider5->setMinimum(0);
        ySlider5->setMaximum(1000);
        ySlider5->setSingleStep(10);
        ySlider5->setPageStep(50);
        ySlider5->setValue(0);
        ySlider5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ySlider5, 10, 8, 1, 1);

        label_7 = new QLabel(MPerfWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 8, 3, 1, 1);

        label_8 = new QLabel(MPerfWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 9, 3, 1, 1);

        label_5 = new QLabel(MPerfWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 6, 3, 1, 1);

        label_15 = new QLabel(MPerfWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 12, 3, 1, 1);

        label_13 = new QLabel(MPerfWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 10, 3, 1, 1);

        label_14 = new QLabel(MPerfWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 11, 3, 1, 1);

        eBox4 = new QCheckBox(MPerfWidget);
        eBox4->setObjectName(QStringLiteral("eBox4"));

        gridLayout->addWidget(eBox4, 9, 1, 1, 1);

        label_11 = new QLabel(MPerfWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 4, 2, 1, 2);

        eBox3 = new QCheckBox(MPerfWidget);
        eBox3->setObjectName(QStringLiteral("eBox3"));

        gridLayout->addWidget(eBox3, 8, 1, 1, 1);

        eBox1 = new QCheckBox(MPerfWidget);
        eBox1->setObjectName(QStringLiteral("eBox1"));

        gridLayout->addWidget(eBox1, 6, 1, 1, 1);

        label_2 = new QLabel(MPerfWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 14, 0, 1, 10);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 13, 2, 1, 1);

        aSnapBox = new QCheckBox(MPerfWidget);
        aSnapBox->setObjectName(QStringLiteral("aSnapBox"));

        gridLayout->addWidget(aSnapBox, 16, 1, 1, 4);

        line_2 = new QFrame(MPerfWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 15, 0, 1, 10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        indicBox = new QCheckBox(MPerfWidget);
        indicBox->setObjectName(QStringLiteral("indicBox"));

        horizontalLayout_4->addWidget(indicBox);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        spinBox = new QSpinBox(MPerfWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(100);
        spinBox->setValue(100);

        horizontalLayout_4->addWidget(spinBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_4, 0, 1, 1, 9);

        xyBox = new QCheckBox(MPerfWidget);
        xyBox->setObjectName(QStringLiteral("xyBox"));

        gridLayout->addWidget(xyBox, 2, 1, 1, 9);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        copyButton = new QPushButton(MPerfWidget);
        copyButton->setObjectName(QStringLiteral("copyButton"));

        horizontalLayout->addWidget(copyButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(indicBox, spinBox);
        QWidget::setTabOrder(spinBox, xyBox);
        QWidget::setTabOrder(xyBox, eBox1);
        QWidget::setTabOrder(eBox1, eBox2);
        QWidget::setTabOrder(eBox2, eBox3);
        QWidget::setTabOrder(eBox3, eBox4);
        QWidget::setTabOrder(eBox4, eBox5);
        QWidget::setTabOrder(eBox5, iButton1);
        QWidget::setTabOrder(iButton1, iButton2);
        QWidget::setTabOrder(iButton2, iButton3);
        QWidget::setTabOrder(iButton3, iButton4);
        QWidget::setTabOrder(iButton4, iButton5);
        QWidget::setTabOrder(iButton5, iButton0);
        QWidget::setTabOrder(iButton0, iButtonO);
        QWidget::setTabOrder(iButtonO, xSlider1);
        QWidget::setTabOrder(xSlider1, xSlider2);
        QWidget::setTabOrder(xSlider2, xSlider3);
        QWidget::setTabOrder(xSlider3, xSlider4);
        QWidget::setTabOrder(xSlider4, xSlider5);
        QWidget::setTabOrder(xSlider5, xSlider0);
        QWidget::setTabOrder(xSlider0, xBox1);
        QWidget::setTabOrder(xBox1, xBox2);
        QWidget::setTabOrder(xBox2, xBox3);
        QWidget::setTabOrder(xBox3, xBox4);
        QWidget::setTabOrder(xBox4, xBox5);
        QWidget::setTabOrder(xBox5, xBox0);
        QWidget::setTabOrder(xBox0, ySlider1);
        QWidget::setTabOrder(ySlider1, ySlider2);
        QWidget::setTabOrder(ySlider2, ySlider3);
        QWidget::setTabOrder(ySlider3, ySlider4);
        QWidget::setTabOrder(ySlider4, ySlider5);
        QWidget::setTabOrder(ySlider5, ySlider0);
        QWidget::setTabOrder(ySlider0, yBox1);
        QWidget::setTabOrder(yBox1, yBox2);
        QWidget::setTabOrder(yBox2, yBox3);
        QWidget::setTabOrder(yBox3, yBox4);
        QWidget::setTabOrder(yBox4, yBox5);
        QWidget::setTabOrder(yBox5, yBox0);
        QWidget::setTabOrder(yBox0, aSnapBox);
        QWidget::setTabOrder(aSnapBox, lHeightBox);
        QWidget::setTabOrder(lHeightBox, copyButton);

        retranslateUi(MPerfWidget);

        QMetaObject::connectSlotsByName(MPerfWidget);
    } // setupUi

    void retranslateUi(QWidget *MPerfWidget)
    {
        MPerfWidget->setWindowTitle(QApplication::translate("MPerfWidget", "Form", 0));
        label->setText(QApplication::translate("MPerfWidget", "DPI", 0));
        label_25->setText(QApplication::translate("MPerfWidget", "Lift height:", 0));
        lHeightBox->clear();
        lHeightBox->insertItems(0, QStringList()
         << QApplication::translate("MPerfWidget", "Low", 0)
         << QApplication::translate("MPerfWidget", "Medium-low", 0)
         << QApplication::translate("MPerfWidget", "Medium", 0)
         << QApplication::translate("MPerfWidget", "Medium-high", 0)
         << QApplication::translate("MPerfWidget", "High", 0)
        );
#ifndef QT_NO_TOOLTIP
        eBox2->setToolTip(QApplication::translate("MPerfWidget", "Uncheck this box to skip the stage while moving up or down.", 0));
#endif // QT_NO_TOOLTIP
        eBox2->setText(QString());
#ifndef QT_NO_TOOLTIP
        iButton4->setToolTip(QApplication::translate("MPerfWidget", "Tip: alt+click to set all colors at once", 0));
#endif // QT_NO_TOOLTIP
        iButton4->setText(QString());
#ifndef QT_NO_TOOLTIP
        iButton5->setToolTip(QApplication::translate("MPerfWidget", "Tip: alt+click to set all colors at once", 0));
#endif // QT_NO_TOOLTIP
        iButton5->setText(QString());
#ifndef QT_NO_TOOLTIP
        iButton3->setToolTip(QApplication::translate("MPerfWidget", "Tip: alt+click to set all colors at once", 0));
#endif // QT_NO_TOOLTIP
        iButton3->setText(QString());
        label_12->setText(QApplication::translate("MPerfWidget", "X Value:", 0));
#ifndef QT_NO_TOOLTIP
        eBox5->setToolTip(QApplication::translate("MPerfWidget", "Uncheck this box to skip the stage while moving up or down.", 0));
#endif // QT_NO_TOOLTIP
        eBox5->setText(QString());
        label_4->setText(QApplication::translate("MPerfWidget", "Y Value:", 0));
#ifndef QT_NO_TOOLTIP
        iButton2->setToolTip(QApplication::translate("MPerfWidget", "Tip: alt+click to set all colors at once", 0));
#endif // QT_NO_TOOLTIP
        iButton2->setText(QString());
#ifndef QT_NO_TOOLTIP
        iButtonO->setToolTip(QApplication::translate("MPerfWidget", "Tip: alt+click to set all colors at once", 0));
#endif // QT_NO_TOOLTIP
        iButtonO->setText(QString());
#ifndef QT_NO_TOOLTIP
        iButton1->setToolTip(QApplication::translate("MPerfWidget", "Tip: alt+click to set all colors at once", 0));
#endif // QT_NO_TOOLTIP
        iButton1->setText(QString());
#ifndef QT_NO_TOOLTIP
        iButton0->setToolTip(QApplication::translate("MPerfWidget", "Tip: alt+click to set all colors at once", 0));
#endif // QT_NO_TOOLTIP
        iButton0->setText(QString());
        label_3->setText(QApplication::translate("MPerfWidget", "You can assign other DPIs in the Binding tab.", 0));
        label_6->setText(QApplication::translate("MPerfWidget", "2:", 0));
        label_7->setText(QApplication::translate("MPerfWidget", "3:", 0));
        label_8->setText(QApplication::translate("MPerfWidget", "4:", 0));
        label_5->setText(QApplication::translate("MPerfWidget", "1:", 0));
        label_15->setText(QApplication::translate("MPerfWidget", "Other:", 0));
        label_13->setText(QApplication::translate("MPerfWidget", "5:", 0));
        label_14->setText(QApplication::translate("MPerfWidget", "Sniper:", 0));
#ifndef QT_NO_TOOLTIP
        eBox4->setToolTip(QApplication::translate("MPerfWidget", "Uncheck this box to skip the stage while moving up or down.", 0));
#endif // QT_NO_TOOLTIP
        eBox4->setText(QString());
        label_11->setText(QApplication::translate("MPerfWidget", "DPI Stage:", 0));
#ifndef QT_NO_TOOLTIP
        eBox3->setToolTip(QApplication::translate("MPerfWidget", "Uncheck this box to skip the stage while moving up or down.", 0));
#endif // QT_NO_TOOLTIP
        eBox3->setText(QString());
#ifndef QT_NO_TOOLTIP
        eBox1->setToolTip(QApplication::translate("MPerfWidget", "Uncheck this box to skip the stage while moving up or down.", 0));
#endif // QT_NO_TOOLTIP
        eBox1->setText(QString());
        label_2->setText(QApplication::translate("MPerfWidget", "Movement", 0));
        aSnapBox->setText(QApplication::translate("MPerfWidget", "Angle snap", 0));
        indicBox->setText(QApplication::translate("MPerfWidget", "Use DPI indicator:", 0));
#ifndef QT_NO_TOOLTIP
        spinBox->setToolTip(QApplication::translate("MPerfWidget", "Indicator intensity", 0));
#endif // QT_NO_TOOLTIP
        spinBox->setSuffix(QApplication::translate("MPerfWidget", "%", 0));
        xyBox->setText(QApplication::translate("MPerfWidget", "Independent X/Y states", 0));
        copyButton->setText(QApplication::translate("MPerfWidget", "Copy to mode...", 0));
    } // retranslateUi

};

namespace Ui {
    class MPerfWidget: public Ui_MPerfWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPERFWIDGET_H
