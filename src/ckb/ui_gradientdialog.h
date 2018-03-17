/********************************************************************************
** Form generated from reading UI file 'gradientdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADIENTDIALOG_H
#define UI_GRADIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include "colorbutton.h"
#include "gradientdialogwidget.h"

QT_BEGIN_NAMESPACE

class Ui_GradientDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    GradientDialogWidget *widget;
    QDialogButtonBox *buttonBox;
    QGroupBox *stopBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    ColorButton *stopColor;
    QSpinBox *stopOpacity;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpinBox *stopPos;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QListWidget *presetList;
    QLineEdit *presetName;
    QPushButton *presetSave;
    QPushButton *presetDelete;

    void setupUi(QDialog *GradientDialog)
    {
        if (GradientDialog->objectName().isEmpty())
            GradientDialog->setObjectName(QStringLiteral("GradientDialog"));
        GradientDialog->resize(400, 440);
        GradientDialog->setMinimumSize(QSize(400, 440));
        GradientDialog->setMaximumSize(QSize(400, 440));
        GradientDialog->setFocusPolicy(Qt::ClickFocus);
        gridLayout = new QGridLayout(GradientDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        widget = new GradientDialogWidget(GradientDialog);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 74));
        widget->setMaximumSize(QSize(16777215, 74));

        gridLayout->addWidget(widget, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(GradientDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 1);

        stopBox = new QGroupBox(GradientDialog);
        stopBox->setObjectName(QStringLiteral("stopBox"));
        sizePolicy.setHeightForWidth(stopBox->sizePolicy().hasHeightForWidth());
        stopBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(stopBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        stopColor = new ColorButton(stopBox);
        stopColor->setObjectName(QStringLiteral("stopColor"));

        horizontalLayout_2->addWidget(stopColor);

        stopOpacity = new QSpinBox(stopBox);
        stopOpacity->setObjectName(QStringLiteral("stopOpacity"));
        stopOpacity->setMaximum(100);

        horizontalLayout_2->addWidget(stopOpacity);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 2, 1, 1);

        label = new QLabel(stopBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stopPos = new QSpinBox(stopBox);
        stopPos->setObjectName(QStringLiteral("stopPos"));
        stopPos->setMaximum(100);

        horizontalLayout->addWidget(stopPos);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 0, 2, 1, 1);

        label_2 = new QLabel(stopBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        gridLayout->addWidget(stopBox, 4, 0, 1, 1);

        groupBox_2 = new QGroupBox(GradientDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        presetList = new QListWidget(groupBox_2);
        presetList->setObjectName(QStringLiteral("presetList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(presetList->sizePolicy().hasHeightForWidth());
        presetList->setSizePolicy(sizePolicy1);
        presetList->setFrameShadow(QFrame::Plain);
        presetList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        presetList->setIconSize(QSize(64, 64));
        presetList->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        presetList->setFlow(QListView::TopToBottom);
        presetList->setViewMode(QListView::IconMode);
        presetList->setUniformItemSizes(true);

        gridLayout_3->addWidget(presetList, 0, 0, 3, 1);

        presetName = new QLineEdit(groupBox_2);
        presetName->setObjectName(QStringLiteral("presetName"));
        presetName->setMaxLength(30);

        gridLayout_3->addWidget(presetName, 0, 1, 1, 1);

        presetSave = new QPushButton(groupBox_2);
        presetSave->setObjectName(QStringLiteral("presetSave"));
        presetSave->setAutoDefault(false);

        gridLayout_3->addWidget(presetSave, 1, 1, 1, 1);

        presetDelete = new QPushButton(groupBox_2);
        presetDelete->setObjectName(QStringLiteral("presetDelete"));
        presetDelete->setAutoDefault(false);

        gridLayout_3->addWidget(presetDelete, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        QWidget::setTabOrder(presetList, presetName);
        QWidget::setTabOrder(presetName, presetSave);
        QWidget::setTabOrder(presetSave, presetDelete);
        QWidget::setTabOrder(presetDelete, stopPos);
        QWidget::setTabOrder(stopPos, stopColor);
        QWidget::setTabOrder(stopColor, stopOpacity);

        retranslateUi(GradientDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GradientDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GradientDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GradientDialog);
    } // setupUi

    void retranslateUi(QDialog *GradientDialog)
    {
        GradientDialog->setWindowTitle(QApplication::translate("GradientDialog", "Pick Gradient", 0));
        stopBox->setTitle(QApplication::translate("GradientDialog", "Point X of Y", 0));
        stopColor->setText(QApplication::translate("GradientDialog", "Pick Color...", 0));
        stopOpacity->setSuffix(QApplication::translate("GradientDialog", "%", 0));
        label->setText(QApplication::translate("GradientDialog", "Position:", 0));
        stopPos->setSuffix(QApplication::translate("GradientDialog", "%", 0));
        label_2->setText(QApplication::translate("GradientDialog", "Color:", 0));
        groupBox_2->setTitle(QApplication::translate("GradientDialog", "Presets", 0));
        presetName->setPlaceholderText(QApplication::translate("GradientDialog", "Name", 0));
        presetSave->setText(QApplication::translate("GradientDialog", "Save", 0));
        presetDelete->setText(QApplication::translate("GradientDialog", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class GradientDialog: public Ui_GradientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADIENTDIALOG_H
