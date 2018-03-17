/********************************************************************************
** Form generated from reading UI file 'settingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGET_H
#define UI_SETTINGSWIDGET_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_6;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *devicesLabel;
    QLabel *label_5;
    QComboBox *layoutBox;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_8;
    QCheckBox *loginItemBox;
    QSpacerItem *verticalSpacer_6;
    QCheckBox *autoFWBox;
    QFrame *line_2;
    QLabel *label_8;
    QGridLayout *gridLayout_3;
    QLabel *shiftLabel;
    QLabel *capsLabel;
    QSpacerItem *horizontalSpacer_10;
    QComboBox *capsBox;
    QLabel *ctrlLabel;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *ctrlBox;
    QComboBox *shiftBox;
    QLabel *winLabel;
    QComboBox *winBox;
    QComboBox *altBox;
    QLabel *altLabel;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QFrame *line_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *versionLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *extraButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *SettingsWidget)
    {
        if (SettingsWidget->objectName().isEmpty())
            SettingsWidget->setObjectName(QStringLiteral("SettingsWidget"));
        SettingsWidget->resize(827, 654);
        gridLayout = new QGridLayout(SettingsWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(SettingsWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2->setOpenExternalLinks(true);

        gridLayout->addWidget(label_2, 20, 0, 1, 2);

        label = new QLabel(SettingsWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 6, 0, 1, 2);

        label_6 = new QLabel(SettingsWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 12, 0, 1, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 2, 2, 1, 1);

        devicesLabel = new QLabel(SettingsWidget);
        devicesLabel->setObjectName(QStringLiteral("devicesLabel"));

        gridLayout_5->addWidget(devicesLabel, 0, 0, 1, 3);

        label_5 = new QLabel(SettingsWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 2, 0, 1, 1);

        layoutBox = new QComboBox(SettingsWidget);
        layoutBox->setObjectName(QStringLiteral("layoutBox"));

        gridLayout_5->addWidget(layoutBox, 2, 1, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_10, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_5, 4, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(SettingsWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(SettingsWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFlat(false);

        horizontalLayout_2->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_2, 21, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 19, 0, 1, 2);

        verticalSpacer_8 = new QSpacerItem(0, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_8, 16, 0, 1, 1);

        loginItemBox = new QCheckBox(SettingsWidget);
        loginItemBox->setObjectName(QStringLiteral("loginItemBox"));

        gridLayout->addWidget(loginItemBox, 16, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(0, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_6, 15, 0, 1, 1);

        autoFWBox = new QCheckBox(SettingsWidget);
        autoFWBox->setObjectName(QStringLiteral("autoFWBox"));
        autoFWBox->setChecked(true);

        gridLayout->addWidget(autoFWBox, 15, 1, 1, 1);

        line_2 = new QFrame(SettingsWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 13, 0, 1, 2);

        label_8 = new QLabel(SettingsWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font1;
        font1.setItalic(true);
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 8, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        shiftLabel = new QLabel(SettingsWidget);
        shiftLabel->setObjectName(QStringLiteral("shiftLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shiftLabel->sizePolicy().hasHeightForWidth());
        shiftLabel->setSizePolicy(sizePolicy);
        shiftLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(shiftLabel, 0, 3, 1, 1);

        capsLabel = new QLabel(SettingsWidget);
        capsLabel->setObjectName(QStringLiteral("capsLabel"));
        capsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(capsLabel, 0, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(0, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 0, 0, 1, 1);

        capsBox = new QComboBox(SettingsWidget);
        capsBox->setObjectName(QStringLiteral("capsBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(capsBox->sizePolicy().hasHeightForWidth());
        capsBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(capsBox, 0, 2, 1, 1);

        ctrlLabel = new QLabel(SettingsWidget);
        ctrlLabel->setObjectName(QStringLiteral("ctrlLabel"));
        ctrlLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(ctrlLabel, 1, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 1, 7, 1, 1);

        ctrlBox = new QComboBox(SettingsWidget);
        ctrlBox->setObjectName(QStringLiteral("ctrlBox"));

        gridLayout_3->addWidget(ctrlBox, 1, 2, 1, 1);

        shiftBox = new QComboBox(SettingsWidget);
        shiftBox->setObjectName(QStringLiteral("shiftBox"));
        sizePolicy1.setHeightForWidth(shiftBox->sizePolicy().hasHeightForWidth());
        shiftBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(shiftBox, 0, 4, 1, 1);

        winLabel = new QLabel(SettingsWidget);
        winLabel->setObjectName(QStringLiteral("winLabel"));
        sizePolicy.setHeightForWidth(winLabel->sizePolicy().hasHeightForWidth());
        winLabel->setSizePolicy(sizePolicy);
        winLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(winLabel, 1, 3, 1, 1);

        winBox = new QComboBox(SettingsWidget);
        winBox->setObjectName(QStringLiteral("winBox"));
        sizePolicy1.setHeightForWidth(winBox->sizePolicy().hasHeightForWidth());
        winBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(winBox, 1, 4, 1, 1);

        altBox = new QComboBox(SettingsWidget);
        altBox->setObjectName(QStringLiteral("altBox"));
        sizePolicy1.setHeightForWidth(altBox->sizePolicy().hasHeightForWidth());
        altBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(altBox, 1, 6, 1, 1);

        altLabel = new QLabel(SettingsWidget);
        altLabel->setObjectName(QStringLiteral("altLabel"));
        sizePolicy.setHeightForWidth(altLabel->sizePolicy().hasHeightForWidth());
        altLabel->setSizePolicy(sizePolicy);
        altLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(altLabel, 1, 5, 1, 1);


        gridLayout->addLayout(gridLayout_3, 10, 1, 1, 1);

        line = new QFrame(SettingsWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(0, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 11, 1, 1, 1);

        line_3 = new QFrame(SettingsWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy2);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 7, 0, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 9, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        versionLabel = new QLabel(SettingsWidget);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setFont(font);

        gridLayout->addWidget(versionLabel, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        extraButton = new QPushButton(SettingsWidget);
        extraButton->setObjectName(QStringLiteral("extraButton"));

        horizontalLayout->addWidget(extraButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 17, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(0, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_7, 17, 0, 1, 1);

        QWidget::setTabOrder(layoutBox, capsBox);
        QWidget::setTabOrder(capsBox, shiftBox);
        QWidget::setTabOrder(shiftBox, ctrlBox);
        QWidget::setTabOrder(ctrlBox, winBox);
        QWidget::setTabOrder(winBox, altBox);
        QWidget::setTabOrder(altBox, autoFWBox);
        QWidget::setTabOrder(autoFWBox, loginItemBox);
        QWidget::setTabOrder(loginItemBox, extraButton);
        QWidget::setTabOrder(extraButton, pushButton);

        retranslateUi(SettingsWidget);

        QMetaObject::connectSlotsByName(SettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsWidget)
    {
        SettingsWidget->setWindowTitle(QApplication::translate("SettingsWidget", "Form", 0));
        label_2->setText(QApplication::translate("SettingsWidget", "\302\251 2014-2016 <a href=\"https://github.com/ccMSC/\" style=\"text-decoration:none;\">ccMSC</a>.<br/>\302\251 2017 <a href=\"https://github.com/ckb-next/ckb-next/graphs/contributors\" style=\"text-decoration:none;\">The ckb-next development team</a>.", 0));
        label->setText(QApplication::translate("SettingsWidget", "Modifier keys", 0));
        label_6->setText(QApplication::translate("SettingsWidget", "Application", 0));
        devicesLabel->setText(QApplication::translate("SettingsWidget", "No devices connected", 0));
        label_5->setText(QApplication::translate("SettingsWidget", "Keyboard layout:", 0));
        label_3->setText(QApplication::translate("SettingsWidget", "<a href=\"https://github.com/ckb-next/ckb-next\" style=\"text-decoration:none;\">https://github.com/ckb-next/ckb-next</a>", 0));
        pushButton->setText(QApplication::translate("SettingsWidget", "Quit", 0));
#ifndef QT_NO_TOOLTIP
        loginItemBox->setToolTip(QApplication::translate("SettingsWidget", "ckb-next will be started when you log in to your computer.", 0));
#endif // QT_NO_TOOLTIP
        loginItemBox->setText(QApplication::translate("SettingsWidget", "Start ckb-next at login", 0));
#ifndef QT_NO_TOOLTIP
        autoFWBox->setToolTip(QApplication::translate("SettingsWidget", "You will be notified when new firmware versions are available. You'll have the option to install them immediately or wait until later.", 0));
#endif // QT_NO_TOOLTIP
        autoFWBox->setText(QApplication::translate("SettingsWidget", "Check for new firmware automatically", 0));
        label_8->setText(QApplication::translate("SettingsWidget", "These will override the keyboard profile. See \"Binding\" tab for more settings.", 0));
        shiftLabel->setText(QApplication::translate("SettingsWidget", "Shift:", 0));
        capsLabel->setText(QApplication::translate("SettingsWidget", "Caps Lock:", 0));
        ctrlLabel->setText(QApplication::translate("SettingsWidget", "Ctrl:", 0));
        winLabel->setText(QApplication::translate("SettingsWidget", "Windows:", 0));
        altLabel->setText(QApplication::translate("SettingsWidget", "Alt:", 0));
        versionLabel->setText(QApplication::translate("SettingsWidget", "ckb-next", 0));
        extraButton->setText(QApplication::translate("SettingsWidget", "More settings", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsWidget: public Ui_SettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGET_H
