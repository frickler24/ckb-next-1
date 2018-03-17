/********************************************************************************
** Form generated from reading UI file 'rebindwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REBINDWIDGET_H
#define UI_REBINDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RebindWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *keyTab;
    QGridLayout *gridLayout_2;
    QComboBox *numBox;
    QComboBox *typingBox;
    QComboBox *fnBox;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *typingButton;
    QComboBox *modBox;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *mediaButton;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *modButton;
    QRadioButton *fnButton;
    QComboBox *mediaBox;
    QRadioButton *numButton;
    QSpacerItem *horizontalSpacer_17;
    QWidget *mouseTab;
    QGridLayout *gridLayout;
    QRadioButton *dpiButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_20;
    QComboBox *mb2Box;
    QComboBox *dpiBox;
    QSpinBox *dpiCustYBox;
    QComboBox *mbBox;
    QComboBox *wheelBox;
    QRadioButton *mbButton;
    QSpinBox *dpiCustXBox;
    QLabel *dpiWarning;
    QRadioButton *wheelButton;
    QSpacerItem *horizontalSpacer_22;
    QRadioButton *mb2Button;
    QLabel *dpiCustLabel;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_21;
    QWidget *animTab;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_11;
    QComboBox *animBox;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *horizontalSpacer_25;
    QCheckBox *animKrBox;
    QCheckBox *animOnceBox;
    QSpacerItem *horizontalSpacer_26;
    QRadioButton *animButton;
    QSpacerItem *horizontalSpacer_23;
    QWidget *actionTab;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *modeButton;
    QCheckBox *modeWrapBox;
    QCheckBox *lightWrapBox;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QRadioButton *lockButton;
    QSpacerItem *verticalSpacer_5;
    QComboBox *lightBox;
    QComboBox *lockBox;
    QRadioButton *lightButton;
    QComboBox *modeBox;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QWidget *programTab;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QCheckBox *programKpButton;
    QLineEdit *programKpBox;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *programKrBox;
    QCheckBox *programKrButton;
    QSpacerItem *horizontalSpacer_12;
    QWidget *programKpExtra;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *programKpSIBox;
    QComboBox *programKpModeBox;
    QSpacerItem *horizontalSpacer_15;
    QWidget *programKrExtra;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *programKrSIBox;
    QComboBox *programKrModeBox;
    QSpacerItem *horizontalSpacer_16;
    QLabel *progTipLabel;
    QWidget *macroTab;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_2;
    QPlainTextEdit *pteMacroBox;
    QPlainTextEdit *pteMacroComment;
    QPlainTextEdit *pteMacroText;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_10;
    QPushButton *btnStopMacro;
    QPushButton *btnClearMacro;
    QPushButton *btnStartMacro;
    QLabel *label;
    QLabel *lbl_macro;
    QWidget *layoutWidget2;
    QHBoxLayout *delayButtons;
    QRadioButton *rb_delay_no;
    QRadioButton *rb_delay_default;
    QRadioButton *rb_delay_asTyped;
    QLabel *txtBuffer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *unbindButton;
    QPushButton *resetButton;
    QPushButton *cancelButton;
    QPushButton *applyButton;

    void setupUi(QWidget *RebindWidget)
    {
        if (RebindWidget->objectName().isEmpty())
            RebindWidget->setObjectName(QStringLiteral("RebindWidget"));
        RebindWidget->resize(687, 342);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RebindWidget->sizePolicy().hasHeightForWidth());
        RebindWidget->setSizePolicy(sizePolicy);
        RebindWidget->setStyleSheet(QStringLiteral("font-size: 12px ;"));
        verticalLayout = new QVBoxLayout(RebindWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(RebindWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        keyTab = new QWidget();
        keyTab->setObjectName(QStringLiteral("keyTab"));
        sizePolicy.setHeightForWidth(keyTab->sizePolicy().hasHeightForWidth());
        keyTab->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(keyTab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, -1, 0);
        numBox = new QComboBox(keyTab);
        numBox->setObjectName(QStringLiteral("numBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(numBox->sizePolicy().hasHeightForWidth());
        numBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(numBox, 6, 4, 1, 1);

        typingBox = new QComboBox(keyTab);
        typingBox->setObjectName(QStringLiteral("typingBox"));
        sizePolicy1.setHeightForWidth(typingBox->sizePolicy().hasHeightForWidth());
        typingBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(typingBox, 1, 1, 1, 1);

        fnBox = new QComboBox(keyTab);
        fnBox->setObjectName(QStringLiteral("fnBox"));
        sizePolicy1.setHeightForWidth(fnBox->sizePolicy().hasHeightForWidth());
        fnBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(fnBox, 6, 1, 1, 1);

        verticalSpacer_10 = new QSpacerItem(0, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_10, 9, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 15, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        typingButton = new QRadioButton(keyTab);
        typingButton->setObjectName(QStringLiteral("typingButton"));
        typingButton->setAutoExclusive(false);

        gridLayout_2->addWidget(typingButton, 0, 0, 1, 2);

        modBox = new QComboBox(keyTab);
        modBox->setObjectName(QStringLiteral("modBox"));
        sizePolicy1.setHeightForWidth(modBox->sizePolicy().hasHeightForWidth());
        modBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(modBox, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        mediaButton = new QRadioButton(keyTab);
        mediaButton->setObjectName(QStringLiteral("mediaButton"));
        mediaButton->setAutoExclusive(false);

        gridLayout_2->addWidget(mediaButton, 10, 0, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 2, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 1, 5, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        modButton = new QRadioButton(keyTab);
        modButton->setObjectName(QStringLiteral("modButton"));

        gridLayout_2->addWidget(modButton, 0, 3, 1, 2);

        fnButton = new QRadioButton(keyTab);
        fnButton->setObjectName(QStringLiteral("fnButton"));
        fnButton->setAutoExclusive(false);

        gridLayout_2->addWidget(fnButton, 5, 0, 1, 2);

        mediaBox = new QComboBox(keyTab);
        mediaBox->setObjectName(QStringLiteral("mediaBox"));
        sizePolicy1.setHeightForWidth(mediaBox->sizePolicy().hasHeightForWidth());
        mediaBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mediaBox, 11, 1, 1, 1);

        numButton = new QRadioButton(keyTab);
        numButton->setObjectName(QStringLiteral("numButton"));
        numButton->setAutoExclusive(false);

        gridLayout_2->addWidget(numButton, 5, 3, 1, 2);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_17, 1, 7, 1, 1);

        tabWidget->addTab(keyTab, QString());
        mouseTab = new QWidget();
        mouseTab->setObjectName(QStringLiteral("mouseTab"));
        gridLayout = new QGridLayout(mouseTab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        dpiButton = new QRadioButton(mouseTab);
        dpiButton->setObjectName(QStringLiteral("dpiButton"));
        dpiButton->setAutoExclusive(false);

        gridLayout->addWidget(dpiButton, 3, 3, 1, 5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_8, 2, 1, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_18, 1, 0, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_20, 1, 3, 1, 1);

        mb2Box = new QComboBox(mouseTab);
        mb2Box->setObjectName(QStringLiteral("mb2Box"));
        sizePolicy1.setHeightForWidth(mb2Box->sizePolicy().hasHeightForWidth());
        mb2Box->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mb2Box, 1, 4, 1, 4);

        dpiBox = new QComboBox(mouseTab);
        dpiBox->setObjectName(QStringLiteral("dpiBox"));

        gridLayout->addWidget(dpiBox, 4, 4, 1, 1);

        dpiCustYBox = new QSpinBox(mouseTab);
        dpiCustYBox->setObjectName(QStringLiteral("dpiCustYBox"));
        dpiCustYBox->setMinimum(400);
        dpiCustYBox->setMaximum(8500);
        dpiCustYBox->setSingleStep(50);

        gridLayout->addWidget(dpiCustYBox, 4, 7, 1, 1);

        mbBox = new QComboBox(mouseTab);
        mbBox->setObjectName(QStringLiteral("mbBox"));
        sizePolicy1.setHeightForWidth(mbBox->sizePolicy().hasHeightForWidth());
        mbBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mbBox, 1, 1, 1, 1);

        wheelBox = new QComboBox(mouseTab);
        wheelBox->setObjectName(QStringLiteral("wheelBox"));

        gridLayout->addWidget(wheelBox, 4, 1, 1, 1);

        mbButton = new QRadioButton(mouseTab);
        mbButton->setObjectName(QStringLiteral("mbButton"));
        mbButton->setAutoExclusive(false);

        gridLayout->addWidget(mbButton, 0, 0, 1, 2);

        dpiCustXBox = new QSpinBox(mouseTab);
        dpiCustXBox->setObjectName(QStringLiteral("dpiCustXBox"));
        dpiCustXBox->setMinimum(400);
        dpiCustXBox->setMaximum(8500);
        dpiCustXBox->setSingleStep(50);

        gridLayout->addWidget(dpiCustXBox, 4, 5, 1, 1);

        dpiWarning = new QLabel(mouseTab);
        dpiWarning->setObjectName(QStringLiteral("dpiWarning"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dpiWarning->sizePolicy().hasHeightForWidth());
        dpiWarning->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(dpiWarning, 6, 0, 1, 10);

        wheelButton = new QRadioButton(mouseTab);
        wheelButton->setObjectName(QStringLiteral("wheelButton"));

        gridLayout->addWidget(wheelButton, 3, 0, 1, 2);

        horizontalSpacer_22 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_22, 1, 8, 1, 1);

        mb2Button = new QRadioButton(mouseTab);
        mb2Button->setObjectName(QStringLiteral("mb2Button"));
        mb2Button->setAutoExclusive(false);

        gridLayout->addWidget(mb2Button, 0, 3, 1, 5);

        dpiCustLabel = new QLabel(mouseTab);
        dpiCustLabel->setObjectName(QStringLiteral("dpiCustLabel"));

        gridLayout->addWidget(dpiCustLabel, 4, 6, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_19, 1, 2, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_21, 1, 9, 1, 1);

        tabWidget->addTab(mouseTab, QString());
        animTab = new QWidget();
        animTab->setObjectName(QStringLiteral("animTab"));
        gridLayout_5 = new QGridLayout(animTab);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_11, 6, 2, 1, 1);

        animBox = new QComboBox(animTab);
        animBox->setObjectName(QStringLiteral("animBox"));
        sizePolicy1.setHeightForWidth(animBox->sizePolicy().hasHeightForWidth());
        animBox->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(animBox, 4, 2, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_24, 4, 3, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(438, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_25, 4, 7, 1, 1);

        animKrBox = new QCheckBox(animTab);
        animKrBox->setObjectName(QStringLiteral("animKrBox"));

        gridLayout_5->addWidget(animKrBox, 4, 6, 1, 1);

        animOnceBox = new QCheckBox(animTab);
        animOnceBox->setObjectName(QStringLiteral("animOnceBox"));

        gridLayout_5->addWidget(animOnceBox, 4, 4, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_26, 4, 5, 1, 1);

        animButton = new QRadioButton(animTab);
        animButton->setObjectName(QStringLiteral("animButton"));
        sizePolicy1.setHeightForWidth(animButton->sizePolicy().hasHeightForWidth());
        animButton->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(animButton, 0, 1, 1, 2);

        horizontalSpacer_23 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_23, 4, 1, 1, 1);

        tabWidget->addTab(animTab, QString());
        actionTab = new QWidget();
        actionTab->setObjectName(QStringLiteral("actionTab"));
        sizePolicy.setHeightForWidth(actionTab->sizePolicy().hasHeightForWidth());
        actionTab->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(actionTab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        modeButton = new QRadioButton(actionTab);
        modeButton->setObjectName(QStringLiteral("modeButton"));
        modeButton->setAutoExclusive(false);

        gridLayout_3->addWidget(modeButton, 0, 0, 1, 2);

        modeWrapBox = new QCheckBox(actionTab);
        modeWrapBox->setObjectName(QStringLiteral("modeWrapBox"));
        modeWrapBox->setChecked(true);

        gridLayout_3->addWidget(modeWrapBox, 1, 3, 1, 1);

        lightWrapBox = new QCheckBox(actionTab);
        lightWrapBox->setObjectName(QStringLiteral("lightWrapBox"));
        lightWrapBox->setChecked(true);

        gridLayout_3->addWidget(lightWrapBox, 4, 3, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_7, 2, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_6, 5, 1, 1, 1);

        lockButton = new QRadioButton(actionTab);
        lockButton->setObjectName(QStringLiteral("lockButton"));
        lockButton->setAutoExclusive(false);

        gridLayout_3->addWidget(lockButton, 6, 0, 1, 2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 8, 1, 1, 1);

        lightBox = new QComboBox(actionTab);
        lightBox->setObjectName(QStringLiteral("lightBox"));
        sizePolicy1.setHeightForWidth(lightBox->sizePolicy().hasHeightForWidth());
        lightBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lightBox, 4, 1, 1, 1);

        lockBox = new QComboBox(actionTab);
        lockBox->setObjectName(QStringLiteral("lockBox"));
        sizePolicy1.setHeightForWidth(lockBox->sizePolicy().hasHeightForWidth());
        lockBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lockBox, 7, 1, 1, 1);

        lightButton = new QRadioButton(actionTab);
        lightButton->setObjectName(QStringLiteral("lightButton"));
        lightButton->setAutoExclusive(false);

        gridLayout_3->addWidget(lightButton, 3, 0, 1, 2);

        modeBox = new QComboBox(actionTab);
        modeBox->setObjectName(QStringLiteral("modeBox"));
        sizePolicy1.setHeightForWidth(modeBox->sizePolicy().hasHeightForWidth());
        modeBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(modeBox, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 1, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 7, 3, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 1, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 1, 5, 1, 1);

        tabWidget->addTab(actionTab, QString());
        programTab = new QWidget();
        programTab->setObjectName(QStringLiteral("programTab"));
        gridLayout_4 = new QGridLayout(programTab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 0, 1, 1);

        programKpButton = new QCheckBox(programTab);
        programKpButton->setObjectName(QStringLiteral("programKpButton"));

        gridLayout_4->addWidget(programKpButton, 0, 0, 1, 2);

        programKpBox = new QLineEdit(programTab);
        programKpBox->setObjectName(QStringLiteral("programKpBox"));

        gridLayout_4->addWidget(programKpBox, 1, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 2, 1, 2);

        horizontalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_13, 1, 2, 1, 1);

        programKrBox = new QLineEdit(programTab);
        programKrBox->setObjectName(QStringLiteral("programKrBox"));

        gridLayout_4->addWidget(programKrBox, 4, 1, 1, 1);

        programKrButton = new QCheckBox(programTab);
        programKrButton->setObjectName(QStringLiteral("programKrButton"));

        gridLayout_4->addWidget(programKrButton, 3, 0, 1, 2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_12, 0, 4, 1, 1);

        programKpExtra = new QWidget(programTab);
        programKpExtra->setObjectName(QStringLiteral("programKpExtra"));
        horizontalLayout_2 = new QHBoxLayout(programKpExtra);
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        programKpSIBox = new QCheckBox(programKpExtra);
        programKpSIBox->setObjectName(QStringLiteral("programKpSIBox"));

        horizontalLayout_2->addWidget(programKpSIBox);

        programKpModeBox = new QComboBox(programKpExtra);
        programKpModeBox->setObjectName(QStringLiteral("programKpModeBox"));

        horizontalLayout_2->addWidget(programKpModeBox);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_15);


        gridLayout_4->addWidget(programKpExtra, 1, 3, 1, 2);

        programKrExtra = new QWidget(programTab);
        programKrExtra->setObjectName(QStringLiteral("programKrExtra"));
        horizontalLayout_3 = new QHBoxLayout(programKrExtra);
        horizontalLayout_3->setSpacing(12);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        programKrSIBox = new QCheckBox(programKrExtra);
        programKrSIBox->setObjectName(QStringLiteral("programKrSIBox"));

        horizontalLayout_3->addWidget(programKrSIBox);

        programKrModeBox = new QComboBox(programKrExtra);
        programKrModeBox->setObjectName(QStringLiteral("programKrModeBox"));

        horizontalLayout_3->addWidget(programKrModeBox);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_16);


        gridLayout_4->addWidget(programKrExtra, 4, 3, 1, 2);

        progTipLabel = new QLabel(programTab);
        progTipLabel->setObjectName(QStringLiteral("progTipLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(progTipLabel->sizePolicy().hasHeightForWidth());
        progTipLabel->setSizePolicy(sizePolicy3);
        progTipLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(progTipLabel, 5, 1, 1, 4);

        tabWidget->addTab(programTab, QString());
        macroTab = new QWidget();
        macroTab->setObjectName(QStringLiteral("macroTab"));
        layoutWidget1 = new QWidget(macroTab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 12, 241, 161));
        gridLayout_8 = new QGridLayout(layoutWidget1);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        pteMacroBox = new QPlainTextEdit(groupBox_2);
        pteMacroBox->setObjectName(QStringLiteral("pteMacroBox"));
        pteMacroBox->setGeometry(QRect(0, 20, 241, 131));
        pteMacroBox->setFocusPolicy(Qt::WheelFocus);
        pteMacroBox->setTabChangesFocus(true);

        gridLayout_8->addWidget(groupBox_2, 0, 0, 1, 1);

        pteMacroComment = new QPlainTextEdit(macroTab);
        pteMacroComment->setObjectName(QStringLiteral("pteMacroComment"));
        pteMacroComment->setEnabled(true);
        pteMacroComment->setGeometry(QRect(410, 10, 311, 31));
        pteMacroComment->setFocusPolicy(Qt::WheelFocus);
        pteMacroComment->setContextMenuPolicy(Qt::NoContextMenu);
        pteMacroComment->setAcceptDrops(true);
        pteMacroComment->setToolTipDuration(1);
        pteMacroComment->setInputMethodHints(Qt::ImhNone);
        pteMacroComment->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pteMacroComment->setTabChangesFocus(true);
        pteMacroComment->setUndoRedoEnabled(true);
        pteMacroComment->setReadOnly(false);
        pteMacroComment->setTabStopWidth(1);
        pteMacroText = new QPlainTextEdit(macroTab);
        pteMacroText->setObjectName(QStringLiteral("pteMacroText"));
        pteMacroText->setGeometry(QRect(410, 50, 311, 66));
        pteMacroText->setFocusPolicy(Qt::StrongFocus);
        pteMacroText->setContextMenuPolicy(Qt::NoContextMenu);
        pteMacroText->setAcceptDrops(false);
        pteMacroText->setInputMethodHints(Qt::ImhNoAutoUppercase);
        pteMacroText->setUndoRedoEnabled(false);
        pteMacroText->setReadOnly(false);
        pteMacroText->setTabStopWidth(1);
        layoutWidget = new QWidget(macroTab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 10, 131, 74));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));

        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));

        verticalLayout_2->addWidget(groupBox_4);

        layoutWidget_2 = new QWidget(macroTab);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(300, 160, 407, 36));
        gridLayout_10 = new QGridLayout(layoutWidget_2);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        btnStopMacro = new QPushButton(layoutWidget_2);
        btnStopMacro->setObjectName(QStringLiteral("btnStopMacro"));
        btnStopMacro->setEnabled(false);

        gridLayout_10->addWidget(btnStopMacro, 0, 2, 1, 1);

        btnClearMacro = new QPushButton(layoutWidget_2);
        btnClearMacro->setObjectName(QStringLiteral("btnClearMacro"));

        gridLayout_10->addWidget(btnClearMacro, 0, 3, 1, 1);

        btnStartMacro = new QPushButton(layoutWidget_2);
        btnStartMacro->setObjectName(QStringLiteral("btnStartMacro"));

        gridLayout_10->addWidget(btnStartMacro, 0, 1, 1, 1);

        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 75 10pt ; \n"
""));

        gridLayout_10->addWidget(label, 0, 0, 1, 1);

        lbl_macro = new QLabel(macroTab);
        lbl_macro->setObjectName(QStringLiteral("lbl_macro"));
        lbl_macro->setGeometry(QRect(300, 130, 431, 27));
        lbl_macro->setStyleSheet(QStringLiteral("font: 75 11pt ; color: darkblue;"));
        layoutWidget2 = new QWidget(macroTab);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 170, 238, 28));
        delayButtons = new QHBoxLayout(layoutWidget2);
        delayButtons->setSpacing(0);
        delayButtons->setObjectName(QStringLiteral("delayButtons"));
        delayButtons->setSizeConstraint(QLayout::SetMinimumSize);
        delayButtons->setContentsMargins(0, 0, 0, 0);
        rb_delay_no = new QRadioButton(layoutWidget2);
        rb_delay_no->setObjectName(QStringLiteral("rb_delay_no"));
        rb_delay_no->setStyleSheet(QStringLiteral("font: 10pt ; color:  green;"));

        delayButtons->addWidget(rb_delay_no);

        rb_delay_default = new QRadioButton(layoutWidget2);
        rb_delay_default->setObjectName(QStringLiteral("rb_delay_default"));
        rb_delay_default->setStyleSheet(QStringLiteral("font: 10pt ; color:  green;"));
        rb_delay_default->setChecked(false);
        rb_delay_default->setAutoExclusive(true);

        delayButtons->addWidget(rb_delay_default);

        rb_delay_asTyped = new QRadioButton(layoutWidget2);
        rb_delay_asTyped->setObjectName(QStringLiteral("rb_delay_asTyped"));
        rb_delay_asTyped->setStyleSheet(QStringLiteral("font: 10pt ; color:  green;"));
        rb_delay_asTyped->setChecked(true);

        delayButtons->addWidget(rb_delay_asTyped);

        txtBuffer = new QLabel(macroTab);
        txtBuffer->setObjectName(QStringLiteral("txtBuffer"));
        txtBuffer->setEnabled(false);
        txtBuffer->setGeometry(QRect(300, 100, 0, 0));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(txtBuffer->sizePolicy().hasHeightForWidth());
        txtBuffer->setSizePolicy(sizePolicy4);
        txtBuffer->setMaximumSize(QSize(0, 0));
        txtBuffer->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        txtBuffer->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        txtBuffer->setToolTipDuration(0);
#ifndef QT_NO_STATUSTIP
        txtBuffer->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        txtBuffer->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
        txtBuffer->setFrameShadow(QFrame::Plain);
        txtBuffer->setLineWidth(0);
        txtBuffer->setTextFormat(Qt::PlainText);
        txtBuffer->setIndent(0);
        txtBuffer->setTextInteractionFlags(Qt::NoTextInteraction);
        tabWidget->addTab(macroTab, QString());
        pteMacroComment->raise();
        layoutWidget->raise();
        layoutWidget1->raise();
        layoutWidget->raise();
        pteMacroText->raise();
        layoutWidget_2->raise();
        lbl_macro->raise();
        txtBuffer->raise();

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);

        unbindButton = new QPushButton(RebindWidget);
        unbindButton->setObjectName(QStringLiteral("unbindButton"));

        horizontalLayout->addWidget(unbindButton);

        resetButton = new QPushButton(RebindWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        horizontalLayout->addWidget(resetButton);

        cancelButton = new QPushButton(RebindWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        applyButton = new QPushButton(RebindWidget);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        horizontalLayout->addWidget(applyButton);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(tabWidget, typingButton);
        QWidget::setTabOrder(typingButton, typingBox);
        QWidget::setTabOrder(typingBox, modButton);
        QWidget::setTabOrder(modButton, modBox);
        QWidget::setTabOrder(modBox, fnButton);
        QWidget::setTabOrder(fnButton, fnBox);
        QWidget::setTabOrder(fnBox, numButton);
        QWidget::setTabOrder(numButton, numBox);
        QWidget::setTabOrder(numBox, mediaButton);
        QWidget::setTabOrder(mediaButton, mediaBox);
        QWidget::setTabOrder(mediaBox, mbButton);
        QWidget::setTabOrder(mbButton, mbBox);
        QWidget::setTabOrder(mbBox, mb2Button);
        QWidget::setTabOrder(mb2Button, mb2Box);
        QWidget::setTabOrder(mb2Box, wheelButton);
        QWidget::setTabOrder(wheelButton, wheelBox);
        QWidget::setTabOrder(wheelBox, dpiButton);
        QWidget::setTabOrder(dpiButton, dpiBox);
        QWidget::setTabOrder(dpiBox, dpiCustXBox);
        QWidget::setTabOrder(dpiCustXBox, dpiCustYBox);
        QWidget::setTabOrder(dpiCustYBox, animButton);
        QWidget::setTabOrder(animButton, animBox);
        QWidget::setTabOrder(animBox, animOnceBox);
        QWidget::setTabOrder(animOnceBox, animKrBox);
        QWidget::setTabOrder(animKrBox, modeButton);
        QWidget::setTabOrder(modeButton, modeBox);
        QWidget::setTabOrder(modeBox, modeWrapBox);
        QWidget::setTabOrder(modeWrapBox, lightButton);
        QWidget::setTabOrder(lightButton, lightBox);
        QWidget::setTabOrder(lightBox, lightWrapBox);
        QWidget::setTabOrder(lightWrapBox, lockButton);
        QWidget::setTabOrder(lockButton, lockBox);
        QWidget::setTabOrder(lockBox, programKpButton);
        QWidget::setTabOrder(programKpButton, programKpBox);
        QWidget::setTabOrder(programKpBox, programKpSIBox);
        QWidget::setTabOrder(programKpSIBox, programKpModeBox);
        QWidget::setTabOrder(programKpModeBox, programKrButton);
        QWidget::setTabOrder(programKrButton, programKrBox);
        QWidget::setTabOrder(programKrBox, programKrSIBox);
        QWidget::setTabOrder(programKrSIBox, programKrModeBox);
        QWidget::setTabOrder(programKrModeBox, pteMacroBox);
        QWidget::setTabOrder(pteMacroBox, rb_delay_no);
        QWidget::setTabOrder(rb_delay_no, rb_delay_default);
        QWidget::setTabOrder(rb_delay_default, rb_delay_asTyped);
        QWidget::setTabOrder(rb_delay_asTyped, pteMacroComment);
        QWidget::setTabOrder(pteMacroComment, pteMacroText);
        QWidget::setTabOrder(pteMacroText, btnStartMacro);
        QWidget::setTabOrder(btnStartMacro, btnStopMacro);
        QWidget::setTabOrder(btnStopMacro, btnClearMacro);
        QWidget::setTabOrder(btnClearMacro, unbindButton);
        QWidget::setTabOrder(unbindButton, resetButton);
        QWidget::setTabOrder(resetButton, cancelButton);
        QWidget::setTabOrder(cancelButton, applyButton);

        retranslateUi(RebindWidget);
        QObject::connect(btnClearMacro, SIGNAL(clicked()), pteMacroText, SLOT(clear()));
        QObject::connect(btnClearMacro, SIGNAL(clicked()), pteMacroComment, SLOT(clear()));
        QObject::connect(btnClearMacro, SIGNAL(clicked()), btnStopMacro, SLOT(animateClick()));
        QObject::connect(cancelButton, SIGNAL(clicked()), txtBuffer, SLOT(clear()));
        QObject::connect(btnClearMacro, SIGNAL(clicked()), txtBuffer, SLOT(clear()));
        QObject::connect(btnStartMacro, SIGNAL(clicked()), txtBuffer, SLOT(clear()));
        QObject::connect(unbindButton, SIGNAL(clicked()), txtBuffer, SLOT(clear()));
        QObject::connect(resetButton, SIGNAL(clicked()), txtBuffer, SLOT(clear()));

        tabWidget->setCurrentIndex(5);
        applyButton->setDefault(true);


        QMetaObject::connectSlotsByName(RebindWidget);
    } // setupUi

    void retranslateUi(QWidget *RebindWidget)
    {
        numBox->clear();
        numBox->insertItems(0, QStringList()
         << QString()
        );
        typingBox->clear();
        typingBox->insertItems(0, QStringList()
         << QString()
        );
        fnBox->clear();
        fnBox->insertItems(0, QStringList()
         << QString()
        );
        typingButton->setText(QApplication::translate("RebindWidget", "Typing:", 0));
        modBox->clear();
        modBox->insertItems(0, QStringList()
         << QString()
        );
        mediaButton->setText(QApplication::translate("RebindWidget", "Media:", 0));
        modButton->setText(QApplication::translate("RebindWidget", "Modifier:", 0));
        fnButton->setText(QApplication::translate("RebindWidget", "Miscellaneous:", 0));
        mediaBox->clear();
        mediaBox->insertItems(0, QStringList()
         << QString()
        );
        numButton->setText(QApplication::translate("RebindWidget", "Number pad:", 0));
        tabWidget->setTabText(tabWidget->indexOf(keyTab), QApplication::translate("RebindWidget", "Keyboard", 0));
        dpiButton->setText(QApplication::translate("RebindWidget", "Change DPI:", 0));
        mb2Box->clear();
        mb2Box->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("RebindWidget", "4 (Back)", 0)
         << QApplication::translate("RebindWidget", "5 (Forward)", 0)
         << QApplication::translate("RebindWidget", "6", 0)
         << QApplication::translate("RebindWidget", "7", 0)
         << QApplication::translate("RebindWidget", "8", 0)
        );
        dpiBox->clear();
        dpiBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("RebindWidget", "(Cycle Up)", 0)
         << QApplication::translate("RebindWidget", "(Cycle Down)", 0)
         << QApplication::translate("RebindWidget", "(Up)", 0)
         << QApplication::translate("RebindWidget", "(Down)", 0)
         << QApplication::translate("RebindWidget", "Sniper", 0)
         << QApplication::translate("RebindWidget", "1:", 0)
         << QApplication::translate("RebindWidget", "2:", 0)
         << QApplication::translate("RebindWidget", "3:", 0)
         << QApplication::translate("RebindWidget", "4:", 0)
         << QApplication::translate("RebindWidget", "5:", 0)
         << QApplication::translate("RebindWidget", "Custom:", 0)
        );
        mbBox->clear();
        mbBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("RebindWidget", "Left", 0)
         << QApplication::translate("RebindWidget", "Right", 0)
         << QApplication::translate("RebindWidget", "Middle", 0)
        );
        wheelBox->clear();
        wheelBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("RebindWidget", "Up", 0)
         << QApplication::translate("RebindWidget", "Down", 0)
        );
        mbButton->setText(QApplication::translate("RebindWidget", "Standard button:", 0));
        dpiWarning->setText(QApplication::translate("RebindWidget", "DPI is only available for mice.", 0));
        wheelButton->setText(QApplication::translate("RebindWidget", "Wheel:", 0));
        mb2Button->setText(QApplication::translate("RebindWidget", "Special button:", 0));
        dpiCustLabel->setText(QApplication::translate("RebindWidget", "x", 0));
        tabWidget->setTabText(tabWidget->indexOf(mouseTab), QApplication::translate("RebindWidget", "Mouse", 0));
        animBox->clear();
        animBox->insertItems(0, QStringList()
         << QString()
        );
        animKrBox->setText(QApplication::translate("RebindWidget", "Stop on key release", 0));
        animOnceBox->setText(QApplication::translate("RebindWidget", "Restart every time", 0));
        animButton->setText(QApplication::translate("RebindWidget", "Start animation on keypress:", 0));
        tabWidget->setTabText(tabWidget->indexOf(animTab), QApplication::translate("RebindWidget", "Animation", 0));
        modeButton->setText(QApplication::translate("RebindWidget", "Switch to mode:", 0));
        modeWrapBox->setText(QApplication::translate("RebindWidget", "Wrap-around", 0));
        lightWrapBox->setText(QApplication::translate("RebindWidget", "Wrap-around", 0));
        lockButton->setText(QApplication::translate("RebindWidget", "Windows lock:", 0));
        lightBox->clear();
        lightBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("RebindWidget", "Up", 0)
         << QApplication::translate("RebindWidget", "Down", 0)
        );
        lockBox->clear();
        lockBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("RebindWidget", "Toggle", 0)
         << QApplication::translate("RebindWidget", "On", 0)
         << QApplication::translate("RebindWidget", "Off", 0)
        );
        lightButton->setText(QApplication::translate("RebindWidget", "Brightness:", 0));
        modeBox->clear();
        modeBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("RebindWidget", "(Previous)", 0)
         << QApplication::translate("RebindWidget", "(Next)", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(actionTab), QApplication::translate("RebindWidget", "Special", 0));
        programKpButton->setText(QApplication::translate("RebindWidget", "Launch program on key press:", 0));
        programKrButton->setText(QApplication::translate("RebindWidget", "Launch program on key release:", 0));
        programKpSIBox->setText(QApplication::translate("RebindWidget", "Single instance", 0));
        programKpModeBox->clear();
        programKpModeBox->insertItems(0, QStringList()
         << QApplication::translate("RebindWidget", "Run indefinitely", 0)
         << QApplication::translate("RebindWidget", "Stop on release", 0)
         << QApplication::translate("RebindWidget", "Stop on re-press", 0)
        );
        programKrSIBox->setText(QApplication::translate("RebindWidget", "Single instance", 0));
        programKrModeBox->clear();
        programKrModeBox->insertItems(0, QStringList()
         << QApplication::translate("RebindWidget", "Run indefinitely", 0)
         << QApplication::translate("RebindWidget", "Stop on re-press", 0)
        );
        progTipLabel->setText(QApplication::translate("RebindWidget", "Tip", 0));
        tabWidget->setTabText(tabWidget->indexOf(programTab), QApplication::translate("RebindWidget", "Program", 0));
        groupBox_2->setTitle(QApplication::translate("RebindWidget", "Macro Key Actions", 0));
#ifndef QT_NO_TOOLTIP
        pteMacroComment->setToolTip(QApplication::translate("RebindWidget", "What is this macro for?", 0));
#endif // QT_NO_TOOLTIP
        pteMacroComment->setDocumentTitle(QString());
        pteMacroComment->setPlainText(QString());
        pteMacroText->setDocumentTitle(QString());
        pteMacroText->setPlainText(QString());
        groupBox_3->setTitle(QApplication::translate("RebindWidget", "Macro Comment", 0));
        groupBox_4->setTitle(QApplication::translate("RebindWidget", "Macro Text", 0));
        btnStopMacro->setText(QApplication::translate("RebindWidget", "Stop", 0));
        btnClearMacro->setText(QApplication::translate("RebindWidget", "Clear", 0));
        btnStartMacro->setText(QApplication::translate("RebindWidget", "Start", 0));
        label->setText(QApplication::translate("RebindWidget", "Record macro ", 0));
        lbl_macro->setText(QApplication::translate("RebindWidget", "Comment label for help", 0));
#ifndef QT_NO_WHATSTHIS
        rb_delay_no->setWhatsThis(QApplication::translate("RebindWidget", "configure delays between keystrokes: Disable delay", 0));
#endif // QT_NO_WHATSTHIS
        rb_delay_no->setText(QApplication::translate("RebindWidget", "No delay", 0));
#ifndef QT_NO_WHATSTHIS
        rb_delay_default->setWhatsThis(QApplication::translate("RebindWidget", "configure delays between keystrokes: Set delay to default values: 20us up to 15 chars, 200us above", 0));
#endif // QT_NO_WHATSTHIS
        rb_delay_default->setText(QApplication::translate("RebindWidget", "default", 0));
#ifndef QT_NO_WHATSTHIS
        rb_delay_asTyped->setWhatsThis(QApplication::translate("RebindWidget", "configure delays between keystrokes: Remember delays as they had been typed while the macro definition process", 0));
#endif // QT_NO_WHATSTHIS
        rb_delay_asTyped->setText(QApplication::translate("RebindWidget", "as typed", 0));
        txtBuffer->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(macroTab), QApplication::translate("RebindWidget", "Macro", 0));
        unbindButton->setText(QApplication::translate("RebindWidget", "Unbind", 0));
        resetButton->setText(QApplication::translate("RebindWidget", "Reset to Default", 0));
        cancelButton->setText(QApplication::translate("RebindWidget", "Cancel", 0));
        applyButton->setText(QApplication::translate("RebindWidget", "Apply", 0));
        Q_UNUSED(RebindWidget);
    } // retranslateUi

};

namespace Ui {
    class RebindWidget: public Ui_RebindWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REBINDWIDGET_H
