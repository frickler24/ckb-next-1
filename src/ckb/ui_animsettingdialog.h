/********************************************************************************
** Form generated from reading UI file 'animsettingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMSETTINGDIALOG_H
#define UI_ANIMSETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnimSettingDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *settingTab;
    QGridLayout *settingsGrid;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *animName;
    QWidget *timeTab;
    QGridLayout *timeGrid;
    QSpacerItem *horizontalSpacer_5;
    QLabel *kpRepeatLabel;
    QLabel *repeatLabel;
    QDoubleSpinBox *repeatBox;
    QLabel *repeatLabel_2;
    QFrame *line;
    QLabel *kpRepeatLabel_2;
    QLabel *label_4;
    QLabel *label_8;
    QDoubleSpinBox *kpDelayBox;
    QLabel *label_13;
    QLabel *label_12;
    QDoubleSpinBox *delayBox;
    QCheckBox *kpModeStopBox;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *kpReleaseBox;
    QLabel *label_6;
    QDoubleSpinBox *kpRepeatBox;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_6;
    QWidget *infoTab;
    QGridLayout *gridLayout_2;
    QLabel *sNameLabel;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *sAuthorLabel;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *sYearLabel;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *sVerLabel;
    QLabel *sLicenseLabel;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *sDescLabel;

    void setupUi(QDialog *AnimSettingDialog)
    {
        if (AnimSettingDialog->objectName().isEmpty())
            AnimSettingDialog->setObjectName(QStringLiteral("AnimSettingDialog"));
        AnimSettingDialog->resize(480, 457);
        AnimSettingDialog->setMinimumSize(QSize(480, 0));
        AnimSettingDialog->setFocusPolicy(Qt::ClickFocus);
        gridLayout = new QGridLayout(AnimSettingDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(AnimSettingDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        tabWidget = new QTabWidget(AnimSettingDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        settingTab = new QWidget();
        settingTab->setObjectName(QStringLiteral("settingTab"));
        settingsGrid = new QGridLayout(settingTab);
        settingsGrid->setSpacing(12);
        settingsGrid->setObjectName(QStringLiteral("settingsGrid"));
        settingsGrid->setContentsMargins(12, 12, 12, 12);
        label_2 = new QLabel(settingTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        settingsGrid->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(5, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        settingsGrid->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        animName = new QLineEdit(settingTab);
        animName->setObjectName(QStringLiteral("animName"));

        settingsGrid->addWidget(animName, 0, 3, 1, 3);

        tabWidget->addTab(settingTab, QString());
        timeTab = new QWidget();
        timeTab->setObjectName(QStringLiteral("timeTab"));
        timeGrid = new QGridLayout(timeTab);
        timeGrid->setSpacing(12);
        timeGrid->setObjectName(QStringLiteral("timeGrid"));
        timeGrid->setContentsMargins(12, 12, 12, 12);
        horizontalSpacer_5 = new QSpacerItem(15, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        timeGrid->addItem(horizontalSpacer_5, 3, 2, 1, 1);

        kpRepeatLabel = new QLabel(timeTab);
        kpRepeatLabel->setObjectName(QStringLiteral("kpRepeatLabel"));

        timeGrid->addWidget(kpRepeatLabel, 11, 1, 1, 1);

        repeatLabel = new QLabel(timeTab);
        repeatLabel->setObjectName(QStringLiteral("repeatLabel"));

        timeGrid->addWidget(repeatLabel, 3, 1, 1, 1);

        repeatBox = new QDoubleSpinBox(timeTab);
        repeatBox->setObjectName(QStringLiteral("repeatBox"));
        repeatBox->setDecimals(1);
        repeatBox->setMinimum(0.1);
        repeatBox->setMaximum(86400);

        timeGrid->addWidget(repeatBox, 3, 3, 1, 1);

        repeatLabel_2 = new QLabel(timeTab);
        repeatLabel_2->setObjectName(QStringLiteral("repeatLabel_2"));

        timeGrid->addWidget(repeatLabel_2, 3, 4, 1, 1);

        line = new QFrame(timeTab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        timeGrid->addWidget(line, 1, 0, 1, 6);

        kpRepeatLabel_2 = new QLabel(timeTab);
        kpRepeatLabel_2->setObjectName(QStringLiteral("kpRepeatLabel_2"));

        timeGrid->addWidget(kpRepeatLabel_2, 11, 4, 1, 1);

        label_4 = new QLabel(timeTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        timeGrid->addWidget(label_4, 0, 0, 1, 6);

        label_8 = new QLabel(timeTab);
        label_8->setObjectName(QStringLiteral("label_8"));

        timeGrid->addWidget(label_8, 2, 4, 1, 1);

        kpDelayBox = new QDoubleSpinBox(timeTab);
        kpDelayBox->setObjectName(QStringLiteral("kpDelayBox"));
        kpDelayBox->setDecimals(1);
        kpDelayBox->setMaximum(86400);

        timeGrid->addWidget(kpDelayBox, 10, 3, 1, 1);

        label_13 = new QLabel(timeTab);
        label_13->setObjectName(QStringLiteral("label_13"));

        timeGrid->addWidget(label_13, 10, 4, 1, 1);

        label_12 = new QLabel(timeTab);
        label_12->setObjectName(QStringLiteral("label_12"));

        timeGrid->addWidget(label_12, 10, 1, 1, 1);

        delayBox = new QDoubleSpinBox(timeTab);
        delayBox->setObjectName(QStringLiteral("delayBox"));
        delayBox->setDecimals(1);
        delayBox->setMaximum(86400);

        timeGrid->addWidget(delayBox, 2, 3, 1, 1);

        kpModeStopBox = new QCheckBox(timeTab);
        kpModeStopBox->setObjectName(QStringLiteral("kpModeStopBox"));

        timeGrid->addWidget(kpModeStopBox, 5, 1, 1, 3);

        label_10 = new QLabel(timeTab);
        label_10->setObjectName(QStringLiteral("label_10"));

        timeGrid->addWidget(label_10, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        timeGrid->addItem(verticalSpacer_3, 7, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        timeGrid->addItem(horizontalSpacer_4, 2, 5, 1, 1);

        kpReleaseBox = new QCheckBox(timeTab);
        kpReleaseBox->setObjectName(QStringLiteral("kpReleaseBox"));

        timeGrid->addWidget(kpReleaseBox, 14, 1, 1, 3);

        label_6 = new QLabel(timeTab);
        label_6->setObjectName(QStringLiteral("label_6"));

        timeGrid->addWidget(label_6, 8, 0, 1, 6);

        kpRepeatBox = new QDoubleSpinBox(timeTab);
        kpRepeatBox->setObjectName(QStringLiteral("kpRepeatBox"));
        kpRepeatBox->setDecimals(1);
        kpRepeatBox->setMinimum(0.1);
        kpRepeatBox->setMaximum(86400);

        timeGrid->addWidget(kpRepeatBox, 11, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        timeGrid->addItem(verticalSpacer_2, 15, 1, 1, 1);

        line_2 = new QFrame(timeTab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        timeGrid->addWidget(line_2, 9, 0, 1, 6);

        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        timeGrid->addItem(horizontalSpacer_6, 12, 2, 1, 1);

        tabWidget->addTab(timeTab, QString());
        infoTab = new QWidget();
        infoTab->setObjectName(QStringLiteral("infoTab"));
        gridLayout_2 = new QGridLayout(infoTab);
        gridLayout_2->setSpacing(12);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(12, 12, 12, 12);
        sNameLabel = new QLabel(infoTab);
        sNameLabel->setObjectName(QStringLiteral("sNameLabel"));

        gridLayout_2->addWidget(sNameLabel, 0, 2, 1, 1);

        label_7 = new QLabel(infoTab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        label_11 = new QLabel(infoTab);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 5, 0, 1, 1);

        sAuthorLabel = new QLabel(infoTab);
        sAuthorLabel->setObjectName(QStringLiteral("sAuthorLabel"));

        gridLayout_2->addWidget(sAuthorLabel, 2, 2, 1, 1);

        label_9 = new QLabel(infoTab);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 4, 0, 1, 1);

        label_5 = new QLabel(infoTab);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        sYearLabel = new QLabel(infoTab);
        sYearLabel->setObjectName(QStringLiteral("sYearLabel"));

        gridLayout_2->addWidget(sYearLabel, 3, 2, 1, 1);

        label_3 = new QLabel(infoTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        sVerLabel = new QLabel(infoTab);
        sVerLabel->setObjectName(QStringLiteral("sVerLabel"));

        gridLayout_2->addWidget(sVerLabel, 1, 2, 1, 1);

        sLicenseLabel = new QLabel(infoTab);
        sLicenseLabel->setObjectName(QStringLiteral("sLicenseLabel"));

        gridLayout_2->addWidget(sLicenseLabel, 4, 2, 1, 1);

        label = new QLabel(infoTab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 6, 0, 1, 1);

        sDescLabel = new QLabel(infoTab);
        sDescLabel->setObjectName(QStringLiteral("sDescLabel"));
        sDescLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(sDescLabel, 5, 2, 2, 2);

        tabWidget->addTab(infoTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(tabWidget, animName);
        QWidget::setTabOrder(animName, delayBox);
        QWidget::setTabOrder(delayBox, repeatBox);
        QWidget::setTabOrder(repeatBox, kpModeStopBox);
        QWidget::setTabOrder(kpModeStopBox, kpDelayBox);
        QWidget::setTabOrder(kpDelayBox, kpRepeatBox);
        QWidget::setTabOrder(kpRepeatBox, kpReleaseBox);

        retranslateUi(AnimSettingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AnimSettingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AnimSettingDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AnimSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *AnimSettingDialog)
    {
        AnimSettingDialog->setWindowTitle(QApplication::translate("AnimSettingDialog", "Dialog", 0));
        label_2->setText(QApplication::translate("AnimSettingDialog", "Name:", 0));
        tabWidget->setTabText(tabWidget->indexOf(settingTab), QApplication::translate("AnimSettingDialog", "Settings", 0));
        kpRepeatLabel->setText(QApplication::translate("AnimSettingDialog", "Repeat every:", 0));
        repeatLabel->setText(QApplication::translate("AnimSettingDialog", "Repeat every:", 0));
        repeatLabel_2->setText(QApplication::translate("AnimSettingDialog", "seconds", 0));
        kpRepeatLabel_2->setText(QApplication::translate("AnimSettingDialog", "seconds", 0));
        label_4->setText(QApplication::translate("AnimSettingDialog", "<b>On mode start</b>", 0));
        label_8->setText(QApplication::translate("AnimSettingDialog", "seconds", 0));
        label_13->setText(QApplication::translate("AnimSettingDialog", "seconds", 0));
        label_12->setText(QApplication::translate("AnimSettingDialog", "Start delay:", 0));
        kpModeStopBox->setText(QApplication::translate("AnimSettingDialog", "Stop on key press", 0));
        label_10->setText(QApplication::translate("AnimSettingDialog", "Start delay:", 0));
        kpReleaseBox->setText(QApplication::translate("AnimSettingDialog", "Stop on key release", 0));
        label_6->setText(QApplication::translate("AnimSettingDialog", "<b>On key press</b>", 0));
        tabWidget->setTabText(tabWidget->indexOf(timeTab), QApplication::translate("AnimSettingDialog", "Timing", 0));
        sNameLabel->setText(QApplication::translate("AnimSettingDialog", "Name", 0));
        label_7->setText(QApplication::translate("AnimSettingDialog", "Year:", 0));
        label_11->setText(QApplication::translate("AnimSettingDialog", "Description:", 0));
        sAuthorLabel->setText(QApplication::translate("AnimSettingDialog", "Author", 0));
        label_9->setText(QApplication::translate("AnimSettingDialog", "License:", 0));
        label_5->setText(QApplication::translate("AnimSettingDialog", "Version:", 0));
        sYearLabel->setText(QApplication::translate("AnimSettingDialog", "Year", 0));
        label_3->setText(QApplication::translate("AnimSettingDialog", "Author:", 0));
        sVerLabel->setText(QApplication::translate("AnimSettingDialog", "Version", 0));
        sLicenseLabel->setText(QApplication::translate("AnimSettingDialog", "License", 0));
        label->setText(QApplication::translate("AnimSettingDialog", "Script name:", 0));
        sDescLabel->setText(QApplication::translate("AnimSettingDialog", "Description", 0));
        tabWidget->setTabText(tabWidget->indexOf(infoTab), QApplication::translate("AnimSettingDialog", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class AnimSettingDialog: public Ui_AnimSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMSETTINGDIALOG_H
