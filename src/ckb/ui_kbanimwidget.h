/********************************************************************************
** Form generated from reading UI file 'kbanimwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KBANIMWIDGET_H
#define UI_KBANIMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "rlistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_KbAnimWidget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *selectionStack;
    QWidget *noSelPage;
    QGridLayout *gridLayout_2;
    QLabel *noAnimLabel;
    QSpacerItem *verticalSpacer;
    QWidget *animPage;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *aNameLabel;
    QLabel *aVerLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *aCopyLabel;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_3;
    QLineEdit *nameBox;
    QDoubleSpinBox *opacityBox;
    QComboBox *blendBox;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_7;
    QPushButton *keyButton;
    QPushButton *deleteButton;
    QPushButton *propertyButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QWidget *aMissingPage;
    QGridLayout *gridLayout_4;
    QLabel *aMissingLabel;
    RListWidget *animList;

    void setupUi(QWidget *KbAnimWidget)
    {
        if (KbAnimWidget->objectName().isEmpty())
            KbAnimWidget->setObjectName(QStringLiteral("KbAnimWidget"));
        KbAnimWidget->resize(613, 300);
        gridLayout = new QGridLayout(KbAnimWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        selectionStack = new QStackedWidget(KbAnimWidget);
        selectionStack->setObjectName(QStringLiteral("selectionStack"));
        noSelPage = new QWidget();
        noSelPage->setObjectName(QStringLiteral("noSelPage"));
        gridLayout_2 = new QGridLayout(noSelPage);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        noAnimLabel = new QLabel(noSelPage);
        noAnimLabel->setObjectName(QStringLiteral("noAnimLabel"));

        gridLayout_2->addWidget(noAnimLabel, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        selectionStack->addWidget(noSelPage);
        animPage = new QWidget();
        animPage->setObjectName(QStringLiteral("animPage"));
        verticalLayout = new QVBoxLayout(animPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        aNameLabel = new QLabel(animPage);
        aNameLabel->setObjectName(QStringLiteral("aNameLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        aNameLabel->setFont(font);

        horizontalLayout->addWidget(aNameLabel);

        aVerLabel = new QLabel(animPage);
        aVerLabel->setObjectName(QStringLiteral("aVerLabel"));

        horizontalLayout->addWidget(aVerLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        aCopyLabel = new QLabel(animPage);
        aCopyLabel->setObjectName(QStringLiteral("aCopyLabel"));

        horizontalLayout->addWidget(aCopyLabel);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        nameBox = new QLineEdit(animPage);
        nameBox->setObjectName(QStringLiteral("nameBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameBox->sizePolicy().hasHeightForWidth());
        nameBox->setSizePolicy(sizePolicy);
        nameBox->setMinimumSize(QSize(150, 0));
        nameBox->setMaximumSize(QSize(150, 16777215));

        gridLayout_3->addWidget(nameBox, 0, 3, 1, 2);

        opacityBox = new QDoubleSpinBox(animPage);
        opacityBox->setObjectName(QStringLiteral("opacityBox"));
        opacityBox->setDecimals(1);
        opacityBox->setValue(100);

        gridLayout_3->addWidget(opacityBox, 1, 3, 1, 1);

        blendBox = new QComboBox(animPage);
        blendBox->setObjectName(QStringLiteral("blendBox"));

        gridLayout_3->addWidget(blendBox, 2, 3, 1, 2);

        label_6 = new QLabel(animPage);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        label_5 = new QLabel(animPage);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 5, 1, 1);

        label_7 = new QLabel(animPage);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 0, 1, 1, 1);

        keyButton = new QPushButton(animPage);
        keyButton->setObjectName(QStringLiteral("keyButton"));

        gridLayout_3->addWidget(keyButton, 1, 6, 1, 1);

        deleteButton = new QPushButton(animPage);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        gridLayout_3->addWidget(deleteButton, 2, 6, 1, 1);

        propertyButton = new QPushButton(animPage);
        propertyButton->setObjectName(QStringLiteral("propertyButton"));

        gridLayout_3->addWidget(propertyButton, 0, 6, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 4, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        selectionStack->addWidget(animPage);
        aMissingPage = new QWidget();
        aMissingPage->setObjectName(QStringLiteral("aMissingPage"));
        gridLayout_4 = new QGridLayout(aMissingPage);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        aMissingLabel = new QLabel(aMissingPage);
        aMissingLabel->setObjectName(QStringLiteral("aMissingLabel"));
        aMissingLabel->setFont(font);

        gridLayout_4->addWidget(aMissingLabel, 0, 0, 1, 1);

        selectionStack->addWidget(aMissingPage);

        gridLayout->addWidget(selectionStack, 0, 2, 2, 1);

        animList = new RListWidget(KbAnimWidget);
        animList->setObjectName(QStringLiteral("animList"));
        animList->setMaximumSize(QSize(130, 16777215));
        animList->setContextMenuPolicy(Qt::CustomContextMenu);
        animList->setFrameShadow(QFrame::Plain);
        animList->setDragDropMode(QAbstractItemView::InternalMove);
        animList->setMovement(QListView::Snap);

        gridLayout->addWidget(animList, 0, 0, 2, 1);


        retranslateUi(KbAnimWidget);

        QMetaObject::connectSlotsByName(KbAnimWidget);
    } // setupUi

    void retranslateUi(QWidget *KbAnimWidget)
    {
        KbAnimWidget->setWindowTitle(QApplication::translate("KbAnimWidget", "Form", 0));
        noAnimLabel->setText(QApplication::translate("KbAnimWidget", "No animations in this mode", 0));
        aNameLabel->setText(QApplication::translate("KbAnimWidget", "Animation name", 0));
        aVerLabel->setText(QApplication::translate("KbAnimWidget", "v0.0", 0));
        aCopyLabel->setText(QApplication::translate("KbAnimWidget", "Copyright \302\251", 0));
        opacityBox->setSuffix(QApplication::translate("KbAnimWidget", "%", 0));
        blendBox->clear();
        blendBox->insertItems(0, QStringList()
         << QApplication::translate("KbAnimWidget", "Normal", 0)
         << QApplication::translate("KbAnimWidget", "Add", 0)
         << QApplication::translate("KbAnimWidget", "Subtract", 0)
         << QApplication::translate("KbAnimWidget", "Multiply", 0)
         << QApplication::translate("KbAnimWidget", "Divide", 0)
        );
        label_6->setText(QApplication::translate("KbAnimWidget", "Blend mode:", 0));
        label_5->setText(QApplication::translate("KbAnimWidget", "Opacity:", 0));
        label_7->setText(QApplication::translate("KbAnimWidget", "Name:", 0));
        keyButton->setText(QApplication::translate("KbAnimWidget", "Set keys", 0));
        deleteButton->setText(QApplication::translate("KbAnimWidget", "Delete animation", 0));
        propertyButton->setText(QApplication::translate("KbAnimWidget", "Edit properties", 0));
        aMissingLabel->setText(QApplication::translate("KbAnimWidget", "Mising animation", 0));
    } // retranslateUi

};

namespace Ui {
    class KbAnimWidget: public Ui_KbAnimWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KBANIMWIDGET_H
