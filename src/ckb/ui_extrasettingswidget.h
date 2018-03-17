/********************************************************************************
** Form generated from reading UI file 'extrasettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRASETTINGSWIDGET_H
#define UI_EXTRASETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExtraSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *fpsWarnLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QSpinBox *fpsBox;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *sAccelBox;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QLabel *animPathLabel;
    QLabel *animCountLabel;
    QPushButton *animScanButton;
    QCheckBox *brightnessBox;
    QCheckBox *trayBox;
    QLabel *label;
    QFrame *line;
    QLabel *label_5;
    QFrame *line_3;
    QLabel *label_2;
    QCheckBox *ditherBox;
    QCheckBox *delayBox;
    QLabel *osxLabel;
    QFrame *osxLine;
    QCheckBox *mAccelBox;
    QWidget *sSpeedWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QSpinBox *sSpeedBox;
    QLabel *label_11;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExtraSettingsWidget)
    {
        if (ExtraSettingsWidget->objectName().isEmpty())
            ExtraSettingsWidget->setObjectName(QStringLiteral("ExtraSettingsWidget"));
        ExtraSettingsWidget->resize(650, 515);
        gridLayout = new QGridLayout(ExtraSettingsWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 12, 2, 1, 1);

        verticalSpacer = new QSpacerItem(0, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(0, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 19, 5, 1, 1);

        fpsWarnLabel = new QLabel(ExtraSettingsWidget);
        fpsWarnLabel->setObjectName(QStringLiteral("fpsWarnLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fpsWarnLabel->sizePolicy().hasHeightForWidth());
        fpsWarnLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(fpsWarnLabel, 12, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 12, 4, 1, 1);

        label_3 = new QLabel(ExtraSettingsWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 12, 1, 1, 1);

        fpsBox = new QSpinBox(ExtraSettingsWidget);
        fpsBox->setObjectName(QStringLiteral("fpsBox"));
        fpsBox->setMinimum(5);
        fpsBox->setMaximum(60);
        fpsBox->setValue(30);

        gridLayout->addWidget(fpsBox, 12, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(0, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 7, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(0, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_9, 12, 0, 1, 1);

        label_6 = new QLabel(ExtraSettingsWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 7, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_6, 8, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 4, 1, 1, 1);

        sAccelBox = new QCheckBox(ExtraSettingsWidget);
        sAccelBox->setObjectName(QStringLiteral("sAccelBox"));

        gridLayout->addWidget(sAccelBox, 18, 1, 1, 4);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_7, 14, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(0, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_8, 13, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(0, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_10, 17, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(0, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_11, 18, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 12, 6, 1, 1);

        line_2 = new QFrame(ExtraSettingsWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 10, 0, 1, 7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        animPathLabel = new QLabel(ExtraSettingsWidget);
        animPathLabel->setObjectName(QStringLiteral("animPathLabel"));

        horizontalLayout->addWidget(animPathLabel);

        animCountLabel = new QLabel(ExtraSettingsWidget);
        animCountLabel->setObjectName(QStringLiteral("animCountLabel"));
        sizePolicy.setHeightForWidth(animCountLabel->sizePolicy().hasHeightForWidth());
        animCountLabel->setSizePolicy(sizePolicy);
        animCountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(animCountLabel);

        animScanButton = new QPushButton(ExtraSettingsWidget);
        animScanButton->setObjectName(QStringLiteral("animScanButton"));

        horizontalLayout->addWidget(animScanButton);


        gridLayout->addLayout(horizontalLayout, 7, 3, 1, 4);

        brightnessBox = new QCheckBox(ExtraSettingsWidget);
        brightnessBox->setObjectName(QStringLiteral("brightnessBox"));

        gridLayout->addWidget(brightnessBox, 3, 1, 1, 6);

        trayBox = new QCheckBox(ExtraSettingsWidget);
        trayBox->setObjectName(QStringLiteral("trayBox"));

        gridLayout->addWidget(trayBox, 2, 1, 1, 6);

        label = new QLabel(ExtraSettingsWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 7);

        line = new QFrame(ExtraSettingsWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 7);

        label_5 = new QLabel(ExtraSettingsWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 5, 0, 1, 7);

        line_3 = new QFrame(ExtraSettingsWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 6, 0, 1, 7);

        label_2 = new QLabel(ExtraSettingsWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 9, 0, 1, 7);

        ditherBox = new QCheckBox(ExtraSettingsWidget);
        ditherBox->setObjectName(QStringLiteral("ditherBox"));

        gridLayout->addWidget(ditherBox, 13, 1, 1, 6);

        delayBox = new QCheckBox(ExtraSettingsWidget);
        delayBox->setObjectName(QStringLiteral("delayBox"));

        gridLayout->addWidget(delayBox, 14, 1, 1, 6);

        osxLabel = new QLabel(ExtraSettingsWidget);
        osxLabel->setObjectName(QStringLiteral("osxLabel"));
        osxLabel->setFont(font);

        gridLayout->addWidget(osxLabel, 15, 0, 1, 7);

        osxLine = new QFrame(ExtraSettingsWidget);
        osxLine->setObjectName(QStringLiteral("osxLine"));
        osxLine->setFrameShape(QFrame::HLine);
        osxLine->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(osxLine, 16, 0, 1, 7);

        mAccelBox = new QCheckBox(ExtraSettingsWidget);
        mAccelBox->setObjectName(QStringLiteral("mAccelBox"));

        gridLayout->addWidget(mAccelBox, 17, 1, 1, 6);

        sSpeedWidget = new QWidget(ExtraSettingsWidget);
        sSpeedWidget->setObjectName(QStringLiteral("sSpeedWidget"));
        sizePolicy.setHeightForWidth(sSpeedWidget->sizePolicy().hasHeightForWidth());
        sSpeedWidget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(sSpeedWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(sSpeedWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        sSpeedBox = new QSpinBox(sSpeedWidget);
        sSpeedBox->setObjectName(QStringLiteral("sSpeedBox"));
        sSpeedBox->setMinimum(1);
        sSpeedBox->setMaximum(10);
        sSpeedBox->setValue(3);

        horizontalLayout_2->addWidget(sSpeedBox);

        label_11 = new QLabel(sSpeedWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_11);


        gridLayout->addWidget(sSpeedWidget, 18, 5, 1, 2);

        buttonBox = new QDialogButtonBox(ExtraSettingsWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 20, 0, 1, 7);

        QWidget::setTabOrder(trayBox, brightnessBox);
        QWidget::setTabOrder(brightnessBox, animScanButton);
        QWidget::setTabOrder(animScanButton, fpsBox);
        QWidget::setTabOrder(fpsBox, ditherBox);
        QWidget::setTabOrder(ditherBox, delayBox);
        QWidget::setTabOrder(delayBox, mAccelBox);
        QWidget::setTabOrder(mAccelBox, sAccelBox);
        QWidget::setTabOrder(sAccelBox, sSpeedBox);

        retranslateUi(ExtraSettingsWidget);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExtraSettingsWidget, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExtraSettingsWidget, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExtraSettingsWidget);
    } // setupUi

    void retranslateUi(QDialog *ExtraSettingsWidget)
    {
        ExtraSettingsWidget->setWindowTitle(QApplication::translate("ExtraSettingsWidget", "Application Settings", 0));
        fpsWarnLabel->setText(QApplication::translate("ExtraSettingsWidget", "Warning: high frame rates may cause stability issues", 0));
        label_3->setText(QApplication::translate("ExtraSettingsWidget", "Frame rate (FPS):", 0));
        label_6->setText(QApplication::translate("ExtraSettingsWidget", "Location:", 0));
#ifndef QT_NO_TOOLTIP
        sAccelBox->setToolTip(QApplication::translate("ExtraSettingsWidget", "Try this if you're having problems with the scroll wheel.", 0));
#endif // QT_NO_TOOLTIP
        sAccelBox->setText(QApplication::translate("ExtraSettingsWidget", "Disable scroll acceleration", 0));
        animPathLabel->setText(QApplication::translate("ExtraSettingsWidget", "/path/to/animations", 0));
        animCountLabel->setText(QApplication::translate("ExtraSettingsWidget", "0 animations found", 0));
        animScanButton->setText(QApplication::translate("ExtraSettingsWidget", "Re-scan", 0));
#ifndef QT_NO_TOOLTIP
        brightnessBox->setToolTip(QApplication::translate("ExtraSettingsWidget", "By default, the same brightness level will be applied to all profiles and all devices. Enable this to store it with the lighting mode instead.", 0));
#endif // QT_NO_TOOLTIP
        brightnessBox->setText(QApplication::translate("ExtraSettingsWidget", "Set brightness per-mode", 0));
#ifndef QT_NO_TOOLTIP
        trayBox->setToolTip(QApplication::translate("ExtraSettingsWidget", "The tray icon will not be displayed. The application will still run in the background; re-launch the app to see the GUI again.", 0));
#endif // QT_NO_TOOLTIP
        trayBox->setText(QApplication::translate("ExtraSettingsWidget", "Hide tray icon", 0));
        label->setText(QApplication::translate("ExtraSettingsWidget", "Behavior", 0));
        label_5->setText(QApplication::translate("ExtraSettingsWidget", "Animation scripts", 0));
        label_2->setText(QApplication::translate("ExtraSettingsWidget", "Hardware", 0));
#ifndef QT_NO_TOOLTIP
        ditherBox->setToolTip(QApplication::translate("ExtraSettingsWidget", "May improve appearance on some keyboards.", 0));
#endif // QT_NO_TOOLTIP
        ditherBox->setText(QApplication::translate("ExtraSettingsWidget", "Use spatial dithering to simulate extra color resolution", 0));
#ifndef QT_NO_TOOLTIP
        delayBox->setToolTip(QApplication::translate("ExtraSettingsWidget", "When using macros with strings longer than 25 chars, some OS may lose characters (e.g. Mint 17.2). Select to prevent that bug.", 0));
#endif // QT_NO_TOOLTIP
        delayBox->setText(QApplication::translate("ExtraSettingsWidget", "Use delay for very long macros", 0));
        osxLabel->setText(QApplication::translate("ExtraSettingsWidget", "OS X tweaks", 0));
#ifndef QT_NO_TOOLTIP
        mAccelBox->setToolTip(QApplication::translate("ExtraSettingsWidget", "Try this if you're having problems with mouse movement.", 0));
#endif // QT_NO_TOOLTIP
        mAccelBox->setText(QApplication::translate("ExtraSettingsWidget", "Disable mouse acceleration", 0));
        label_10->setText(QApplication::translate("ExtraSettingsWidget", "Scroll", 0));
        label_11->setText(QApplication::translate("ExtraSettingsWidget", "line(s) at a time", 0));
    } // retranslateUi

};

namespace Ui {
    class ExtraSettingsWidget: public Ui_ExtraSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRASETTINGSWIDGET_H
