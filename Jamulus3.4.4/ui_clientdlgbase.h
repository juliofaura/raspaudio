/********************************************************************************
** Form generated from reading UI file 'clientdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTDLGBASE_H
#define UI_CLIENTDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "audiomixerboard.h"
#include "multicolorled.h"
#include "multicolorledbar.h"

QT_BEGIN_NAMESPACE

class Ui_CClientDlgBase
{
public:
    QHBoxLayout *hboxLayout;
    QFrame *backgroundFrame;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout3;
    QLabel *pxlLogo;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout4;
    QLabel *lblDelay;
    CMultiColorLED *ledDelay;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout5;
    QLabel *lblBuffers;
    CMultiColorLED *ledBuffers;
    QSpacerItem *spacerItem3;
    QFrame *lineMeter;
    QVBoxLayout *vboxLayout2;
    QLabel *lblInputLEDMeter;
    QHBoxLayout *hboxLayout6;
    CMultiColorLEDBar *lbrInputLevelL;
    CMultiColorLEDBar *lbrInputLevelR;
    QHBoxLayout *hboxLayout7;
    QLabel *lblLevelMeterLeft;
    QLabel *lblLevelMeterRight;
    QSpacerItem *spacerItem4;
    QFrame *lineUpperLowerLeft;
    QCheckBox *chbSettings;
    QCheckBox *chbChat;
    QCheckBox *chbProfile;
    QHBoxLayout *hboxLayout8;
    QPushButton *butConnect;
    QSpacerItem *spacerItem5;
    QFrame *linePanReverb;
    QVBoxLayout *vboxLayout3;
    QVBoxLayout *vboxLayout4;
    QLabel *lblAudioPan;
    QLabel *lblAudioPanValue;
    QHBoxLayout *hboxLayout9;
    QSpacerItem *spacerItem6;
    QSlider *sldAudioPan;
    QSpacerItem *spacerItem7;
    QVBoxLayout *vboxLayout5;
    QVBoxLayout *vboxLayout6;
    QLabel *lblAudioReverb;
    QHBoxLayout *hboxLayout10;
    QSpacerItem *spacerItem8;
    QSlider *sldAudioReverb;
    QSpacerItem *spacerItem9;
    QVBoxLayout *vboxLayout7;
    QRadioButton *rbtReverbSelL;
    QRadioButton *rbtReverbSelR;
    CAudioMixerBoard *MainMixerBoard;

    void setupUi(QDialog *CClientDlgBase)
    {
        if (CClientDlgBase->objectName().isEmpty())
            CClientDlgBase->setObjectName(QString::fromUtf8("CClientDlgBase"));
        CClientDlgBase->resize(345, 363);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/main/res/mainicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CClientDlgBase->setWindowIcon(icon);
        CClientDlgBase->setSizeGripEnabled(true);
        hboxLayout = new QHBoxLayout(CClientDlgBase);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 3, 3);
        backgroundFrame = new QFrame(CClientDlgBase);
        backgroundFrame->setObjectName(QString::fromUtf8("backgroundFrame"));
        backgroundFrame->setMinimumSize(QSize(0, 0));
        backgroundFrame->setFrameShape(QFrame::NoFrame);
        backgroundFrame->setFrameShadow(QFrame::Plain);
        hboxLayout1 = new QHBoxLayout(backgroundFrame);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(3);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        pxlLogo = new QLabel(backgroundFrame);
        pxlLogo->setObjectName(QString::fromUtf8("pxlLogo"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pxlLogo->sizePolicy().hasHeightForWidth());
        pxlLogo->setSizePolicy(sizePolicy);
        pxlLogo->setPixmap(QPixmap(QString::fromUtf8(":/png/main/res/fronticon.png")));
        pxlLogo->setAlignment(Qt::AlignCenter);
        pxlLogo->setWordWrap(false);

        hboxLayout3->addWidget(pxlLogo);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout3);

        spacerItem1 = new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        lblDelay = new QLabel(backgroundFrame);
        lblDelay->setObjectName(QString::fromUtf8("lblDelay"));
        lblDelay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblDelay->setWordWrap(false);

        hboxLayout4->addWidget(lblDelay);

        ledDelay = new CMultiColorLED(backgroundFrame);
        ledDelay->setObjectName(QString::fromUtf8("ledDelay"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ledDelay->sizePolicy().hasHeightForWidth());
        ledDelay->setSizePolicy(sizePolicy1);
        ledDelay->setMinimumSize(QSize(14, 14));
        ledDelay->setMaximumSize(QSize(14, 14));

        hboxLayout4->addWidget(ledDelay);


        vboxLayout1->addLayout(hboxLayout4);

        spacerItem2 = new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem2);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        lblBuffers = new QLabel(backgroundFrame);
        lblBuffers->setObjectName(QString::fromUtf8("lblBuffers"));
        lblBuffers->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblBuffers->setWordWrap(false);

        hboxLayout5->addWidget(lblBuffers);

        ledBuffers = new CMultiColorLED(backgroundFrame);
        ledBuffers->setObjectName(QString::fromUtf8("ledBuffers"));
        sizePolicy1.setHeightForWidth(ledBuffers->sizePolicy().hasHeightForWidth());
        ledBuffers->setSizePolicy(sizePolicy1);
        ledBuffers->setMinimumSize(QSize(14, 14));
        ledBuffers->setMaximumSize(QSize(14, 14));

        hboxLayout5->addWidget(ledBuffers);


        vboxLayout1->addLayout(hboxLayout5);

        spacerItem3 = new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem3);


        hboxLayout2->addLayout(vboxLayout1);

        lineMeter = new QFrame(backgroundFrame);
        lineMeter->setObjectName(QString::fromUtf8("lineMeter"));
        lineMeter->setFrameShape(QFrame::VLine);
        lineMeter->setFrameShadow(QFrame::Sunken);

        hboxLayout2->addWidget(lineMeter);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        lblInputLEDMeter = new QLabel(backgroundFrame);
        lblInputLEDMeter->setObjectName(QString::fromUtf8("lblInputLEDMeter"));
        lblInputLEDMeter->setAlignment(Qt::AlignCenter);

        vboxLayout2->addWidget(lblInputLEDMeter);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        lbrInputLevelL = new CMultiColorLEDBar(backgroundFrame);
        lbrInputLevelL->setObjectName(QString::fromUtf8("lbrInputLevelL"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbrInputLevelL->sizePolicy().hasHeightForWidth());
        lbrInputLevelL->setSizePolicy(sizePolicy2);
        lbrInputLevelL->setMinimumSize(QSize(16, 88));

        hboxLayout6->addWidget(lbrInputLevelL);

        lbrInputLevelR = new CMultiColorLEDBar(backgroundFrame);
        lbrInputLevelR->setObjectName(QString::fromUtf8("lbrInputLevelR"));
        sizePolicy2.setHeightForWidth(lbrInputLevelR->sizePolicy().hasHeightForWidth());
        lbrInputLevelR->setSizePolicy(sizePolicy2);
        lbrInputLevelR->setMinimumSize(QSize(16, 88));

        hboxLayout6->addWidget(lbrInputLevelR);


        vboxLayout2->addLayout(hboxLayout6);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        lblLevelMeterLeft = new QLabel(backgroundFrame);
        lblLevelMeterLeft->setObjectName(QString::fromUtf8("lblLevelMeterLeft"));
        lblLevelMeterLeft->setAlignment(Qt::AlignCenter);

        hboxLayout7->addWidget(lblLevelMeterLeft);

        lblLevelMeterRight = new QLabel(backgroundFrame);
        lblLevelMeterRight->setObjectName(QString::fromUtf8("lblLevelMeterRight"));
        lblLevelMeterRight->setAlignment(Qt::AlignCenter);

        hboxLayout7->addWidget(lblLevelMeterRight);


        vboxLayout2->addLayout(hboxLayout7);


        hboxLayout2->addLayout(vboxLayout2);

        spacerItem4 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem4);


        vboxLayout->addLayout(hboxLayout2);

        lineUpperLowerLeft = new QFrame(backgroundFrame);
        lineUpperLowerLeft->setObjectName(QString::fromUtf8("lineUpperLowerLeft"));
        lineUpperLowerLeft->setFrameShape(QFrame::HLine);
        lineUpperLowerLeft->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(lineUpperLowerLeft);

        chbSettings = new QCheckBox(backgroundFrame);
        chbSettings->setObjectName(QString::fromUtf8("chbSettings"));

        vboxLayout->addWidget(chbSettings);

        chbChat = new QCheckBox(backgroundFrame);
        chbChat->setObjectName(QString::fromUtf8("chbChat"));

        vboxLayout->addWidget(chbChat);

        chbProfile = new QCheckBox(backgroundFrame);
        chbProfile->setObjectName(QString::fromUtf8("chbProfile"));

        vboxLayout->addWidget(chbProfile);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        butConnect = new QPushButton(backgroundFrame);
        butConnect->setObjectName(QString::fromUtf8("butConnect"));
        butConnect->setDefault(true);

        hboxLayout8->addWidget(butConnect);

        spacerItem5 = new QSpacerItem(0, 25, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem5);


        vboxLayout->addLayout(hboxLayout8);


        hboxLayout1->addLayout(vboxLayout);

        linePanReverb = new QFrame(backgroundFrame);
        linePanReverb->setObjectName(QString::fromUtf8("linePanReverb"));
        linePanReverb->setFrameShape(QFrame::VLine);
        linePanReverb->setFrameShadow(QFrame::Sunken);

        hboxLayout1->addWidget(linePanReverb);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setSpacing(3);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        lblAudioPan = new QLabel(backgroundFrame);
        lblAudioPan->setObjectName(QString::fromUtf8("lblAudioPan"));
        lblAudioPan->setAlignment(Qt::AlignCenter);

        vboxLayout4->addWidget(lblAudioPan);

        lblAudioPanValue = new QLabel(backgroundFrame);
        lblAudioPanValue->setObjectName(QString::fromUtf8("lblAudioPanValue"));
        lblAudioPanValue->setMinimumSize(QSize(50, 0));
        lblAudioPanValue->setAlignment(Qt::AlignCenter);
        lblAudioPanValue->setWordWrap(false);

        vboxLayout4->addWidget(lblAudioPanValue);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        spacerItem6 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem6);

        sldAudioPan = new QSlider(backgroundFrame);
        sldAudioPan->setObjectName(QString::fromUtf8("sldAudioPan"));
        sldAudioPan->setPageStep(1);
        sldAudioPan->setOrientation(Qt::Vertical);
        sldAudioPan->setTickPosition(QSlider::TicksBothSides);

        hboxLayout9->addWidget(sldAudioPan);

        spacerItem7 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem7);


        vboxLayout4->addLayout(hboxLayout9);


        vboxLayout3->addLayout(vboxLayout4);

        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        vboxLayout6 = new QVBoxLayout();
        vboxLayout6->setSpacing(3);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        lblAudioReverb = new QLabel(backgroundFrame);
        lblAudioReverb->setObjectName(QString::fromUtf8("lblAudioReverb"));
        lblAudioReverb->setAlignment(Qt::AlignCenter);

        vboxLayout6->addWidget(lblAudioReverb);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        spacerItem8 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout10->addItem(spacerItem8);

        sldAudioReverb = new QSlider(backgroundFrame);
        sldAudioReverb->setObjectName(QString::fromUtf8("sldAudioReverb"));
        sldAudioReverb->setPageStep(1);
        sldAudioReverb->setOrientation(Qt::Vertical);
        sldAudioReverb->setTickPosition(QSlider::TicksBothSides);

        hboxLayout10->addWidget(sldAudioReverb);

        spacerItem9 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout10->addItem(spacerItem9);


        vboxLayout6->addLayout(hboxLayout10);


        vboxLayout5->addLayout(vboxLayout6);

        vboxLayout7 = new QVBoxLayout();
        vboxLayout7->setSpacing(3);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        rbtReverbSelL = new QRadioButton(backgroundFrame);
        rbtReverbSelL->setObjectName(QString::fromUtf8("rbtReverbSelL"));

        vboxLayout7->addWidget(rbtReverbSelL);

        rbtReverbSelR = new QRadioButton(backgroundFrame);
        rbtReverbSelR->setObjectName(QString::fromUtf8("rbtReverbSelR"));

        vboxLayout7->addWidget(rbtReverbSelR);


        vboxLayout5->addLayout(vboxLayout7);


        vboxLayout3->addLayout(vboxLayout5);


        hboxLayout1->addLayout(vboxLayout3);

        MainMixerBoard = new CAudioMixerBoard(backgroundFrame);
        MainMixerBoard->setObjectName(QString::fromUtf8("MainMixerBoard"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(MainMixerBoard->sizePolicy().hasHeightForWidth());
        MainMixerBoard->setSizePolicy(sizePolicy3);

        hboxLayout1->addWidget(MainMixerBoard);


        hboxLayout->addWidget(backgroundFrame);

        QWidget::setTabOrder(butConnect, chbChat);
        QWidget::setTabOrder(chbChat, chbSettings);
        QWidget::setTabOrder(chbSettings, sldAudioPan);
        QWidget::setTabOrder(sldAudioPan, sldAudioReverb);
        QWidget::setTabOrder(sldAudioReverb, rbtReverbSelL);
        QWidget::setTabOrder(rbtReverbSelL, rbtReverbSelR);

        retranslateUi(CClientDlgBase);

        QMetaObject::connectSlotsByName(CClientDlgBase);
    } // setupUi

    void retranslateUi(QDialog *CClientDlgBase)
    {
        CClientDlgBase->setWindowTitle(QString());
        CClientDlgBase->setStyleSheet(QString());
        lblDelay->setText(QApplication::translate("CClientDlgBase", "Delay", 0, QApplication::UnicodeUTF8));
        lblBuffers->setText(QApplication::translate("CClientDlgBase", "Buffers", 0, QApplication::UnicodeUTF8));
        lblInputLEDMeter->setText(QApplication::translate("CClientDlgBase", "Input", 0, QApplication::UnicodeUTF8));
        lblLevelMeterLeft->setText(QApplication::translate("CClientDlgBase", "L", 0, QApplication::UnicodeUTF8));
        lblLevelMeterRight->setText(QApplication::translate("CClientDlgBase", "R", 0, QApplication::UnicodeUTF8));
        chbSettings->setText(QApplication::translate("CClientDlgBase", "Settings", 0, QApplication::UnicodeUTF8));
        chbChat->setText(QApplication::translate("CClientDlgBase", "Chat", 0, QApplication::UnicodeUTF8));
        chbProfile->setText(QApplication::translate("CClientDlgBase", "My Profile", 0, QApplication::UnicodeUTF8));
        butConnect->setText(QApplication::translate("CClientDlgBase", "C&onnect", 0, QApplication::UnicodeUTF8));
        lblAudioPan->setText(QApplication::translate("CClientDlgBase", "Pan", 0, QApplication::UnicodeUTF8));
        lblAudioPanValue->setText(QApplication::translate("CClientDlgBase", "Center", 0, QApplication::UnicodeUTF8));
        sldAudioPan->setStyleSheet(QString());
        lblAudioReverb->setText(QApplication::translate("CClientDlgBase", "Reverb", 0, QApplication::UnicodeUTF8));
        rbtReverbSelL->setText(QApplication::translate("CClientDlgBase", "Left", 0, QApplication::UnicodeUTF8));
        rbtReverbSelR->setText(QApplication::translate("CClientDlgBase", "Right", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CClientDlgBase: public Ui_CClientDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTDLGBASE_H
