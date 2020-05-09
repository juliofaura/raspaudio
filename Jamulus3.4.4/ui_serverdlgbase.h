/********************************************************************************
** Form generated from reading UI file 'serverdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERDLGBASE_H
#define UI_SERVERDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CServerDlgBase
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *lvwClients;
    QCheckBox *chbStartOnOSStart;
    QCheckBox *chbRegisterServer;
    QHBoxLayout *hboxLayout;
    QLabel *lblCentralServerAddress;
    QLineEdit *edtCentralServerAddress;
    QCheckBox *chbDefaultCentralServer;
    QGroupBox *grbServerInfo;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout1;
    QLabel *lblServerName;
    QLabel *lblLocationCity;
    QLabel *lblLocationCountry;
    QVBoxLayout *vboxLayout2;
    QLineEdit *edtServerName;
    QLineEdit *edtLocationCity;
    QComboBox *cbxLocationCountry;
    QHBoxLayout *hboxLayout2;
    QLabel *lblNameVersion;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *CServerDlgBase)
    {
        if (CServerDlgBase->objectName().isEmpty())
            CServerDlgBase->setObjectName(QString::fromUtf8("CServerDlgBase"));
        CServerDlgBase->resize(588, 386);
        const QIcon icon = QIcon(QString::fromUtf8(":/png/main/res/mainicon.png"));
        CServerDlgBase->setWindowIcon(icon);
        CServerDlgBase->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(CServerDlgBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        lvwClients = new QTreeWidget(CServerDlgBase);
        lvwClients->setObjectName(QString::fromUtf8("lvwClients"));
        lvwClients->setRootIsDecorated(false);

        vboxLayout->addWidget(lvwClients);

        chbStartOnOSStart = new QCheckBox(CServerDlgBase);
        chbStartOnOSStart->setObjectName(QString::fromUtf8("chbStartOnOSStart"));

        vboxLayout->addWidget(chbStartOnOSStart);

        chbRegisterServer = new QCheckBox(CServerDlgBase);
        chbRegisterServer->setObjectName(QString::fromUtf8("chbRegisterServer"));

        vboxLayout->addWidget(chbRegisterServer);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lblCentralServerAddress = new QLabel(CServerDlgBase);
        lblCentralServerAddress->setObjectName(QString::fromUtf8("lblCentralServerAddress"));

        hboxLayout->addWidget(lblCentralServerAddress);

        edtCentralServerAddress = new QLineEdit(CServerDlgBase);
        edtCentralServerAddress->setObjectName(QString::fromUtf8("edtCentralServerAddress"));

        hboxLayout->addWidget(edtCentralServerAddress);

        chbDefaultCentralServer = new QCheckBox(CServerDlgBase);
        chbDefaultCentralServer->setObjectName(QString::fromUtf8("chbDefaultCentralServer"));

        hboxLayout->addWidget(chbDefaultCentralServer);


        vboxLayout->addLayout(hboxLayout);

        grbServerInfo = new QGroupBox(CServerDlgBase);
        grbServerInfo->setObjectName(QString::fromUtf8("grbServerInfo"));
        hboxLayout1 = new QHBoxLayout(grbServerInfo);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        lblServerName = new QLabel(grbServerInfo);
        lblServerName->setObjectName(QString::fromUtf8("lblServerName"));

        vboxLayout1->addWidget(lblServerName);

        lblLocationCity = new QLabel(grbServerInfo);
        lblLocationCity->setObjectName(QString::fromUtf8("lblLocationCity"));

        vboxLayout1->addWidget(lblLocationCity);

        lblLocationCountry = new QLabel(grbServerInfo);
        lblLocationCountry->setObjectName(QString::fromUtf8("lblLocationCountry"));

        vboxLayout1->addWidget(lblLocationCountry);


        hboxLayout1->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        edtServerName = new QLineEdit(grbServerInfo);
        edtServerName->setObjectName(QString::fromUtf8("edtServerName"));

        vboxLayout2->addWidget(edtServerName);

        edtLocationCity = new QLineEdit(grbServerInfo);
        edtLocationCity->setObjectName(QString::fromUtf8("edtLocationCity"));

        vboxLayout2->addWidget(edtLocationCity);

        cbxLocationCountry = new QComboBox(grbServerInfo);
        cbxLocationCountry->setObjectName(QString::fromUtf8("cbxLocationCountry"));

        vboxLayout2->addWidget(cbxLocationCountry);


        hboxLayout1->addLayout(vboxLayout2);


        vboxLayout->addWidget(grbServerInfo);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        lblNameVersion = new QLabel(CServerDlgBase);
        lblNameVersion->setObjectName(QString::fromUtf8("lblNameVersion"));
        lblNameVersion->setWordWrap(false);

        hboxLayout2->addWidget(lblNameVersion);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(CServerDlgBase);

        QMetaObject::connectSlotsByName(CServerDlgBase);
    } // setupUi

    void retranslateUi(QDialog *CServerDlgBase)
    {
        CServerDlgBase->setWindowTitle(QString());
        QTreeWidgetItem *___qtreewidgetitem = lvwClients->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("CServerDlgBase", "Block Size Out/ms", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("CServerDlgBase", "Jitter Buffer Size", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("CServerDlgBase", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("CServerDlgBase", "Client IP:Port", 0, QApplication::UnicodeUTF8));
        chbStartOnOSStart->setText(QApplication::translate("CServerDlgBase", "Start Minimized on Windows Start", 0, QApplication::UnicodeUTF8));
        chbRegisterServer->setText(QApplication::translate("CServerDlgBase", "Register My Server in the Server List at the Central Server", 0, QApplication::UnicodeUTF8));
        lblCentralServerAddress->setText(QApplication::translate("CServerDlgBase", "Central Server Address:", 0, QApplication::UnicodeUTF8));
        chbDefaultCentralServer->setText(QApplication::translate("CServerDlgBase", "Default", 0, QApplication::UnicodeUTF8));
        grbServerInfo->setTitle(QApplication::translate("CServerDlgBase", "My Server Info", 0, QApplication::UnicodeUTF8));
        lblServerName->setText(QApplication::translate("CServerDlgBase", "Name", 0, QApplication::UnicodeUTF8));
        lblLocationCity->setText(QApplication::translate("CServerDlgBase", "Location: City", 0, QApplication::UnicodeUTF8));
        lblLocationCountry->setText(QApplication::translate("CServerDlgBase", "Location: Country", 0, QApplication::UnicodeUTF8));
        lblNameVersion->setText(QApplication::translate("CServerDlgBase", "TextLabelNameVersion", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CServerDlgBase: public Ui_CServerDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERDLGBASE_H
