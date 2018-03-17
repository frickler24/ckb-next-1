/********************************************************************************
** Form generated from reading UI file 'kbwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KBWIDGET_H
#define UI_KBWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <kblightwidget.h>
#include "kbbindwidget.h"
#include "kperfwidget.h"
#include "mperfwidget.h"
#include "rlistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_KbWidget
{
public:
    QGridLayout *gridLayout;
    QComboBox *profileBox;
    QTabWidget *tabWidget;
    QWidget *lightTab;
    QGridLayout *gridLayout_2;
    KbLightWidget *lightWidget;
    QLabel *label_3;
    QWidget *bindTab;
    QGridLayout *gridLayout_5;
    KbBindWidget *bindWidget;
    QWidget *kPerfTab;
    QGridLayout *gridLayout_4;
    KPerfWidget *kPerfWidget;
    QWidget *mPerfTab;
    QGridLayout *gridLayout_7;
    MPerfWidget *mPerfWidget;
    QWidget *devTab;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_9;
    QLabel *fwUpdLabel;
    QLabel *fwLabel;
    QLabel *label_4;
    QHBoxLayout *fwUpdLayout;
    QPushButton *fwUpdButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *pollLabel2;
    QLabel *pollLabel;
    QSpacerItem *verticalSpacer;
    QLabel *serialLabel;
    QLabel *devLabel;
    QFrame *line;
    RListWidget *modesList;
    QPushButton *hwSaveButton;

    void setupUi(QWidget *KbWidget)
    {
        if (KbWidget->objectName().isEmpty())
            KbWidget->setObjectName(QStringLiteral("KbWidget"));
        KbWidget->resize(773, 539);
        gridLayout = new QGridLayout(KbWidget);
        gridLayout->setSpacing(9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, -1, 9, 9);
        profileBox = new QComboBox(KbWidget);
        profileBox->setObjectName(QStringLiteral("profileBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(18);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(profileBox->sizePolicy().hasHeightForWidth());
        profileBox->setSizePolicy(sizePolicy);
        profileBox->setIconSize(QSize(24, 24));

        gridLayout->addWidget(profileBox, 0, 0, 1, 1);

        tabWidget = new QTabWidget(KbWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(82);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        lightTab = new QWidget();
        lightTab->setObjectName(QStringLiteral("lightTab"));
        gridLayout_2 = new QGridLayout(lightTab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        lightWidget = new KbLightWidget(lightTab);
        lightWidget->setObjectName(QStringLiteral("lightWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lightWidget->sizePolicy().hasHeightForWidth());
        lightWidget->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(lightWidget, 0, 0, 1, 1);

        label_3 = new QLabel(lightTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        tabWidget->addTab(lightTab, QString());
        bindTab = new QWidget();
        bindTab->setObjectName(QStringLiteral("bindTab"));
        gridLayout_5 = new QGridLayout(bindTab);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(6, 6, 6, 6);
        bindWidget = new KbBindWidget(bindTab);
        bindWidget->setObjectName(QStringLiteral("bindWidget"));
        sizePolicy2.setHeightForWidth(bindWidget->sizePolicy().hasHeightForWidth());
        bindWidget->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(bindWidget, 0, 0, 1, 1);

        tabWidget->addTab(bindTab, QString());
        kPerfTab = new QWidget();
        kPerfTab->setObjectName(QStringLiteral("kPerfTab"));
        gridLayout_4 = new QGridLayout(kPerfTab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(6, 6, 6, 6);
        kPerfWidget = new KPerfWidget(kPerfTab);
        kPerfWidget->setObjectName(QStringLiteral("kPerfWidget"));

        gridLayout_4->addWidget(kPerfWidget, 0, 0, 1, 1);

        tabWidget->addTab(kPerfTab, QString());
        mPerfTab = new QWidget();
        mPerfTab->setObjectName(QStringLiteral("mPerfTab"));
        gridLayout_7 = new QGridLayout(mPerfTab);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(6, 6, 6, 6);
        mPerfWidget = new MPerfWidget(mPerfTab);
        mPerfWidget->setObjectName(QStringLiteral("mPerfWidget"));

        gridLayout_7->addWidget(mPerfWidget, 0, 0, 1, 1);

        tabWidget->addTab(mPerfTab, QString());
        devTab = new QWidget();
        devTab->setObjectName(QStringLiteral("devTab"));
        gridLayout_3 = new QGridLayout(devTab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, 6);
        horizontalSpacer_2 = new QSpacerItem(40, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 4, 1, 1, 1);

        label_9 = new QLabel(devTab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 34));

        gridLayout_3->addWidget(label_9, 4, 0, 1, 1);

        fwUpdLabel = new QLabel(devTab);
        fwUpdLabel->setObjectName(QStringLiteral("fwUpdLabel"));
        fwUpdLabel->setMinimumSize(QSize(0, 34));

        gridLayout_3->addWidget(fwUpdLabel, 6, 0, 1, 1);

        fwLabel = new QLabel(devTab);
        fwLabel->setObjectName(QStringLiteral("fwLabel"));
        fwLabel->setCursor(QCursor(Qt::IBeamCursor));
        fwLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(fwLabel, 4, 2, 1, 1);

        label_4 = new QLabel(devTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 34));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        fwUpdLayout = new QHBoxLayout();
        fwUpdLayout->setObjectName(QStringLiteral("fwUpdLayout"));
        fwUpdButton = new QPushButton(devTab);
        fwUpdButton->setObjectName(QStringLiteral("fwUpdButton"));

        fwUpdLayout->addWidget(fwUpdButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        fwUpdLayout->addItem(horizontalSpacer_3);


        gridLayout_3->addLayout(fwUpdLayout, 6, 2, 1, 1);

        pollLabel2 = new QLabel(devTab);
        pollLabel2->setObjectName(QStringLiteral("pollLabel2"));
        pollLabel2->setMinimumSize(QSize(0, 34));

        gridLayout_3->addWidget(pollLabel2, 3, 0, 1, 1);

        pollLabel = new QLabel(devTab);
        pollLabel->setObjectName(QStringLiteral("pollLabel"));

        gridLayout_3->addWidget(pollLabel, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 8, 2, 1, 1);

        serialLabel = new QLabel(devTab);
        serialLabel->setObjectName(QStringLiteral("serialLabel"));
        serialLabel->setCursor(QCursor(Qt::IBeamCursor));
        serialLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(serialLabel, 2, 2, 1, 1);

        devLabel = new QLabel(devTab);
        devLabel->setObjectName(QStringLiteral("devLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(devLabel->sizePolicy().hasHeightForWidth());
        devLabel->setSizePolicy(sizePolicy4);
        devLabel->setMinimumSize(QSize(0, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        devLabel->setFont(font);

        gridLayout_3->addWidget(devLabel, 0, 0, 1, 3);

        line = new QFrame(devTab);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy5);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 0, 1, 3);

        tabWidget->addTab(devTab, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 3, 1);

        modesList = new RListWidget(KbWidget);
        modesList->setObjectName(QStringLiteral("modesList"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(18);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(modesList->sizePolicy().hasHeightForWidth());
        modesList->setSizePolicy(sizePolicy6);
        modesList->setContextMenuPolicy(Qt::CustomContextMenu);
        modesList->setFrameShadow(QFrame::Plain);
        modesList->setDragDropMode(QAbstractItemView::InternalMove);
        modesList->setIconSize(QSize(24, 24));
        modesList->setMovement(QListView::Snap);

        gridLayout->addWidget(modesList, 1, 0, 1, 1);

        hwSaveButton = new QPushButton(KbWidget);
        hwSaveButton->setObjectName(QStringLiteral("hwSaveButton"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(18);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(hwSaveButton->sizePolicy().hasHeightForWidth());
        hwSaveButton->setSizePolicy(sizePolicy7);

        gridLayout->addWidget(hwSaveButton, 2, 0, 1, 1);


        retranslateUi(KbWidget);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(KbWidget);
    } // setupUi

    void retranslateUi(QWidget *KbWidget)
    {
        KbWidget->setWindowTitle(QApplication::translate("KbWidget", "Form", 0));
        label_3->setText(QApplication::translate("KbWidget", "Tip: Drag+drop items to reorder. Right-click for menu.", 0));
        tabWidget->setTabText(tabWidget->indexOf(lightTab), QApplication::translate("KbWidget", "Lighting", 0));
        tabWidget->setTabText(tabWidget->indexOf(bindTab), QApplication::translate("KbWidget", "Binding", 0));
        tabWidget->setTabText(tabWidget->indexOf(kPerfTab), QApplication::translate("KbWidget", "Performance", 0));
        tabWidget->setTabText(tabWidget->indexOf(mPerfTab), QApplication::translate("KbWidget", "Performance", 0));
        label_9->setText(QApplication::translate("KbWidget", "Firmware version:", 0));
        fwUpdLabel->setText(QApplication::translate("KbWidget", "Status:", 0));
        fwLabel->setText(QApplication::translate("KbWidget", "N/A", 0));
        label_4->setText(QApplication::translate("KbWidget", "Serial Number:", 0));
        fwUpdButton->setText(QApplication::translate("KbWidget", "Check for updates", 0));
        pollLabel2->setText(QApplication::translate("KbWidget", "Poll rate:", 0));
        pollLabel->setText(QApplication::translate("KbWidget", "N/A", 0));
        serialLabel->setText(QApplication::translate("KbWidget", "N/A", 0));
        devLabel->setText(QApplication::translate("KbWidget", "Device", 0));
        tabWidget->setTabText(tabWidget->indexOf(devTab), QApplication::translate("KbWidget", "Device", 0));
        hwSaveButton->setText(QApplication::translate("KbWidget", "Save to hardware", 0));
    } // retranslateUi

};

namespace Ui {
    class KbWidget: public Ui_KbWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KBWIDGET_H
