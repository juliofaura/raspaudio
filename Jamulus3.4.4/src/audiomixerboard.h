/******************************************************************************\
 * Copyright (c) 2004-2020
 *
 * Author(s):
 *  Volker Fischer
 *
 ******************************************************************************
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later 
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT 
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more 
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
\******************************************************************************/

#pragma once

#include <QFrame>
#include <QGroupBox>
#include <QLabel>
#include <QCheckBox>
#include <QLayout>
#include <QString>
#include <QSlider>
#include <QSizePolicy>
#include <QHostAddress>
#include "global.h"
#include "util.h"


/* Classes ********************************************************************/
class CChannelFader : public QObject
{
    Q_OBJECT

public:
    CChannelFader ( QWidget* pNW, QHBoxLayout* pParentLayout );

    void SetText ( const CChannelInfo& ChanInfo );
    QString GetReceivedName() { return strReceivedName; }
    void SetChannelInfos ( const CChannelInfo& cChanInfo );
    void Show() { pFrame->show(); }
    void Hide() { pFrame->hide(); }
    bool IsVisible() { return plblLabel->isVisible(); }
    bool IsSolo() { return pcbSolo->isChecked(); }
    void SetGUIDesign ( const EGUIDesign eNewDesign );

    void UpdateSoloState ( const bool bNewOtherSoloState );
    void SetFaderLevel ( const int iLevel );
    void SetFaderIsSolo ( const bool bIsSolo );
    int  GetFaderLevel() { return pFader->value(); }
    void Reset();

protected:
    double CalcFaderGain ( const int value );
    void   SetMute ( const bool bState );
    void   SendFaderLevelToServer ( const int iLevel );
    void   SetupFaderTag ( const ESkillLevel eSkillLevel );

    QFrame*    pFrame;
    QGroupBox* pLabelInstBox;
    QSlider*   pFader;
    QCheckBox* pcbMute;
    QCheckBox* pcbSolo;
    QLabel*    plblLabel;
    QLabel*    plblInstrument;
    QLabel*    plblCountryFlag;

    QString    strReceivedName;

    bool       bOtherChannelIsSolo;

public slots:
    void OnLevelValueChanged ( int value ) { SendFaderLevelToServer ( value ); }
    void OnMuteStateChanged ( int value );

signals:
    void gainValueChanged ( double value );
    void soloStateChanged ( int value );
};


class CAudioMixerBoard : public QGroupBox
{
    Q_OBJECT

public:
    CAudioMixerBoard ( QWidget* parent = nullptr, Qt::WindowFlags f = nullptr );

    void HideAll();
    void ApplyNewConClientList ( CVector<CChannelInfo>& vecChanInfo );
    void SetServerName ( const QString& strNewServerName );
    void SetGUIDesign ( const EGUIDesign eNewDesign );

    void SetFaderLevel ( const int iChannelIdx,
                         const int iValue );

    // settings
    CVector<QString> vecStoredFaderTags;
    CVector<int>     vecStoredFaderLevels;
    CVector<int>     vecStoredFaderIsSolo;
    int              iNewClientFaderLevel;

protected:
    bool GetStoredFaderSettings ( const CChannelInfo& ChanInfo,
                                  int&                iStoredFaderLevel,
                                  bool&               bStoredFaderIsSolo );
    void StoreFaderSettings ( CChannelFader* pChanFader );
    void UpdateSoloStates();

    void OnGainValueChanged ( const int    iChannelIdx,
                              const double dValue );

    CVector<CChannelFader*> vecpChanFader;
    QHBoxLayout*            pMainLayout;
    bool                    bNoFaderVisible;

public slots:
    // CODE TAG: MAX_NUM_CHANNELS_TAG
    // make sure we have MAX_NUM_CHANNELS connections!!!
    void OnGainValueChangedCh0  ( double dValue ) { OnGainValueChanged ( 0,  dValue ); }
    void OnGainValueChangedCh1  ( double dValue ) { OnGainValueChanged ( 1,  dValue ); }
    void OnGainValueChangedCh2  ( double dValue ) { OnGainValueChanged ( 2,  dValue ); }
    void OnGainValueChangedCh3  ( double dValue ) { OnGainValueChanged ( 3,  dValue ); }
    void OnGainValueChangedCh4  ( double dValue ) { OnGainValueChanged ( 4,  dValue ); }
    void OnGainValueChangedCh5  ( double dValue ) { OnGainValueChanged ( 5,  dValue ); }
    void OnGainValueChangedCh6  ( double dValue ) { OnGainValueChanged ( 6,  dValue ); }
    void OnGainValueChangedCh7  ( double dValue ) { OnGainValueChanged ( 7,  dValue ); }
    void OnGainValueChangedCh8  ( double dValue ) { OnGainValueChanged ( 8,  dValue ); }
    void OnGainValueChangedCh9  ( double dValue ) { OnGainValueChanged ( 9,  dValue ); }
    void OnGainValueChangedCh10 ( double dValue ) { OnGainValueChanged ( 10, dValue ); }
    void OnGainValueChangedCh11 ( double dValue ) { OnGainValueChanged ( 11, dValue ); }
    void OnGainValueChangedCh12 ( double dValue ) { OnGainValueChanged ( 12, dValue ); }
    void OnGainValueChangedCh13 ( double dValue ) { OnGainValueChanged ( 13, dValue ); }
    void OnGainValueChangedCh14 ( double dValue ) { OnGainValueChanged ( 14, dValue ); }
    void OnGainValueChangedCh15 ( double dValue ) { OnGainValueChanged ( 15, dValue ); }
    void OnGainValueChangedCh16 ( double dValue ) { OnGainValueChanged ( 16, dValue ); }
    void OnGainValueChangedCh17 ( double dValue ) { OnGainValueChanged ( 17, dValue ); }
    void OnGainValueChangedCh18 ( double dValue ) { OnGainValueChanged ( 18, dValue ); }
    void OnGainValueChangedCh19 ( double dValue ) { OnGainValueChanged ( 19, dValue ); }

    void OnChSoloStateChanged() { UpdateSoloStates(); }

signals:
    void ChangeChanGain ( int iId, double dGain );
    void NumClientsChanged ( int iNewNumClients );
};
