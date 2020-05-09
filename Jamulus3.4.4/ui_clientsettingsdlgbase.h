/********************************************************************************
** Form generated from reading UI file 'clientsettingsdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTSETTINGSDLGBASE_H
#define UI_CLIENTSETTINGSDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "multicolorled.h"

QT_BEGIN_NAMESPACE

class Ui_CClientSettingsDlgBase
{
public:
    QHBoxLayout *hboxLayout;
    QGroupBox *grbSoundCard;
    QVBoxLayout *vboxLayout;
    QLabel *lblSoundcardDevice;
    QComboBox *cbxSoundcard;
    QFrame *FrameSoundcardChannelSelection;
    QVBoxLayout *vboxLayout1;
    QLabel *lblInChannelMapping;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout2;
    QLabel *lblLInChan;
    QLabel *lblRInChan;
    QVBoxLayout *vboxLayout3;
    QComboBox *cbxLInChan;
    QComboBox *cbxRInChan;
    QLabel *lblOutChannelMapping;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout4;
    QLabel *lblLOutChan;
    QLabel *lblROutChan;
    QVBoxLayout *vboxLayout5;
    QComboBox *cbxLOutChan;
    QComboBox *cbxROutChan;
    QSpacerItem *spacerItem;
    QGroupBox *grbSoundCrdBufDelay;
    QVBoxLayout *vboxLayout6;
    QRadioButton *rbtBufferDelayPreferred;
    QRadioButton *rbtBufferDelayDefault;
    QRadioButton *rbtBufferDelaySafe;
    QPushButton *butDriverSetup;
    QGroupBox *grbJitterBuffer;
    QVBoxLayout *vboxLayout7;
    QCheckBox *chbAutoJitBuf;
    QHBoxLayout *hboxLayout3;
    QLabel *lblNetBufLabel;
    QLabel *lblNetBufServerLabel;
    QHBoxLayout *hboxLayout4;
    QLabel *lblNetBuf;
    QLabel *lblNetBufServer;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem1;
    QSlider *sldNetBuf;
    QSpacerItem *spacerItem2;
    QSlider *sldNetBufServer;
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacerItem3;
    CMultiColorLED *ledNetw;
    QSpacerItem *spacerItem4;
    QGroupBox *grbMeasureResults;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblAudioChannels;
    QLabel *lblAudioQuality;
    QLabel *lblNewClientLevel;
    QVBoxLayout *verticalLayout;
    QComboBox *cbxAudioChannels;
    QComboBox *cbxAudioQuality;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *edtNewClientLevel;
    QLabel *lblPercentUnit;
    QCheckBox *chbGUIDesignFancy;
    QHBoxLayout *hboxLayout7;
    QLabel *lblCentralServerAddress;
    QCheckBox *chbDefaultCentralServer;
    QLineEdit *edtCentralServerAddress;
    QSpacerItem *spacerItem5;
    QHBoxLayout *hboxLayout8;
    QLabel *lblUpstream;
    QLabel *lblUpstreamValue;
    QHBoxLayout *hboxLayout9;
    QLabel *lblPingTime;
    QLabel *lblPingTimeValue;
    QHBoxLayout *hboxLayout10;
    QLabel *lblOverallDelay;
    QHBoxLayout *hboxLayout11;
    QLabel *lblOverallDelayValue;
    CMultiColorLED *ledOverallDelay;

    void setupUi(QDialog *CClientSettingsDlgBase)
    {
        if (CClientSettingsDlgBase->objectName().isEmpty())
            CClientSettingsDlgBase->setObjectName(QString::fromUtf8("CClientSettingsDlgBase"));
        CClientSettingsDlgBase->resize(567, 351);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/main/res/mainicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CClientSettingsDlgBase->setWindowIcon(icon);
        CClientSettingsDlgBase->setSizeGripEnabled(true);
        hboxLayout = new QHBoxLayout(CClientSettingsDlgBase);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        grbSoundCard = new QGroupBox(CClientSettingsDlgBase);
        grbSoundCard->setObjectName(QString::fromUtf8("grbSoundCard"));
        vboxLayout = new QVBoxLayout(grbSoundCard);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        lblSoundcardDevice = new QLabel(grbSoundCard);
        lblSoundcardDevice->setObjectName(QString::fromUtf8("lblSoundcardDevice"));

        vboxLayout->addWidget(lblSoundcardDevice);

        cbxSoundcard = new QComboBox(grbSoundCard);
        cbxSoundcard->setObjectName(QString::fromUtf8("cbxSoundcard"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbxSoundcard->sizePolicy().hasHeightForWidth());
        cbxSoundcard->setSizePolicy(sizePolicy);
        cbxSoundcard->setMinimumSize(QSize(153, 0));

        vboxLayout->addWidget(cbxSoundcard);

        FrameSoundcardChannelSelection = new QFrame(grbSoundCard);
        FrameSoundcardChannelSelection->setObjectName(QString::fromUtf8("FrameSoundcardChannelSelection"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(FrameSoundcardChannelSelection->sizePolicy().hasHeightForWidth());
        FrameSoundcardChannelSelection->setSizePolicy(sizePolicy1);
        FrameSoundcardChannelSelection->setFrameShape(QFrame::NoFrame);
        FrameSoundcardChannelSelection->setFrameShadow(QFrame::Plain);
        vboxLayout1 = new QVBoxLayout(FrameSoundcardChannelSelection);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        lblInChannelMapping = new QLabel(FrameSoundcardChannelSelection);
        lblInChannelMapping->setObjectName(QString::fromUtf8("lblInChannelMapping"));

        vboxLayout1->addWidget(lblInChannelMapping);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(3);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        lblLInChan = new QLabel(FrameSoundcardChannelSelection);
        lblLInChan->setObjectName(QString::fromUtf8("lblLInChan"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblLInChan->sizePolicy().hasHeightForWidth());
        lblLInChan->setSizePolicy(sizePolicy2);

        vboxLayout2->addWidget(lblLInChan);

        lblRInChan = new QLabel(FrameSoundcardChannelSelection);
        lblRInChan->setObjectName(QString::fromUtf8("lblRInChan"));
        sizePolicy2.setHeightForWidth(lblRInChan->sizePolicy().hasHeightForWidth());
        lblRInChan->setSizePolicy(sizePolicy2);

        vboxLayout2->addWidget(lblRInChan);


        hboxLayout1->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(3);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        cbxLInChan = new QComboBox(FrameSoundcardChannelSelection);
        cbxLInChan->setObjectName(QString::fromUtf8("cbxLInChan"));

        vboxLayout3->addWidget(cbxLInChan);

        cbxRInChan = new QComboBox(FrameSoundcardChannelSelection);
        cbxRInChan->setObjectName(QString::fromUtf8("cbxRInChan"));

        vboxLayout3->addWidget(cbxRInChan);


        hboxLayout1->addLayout(vboxLayout3);


        vboxLayout1->addLayout(hboxLayout1);

        lblOutChannelMapping = new QLabel(FrameSoundcardChannelSelection);
        lblOutChannelMapping->setObjectName(QString::fromUtf8("lblOutChannelMapping"));

        vboxLayout1->addWidget(lblOutChannelMapping);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(3);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        lblLOutChan = new QLabel(FrameSoundcardChannelSelection);
        lblLOutChan->setObjectName(QString::fromUtf8("lblLOutChan"));
        sizePolicy2.setHeightForWidth(lblLOutChan->sizePolicy().hasHeightForWidth());
        lblLOutChan->setSizePolicy(sizePolicy2);

        vboxLayout4->addWidget(lblLOutChan);

        lblROutChan = new QLabel(FrameSoundcardChannelSelection);
        lblROutChan->setObjectName(QString::fromUtf8("lblROutChan"));
        sizePolicy2.setHeightForWidth(lblROutChan->sizePolicy().hasHeightForWidth());
        lblROutChan->setSizePolicy(sizePolicy2);

        vboxLayout4->addWidget(lblROutChan);


        hboxLayout2->addLayout(vboxLayout4);

        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setSpacing(3);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        cbxLOutChan = new QComboBox(FrameSoundcardChannelSelection);
        cbxLOutChan->setObjectName(QString::fromUtf8("cbxLOutChan"));

        vboxLayout5->addWidget(cbxLOutChan);

        cbxROutChan = new QComboBox(FrameSoundcardChannelSelection);
        cbxROutChan->setObjectName(QString::fromUtf8("cbxROutChan"));

        vboxLayout5->addWidget(cbxROutChan);


        hboxLayout2->addLayout(vboxLayout5);


        vboxLayout1->addLayout(hboxLayout2);


        vboxLayout->addWidget(FrameSoundcardChannelSelection);

        spacerItem = new QSpacerItem(153, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        grbSoundCrdBufDelay = new QGroupBox(grbSoundCard);
        grbSoundCrdBufDelay->setObjectName(QString::fromUtf8("grbSoundCrdBufDelay"));
        vboxLayout6 = new QVBoxLayout(grbSoundCrdBufDelay);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        rbtBufferDelayPreferred = new QRadioButton(grbSoundCrdBufDelay);
        rbtBufferDelayPreferred->setObjectName(QString::fromUtf8("rbtBufferDelayPreferred"));

        vboxLayout6->addWidget(rbtBufferDelayPreferred);

        rbtBufferDelayDefault = new QRadioButton(grbSoundCrdBufDelay);
        rbtBufferDelayDefault->setObjectName(QString::fromUtf8("rbtBufferDelayDefault"));

        vboxLayout6->addWidget(rbtBufferDelayDefault);

        rbtBufferDelaySafe = new QRadioButton(grbSoundCrdBufDelay);
        rbtBufferDelaySafe->setObjectName(QString::fromUtf8("rbtBufferDelaySafe"));

        vboxLayout6->addWidget(rbtBufferDelaySafe);

        butDriverSetup = new QPushButton(grbSoundCrdBufDelay);
        butDriverSetup->setObjectName(QString::fromUtf8("butDriverSetup"));
        butDriverSetup->setAutoDefault(false);

        vboxLayout6->addWidget(butDriverSetup);


        vboxLayout->addWidget(grbSoundCrdBufDelay);


        hboxLayout->addWidget(grbSoundCard);

        grbJitterBuffer = new QGroupBox(CClientSettingsDlgBase);
        grbJitterBuffer->setObjectName(QString::fromUtf8("grbJitterBuffer"));
        vboxLayout7 = new QVBoxLayout(grbJitterBuffer);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        chbAutoJitBuf = new QCheckBox(grbJitterBuffer);
        chbAutoJitBuf->setObjectName(QString::fromUtf8("chbAutoJitBuf"));

        vboxLayout7->addWidget(chbAutoJitBuf);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        lblNetBufLabel = new QLabel(grbJitterBuffer);
        lblNetBufLabel->setObjectName(QString::fromUtf8("lblNetBufLabel"));
        lblNetBufLabel->setMinimumSize(QSize(50, 0));
        lblNetBufLabel->setAlignment(Qt::AlignCenter);
        lblNetBufLabel->setWordWrap(false);

        hboxLayout3->addWidget(lblNetBufLabel);

        lblNetBufServerLabel = new QLabel(grbJitterBuffer);
        lblNetBufServerLabel->setObjectName(QString::fromUtf8("lblNetBufServerLabel"));
        lblNetBufServerLabel->setMinimumSize(QSize(50, 0));
        lblNetBufServerLabel->setAlignment(Qt::AlignCenter);
        lblNetBufServerLabel->setWordWrap(false);

        hboxLayout3->addWidget(lblNetBufServerLabel);


        vboxLayout7->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        lblNetBuf = new QLabel(grbJitterBuffer);
        lblNetBuf->setObjectName(QString::fromUtf8("lblNetBuf"));
        lblNetBuf->setMinimumSize(QSize(50, 0));
        lblNetBuf->setAlignment(Qt::AlignCenter);
        lblNetBuf->setWordWrap(false);

        hboxLayout4->addWidget(lblNetBuf);

        lblNetBufServer = new QLabel(grbJitterBuffer);
        lblNetBufServer->setObjectName(QString::fromUtf8("lblNetBufServer"));
        lblNetBufServer->setMinimumSize(QSize(50, 0));
        lblNetBufServer->setAlignment(Qt::AlignCenter);
        lblNetBufServer->setWordWrap(false);

        hboxLayout4->addWidget(lblNetBufServer);


        vboxLayout7->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        spacerItem1 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem1);

        sldNetBuf = new QSlider(grbJitterBuffer);
        sldNetBuf->setObjectName(QString::fromUtf8("sldNetBuf"));
        sldNetBuf->setPageStep(1);
        sldNetBuf->setOrientation(Qt::Vertical);
        sldNetBuf->setTickPosition(QSlider::TicksBothSides);

        hboxLayout5->addWidget(sldNetBuf);

        spacerItem2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem2);

        sldNetBufServer = new QSlider(grbJitterBuffer);
        sldNetBufServer->setObjectName(QString::fromUtf8("sldNetBufServer"));
        sldNetBufServer->setPageStep(1);
        sldNetBufServer->setOrientation(Qt::Vertical);
        sldNetBufServer->setTickPosition(QSlider::TicksBothSides);

        hboxLayout5->addWidget(sldNetBufServer);


        vboxLayout7->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        spacerItem3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem3);

        ledNetw = new CMultiColorLED(grbJitterBuffer);
        ledNetw->setObjectName(QString::fromUtf8("ledNetw"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ledNetw->sizePolicy().hasHeightForWidth());
        ledNetw->setSizePolicy(sizePolicy3);
        ledNetw->setMinimumSize(QSize(20, 20));
        ledNetw->setMaximumSize(QSize(20, 20));

        hboxLayout6->addWidget(ledNetw);

        spacerItem4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem4);


        vboxLayout7->addLayout(hboxLayout6);


        hboxLayout->addWidget(grbJitterBuffer);

        grbMeasureResults = new QGroupBox(CClientSettingsDlgBase);
        grbMeasureResults->setObjectName(QString::fromUtf8("grbMeasureResults"));
        verticalLayout_3 = new QVBoxLayout(grbMeasureResults);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lblAudioChannels = new QLabel(grbMeasureResults);
        lblAudioChannels->setObjectName(QString::fromUtf8("lblAudioChannels"));

        verticalLayout_2->addWidget(lblAudioChannels);

        lblAudioQuality = new QLabel(grbMeasureResults);
        lblAudioQuality->setObjectName(QString::fromUtf8("lblAudioQuality"));

        verticalLayout_2->addWidget(lblAudioQuality);

        lblNewClientLevel = new QLabel(grbMeasureResults);
        lblNewClientLevel->setObjectName(QString::fromUtf8("lblNewClientLevel"));

        verticalLayout_2->addWidget(lblNewClientLevel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbxAudioChannels = new QComboBox(grbMeasureResults);
        cbxAudioChannels->setObjectName(QString::fromUtf8("cbxAudioChannels"));

        verticalLayout->addWidget(cbxAudioChannels);

        cbxAudioQuality = new QComboBox(grbMeasureResults);
        cbxAudioQuality->setObjectName(QString::fromUtf8("cbxAudioQuality"));

        verticalLayout->addWidget(cbxAudioQuality);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        edtNewClientLevel = new QLineEdit(grbMeasureResults);
        edtNewClientLevel->setObjectName(QString::fromUtf8("edtNewClientLevel"));

        horizontalLayout_4->addWidget(edtNewClientLevel);

        lblPercentUnit = new QLabel(grbMeasureResults);
        lblPercentUnit->setObjectName(QString::fromUtf8("lblPercentUnit"));

        horizontalLayout_4->addWidget(lblPercentUnit);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        chbGUIDesignFancy = new QCheckBox(grbMeasureResults);
        chbGUIDesignFancy->setObjectName(QString::fromUtf8("chbGUIDesignFancy"));

        verticalLayout_3->addWidget(chbGUIDesignFancy);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        lblCentralServerAddress = new QLabel(grbMeasureResults);
        lblCentralServerAddress->setObjectName(QString::fromUtf8("lblCentralServerAddress"));

        hboxLayout7->addWidget(lblCentralServerAddress);

        chbDefaultCentralServer = new QCheckBox(grbMeasureResults);
        chbDefaultCentralServer->setObjectName(QString::fromUtf8("chbDefaultCentralServer"));

        hboxLayout7->addWidget(chbDefaultCentralServer);


        verticalLayout_3->addLayout(hboxLayout7);

        edtCentralServerAddress = new QLineEdit(grbMeasureResults);
        edtCentralServerAddress->setObjectName(QString::fromUtf8("edtCentralServerAddress"));
        sizePolicy.setHeightForWidth(edtCentralServerAddress->sizePolicy().hasHeightForWidth());
        edtCentralServerAddress->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(edtCentralServerAddress);

        spacerItem5 = new QSpacerItem(201, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(spacerItem5);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        lblUpstream = new QLabel(grbMeasureResults);
        lblUpstream->setObjectName(QString::fromUtf8("lblUpstream"));

        hboxLayout8->addWidget(lblUpstream);

        lblUpstreamValue = new QLabel(grbMeasureResults);
        lblUpstreamValue->setObjectName(QString::fromUtf8("lblUpstreamValue"));
        lblUpstreamValue->setMinimumSize(QSize(0, 20));

        hboxLayout8->addWidget(lblUpstreamValue);


        verticalLayout_3->addLayout(hboxLayout8);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        lblPingTime = new QLabel(grbMeasureResults);
        lblPingTime->setObjectName(QString::fromUtf8("lblPingTime"));

        hboxLayout9->addWidget(lblPingTime);

        lblPingTimeValue = new QLabel(grbMeasureResults);
        lblPingTimeValue->setObjectName(QString::fromUtf8("lblPingTimeValue"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lblPingTimeValue->sizePolicy().hasHeightForWidth());
        lblPingTimeValue->setSizePolicy(sizePolicy4);
        lblPingTimeValue->setMinimumSize(QSize(50, 20));

        hboxLayout9->addWidget(lblPingTimeValue);


        verticalLayout_3->addLayout(hboxLayout9);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        lblOverallDelay = new QLabel(grbMeasureResults);
        lblOverallDelay->setObjectName(QString::fromUtf8("lblOverallDelay"));

        hboxLayout10->addWidget(lblOverallDelay);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setSpacing(3);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        lblOverallDelayValue = new QLabel(grbMeasureResults);
        lblOverallDelayValue->setObjectName(QString::fromUtf8("lblOverallDelayValue"));
        sizePolicy4.setHeightForWidth(lblOverallDelayValue->sizePolicy().hasHeightForWidth());
        lblOverallDelayValue->setSizePolicy(sizePolicy4);
        lblOverallDelayValue->setMinimumSize(QSize(50, 20));

        hboxLayout11->addWidget(lblOverallDelayValue);

        ledOverallDelay = new CMultiColorLED(grbMeasureResults);
        ledOverallDelay->setObjectName(QString::fromUtf8("ledOverallDelay"));
        sizePolicy3.setHeightForWidth(ledOverallDelay->sizePolicy().hasHeightForWidth());
        ledOverallDelay->setSizePolicy(sizePolicy3);
        ledOverallDelay->setMinimumSize(QSize(20, 20));
        ledOverallDelay->setMaximumSize(QSize(20, 20));

        hboxLayout11->addWidget(ledOverallDelay);


        hboxLayout10->addLayout(hboxLayout11);


        verticalLayout_3->addLayout(hboxLayout10);


        hboxLayout->addWidget(grbMeasureResults);

        QWidget::setTabOrder(cbxSoundcard, cbxLInChan);
        QWidget::setTabOrder(cbxLInChan, cbxRInChan);
        QWidget::setTabOrder(cbxRInChan, cbxLOutChan);
        QWidget::setTabOrder(cbxLOutChan, cbxROutChan);
        QWidget::setTabOrder(cbxROutChan, rbtBufferDelayPreferred);
        QWidget::setTabOrder(rbtBufferDelayPreferred, rbtBufferDelayDefault);
        QWidget::setTabOrder(rbtBufferDelayDefault, rbtBufferDelaySafe);
        QWidget::setTabOrder(rbtBufferDelaySafe, butDriverSetup);
        QWidget::setTabOrder(butDriverSetup, chbAutoJitBuf);
        QWidget::setTabOrder(chbAutoJitBuf, sldNetBuf);
        QWidget::setTabOrder(sldNetBuf, sldNetBufServer);
        QWidget::setTabOrder(sldNetBufServer, cbxAudioChannels);
        QWidget::setTabOrder(cbxAudioChannels, cbxAudioQuality);
        QWidget::setTabOrder(cbxAudioQuality, edtNewClientLevel);
        QWidget::setTabOrder(edtNewClientLevel, chbGUIDesignFancy);
        QWidget::setTabOrder(chbGUIDesignFancy, chbDefaultCentralServer);
        QWidget::setTabOrder(chbDefaultCentralServer, edtCentralServerAddress);

        retranslateUi(CClientSettingsDlgBase);

        QMetaObject::connectSlotsByName(CClientSettingsDlgBase);
    } // setupUi

    void retranslateUi(QDialog *CClientSettingsDlgBase)
    {
        CClientSettingsDlgBase->setWindowTitle(QApplication::translate("CClientSettingsDlgBase", "Settings", 0, QApplication::UnicodeUTF8));
        grbSoundCard->setTitle(QApplication::translate("CClientSettingsDlgBase", "Soundcard", 0, QApplication::UnicodeUTF8));
        lblSoundcardDevice->setText(QApplication::translate("CClientSettingsDlgBase", "Device", 0, QApplication::UnicodeUTF8));
        lblInChannelMapping->setText(QApplication::translate("CClientSettingsDlgBase", "Input Channel Mapping", 0, QApplication::UnicodeUTF8));
        lblLInChan->setText(QApplication::translate("CClientSettingsDlgBase", "L", 0, QApplication::UnicodeUTF8));
        lblRInChan->setText(QApplication::translate("CClientSettingsDlgBase", "R", 0, QApplication::UnicodeUTF8));
        lblOutChannelMapping->setText(QApplication::translate("CClientSettingsDlgBase", "Output Channel Mapping", 0, QApplication::UnicodeUTF8));
        lblLOutChan->setText(QApplication::translate("CClientSettingsDlgBase", "L", 0, QApplication::UnicodeUTF8));
        lblROutChan->setText(QApplication::translate("CClientSettingsDlgBase", "R", 0, QApplication::UnicodeUTF8));
        grbSoundCrdBufDelay->setTitle(QApplication::translate("CClientSettingsDlgBase", "Buffer Delay", 0, QApplication::UnicodeUTF8));
        rbtBufferDelayPreferred->setText(QApplication::translate("CClientSettingsDlgBase", "(preferred)", 0, QApplication::UnicodeUTF8));
        rbtBufferDelayDefault->setText(QApplication::translate("CClientSettingsDlgBase", "(default)", 0, QApplication::UnicodeUTF8));
        rbtBufferDelaySafe->setText(QApplication::translate("CClientSettingsDlgBase", "(safe)", 0, QApplication::UnicodeUTF8));
        butDriverSetup->setText(QApplication::translate("CClientSettingsDlgBase", "Driver Setup", 0, QApplication::UnicodeUTF8));
        grbJitterBuffer->setTitle(QApplication::translate("CClientSettingsDlgBase", "Jitter Buffer", 0, QApplication::UnicodeUTF8));
        chbAutoJitBuf->setText(QApplication::translate("CClientSettingsDlgBase", "Auto", 0, QApplication::UnicodeUTF8));
        lblNetBufLabel->setText(QApplication::translate("CClientSettingsDlgBase", "Local", 0, QApplication::UnicodeUTF8));
        lblNetBufServerLabel->setText(QApplication::translate("CClientSettingsDlgBase", "Server", 0, QApplication::UnicodeUTF8));
        lblNetBuf->setText(QApplication::translate("CClientSettingsDlgBase", "Size", 0, QApplication::UnicodeUTF8));
        lblNetBufServer->setText(QApplication::translate("CClientSettingsDlgBase", "Size", 0, QApplication::UnicodeUTF8));
        grbMeasureResults->setTitle(QApplication::translate("CClientSettingsDlgBase", "Misc", 0, QApplication::UnicodeUTF8));
        lblAudioChannels->setText(QApplication::translate("CClientSettingsDlgBase", "Audio Channels", 0, QApplication::UnicodeUTF8));
        lblAudioQuality->setText(QApplication::translate("CClientSettingsDlgBase", "Audio Quality", 0, QApplication::UnicodeUTF8));
        lblNewClientLevel->setText(QApplication::translate("CClientSettingsDlgBase", "New Client Level", 0, QApplication::UnicodeUTF8));
        lblPercentUnit->setText(QApplication::translate("CClientSettingsDlgBase", "%", 0, QApplication::UnicodeUTF8));
        chbGUIDesignFancy->setText(QApplication::translate("CClientSettingsDlgBase", "Fancy Skin", 0, QApplication::UnicodeUTF8));
        lblCentralServerAddress->setText(QApplication::translate("CClientSettingsDlgBase", "Central Server Address:", 0, QApplication::UnicodeUTF8));
        chbDefaultCentralServer->setText(QApplication::translate("CClientSettingsDlgBase", "Default", 0, QApplication::UnicodeUTF8));
        lblUpstream->setText(QApplication::translate("CClientSettingsDlgBase", "Audio Stream Rate", 0, QApplication::UnicodeUTF8));
        lblUpstreamValue->setText(QApplication::translate("CClientSettingsDlgBase", "val", 0, QApplication::UnicodeUTF8));
        lblPingTime->setText(QApplication::translate("CClientSettingsDlgBase", "Ping Time", 0, QApplication::UnicodeUTF8));
        lblPingTimeValue->setText(QApplication::translate("CClientSettingsDlgBase", "val", 0, QApplication::UnicodeUTF8));
        lblOverallDelay->setText(QApplication::translate("CClientSettingsDlgBase", "Overall Delay", 0, QApplication::UnicodeUTF8));
        lblOverallDelayValue->setText(QApplication::translate("CClientSettingsDlgBase", "val", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CClientSettingsDlgBase: public Ui_CClientSettingsDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTSETTINGSDLGBASE_H
