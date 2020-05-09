/********************************************************************************
** Form generated from reading UI file 'connectdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDLGBASE_H
#define UI_CONNECTDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CConnectDlgBase
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *lvwServers;
    QHBoxLayout *hboxLayout;
    QLabel *lblServerAddr;
    QComboBox *cbxServerAddr;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *butCancel;
    QPushButton *butConnect;

    void setupUi(QDialog *CConnectDlgBase)
    {
        if (CConnectDlgBase->objectName().isEmpty())
            CConnectDlgBase->setObjectName(QString::fromUtf8("CConnectDlgBase"));
        CConnectDlgBase->resize(521, 294);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/main/res/mainicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CConnectDlgBase->setWindowIcon(icon);
        CConnectDlgBase->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(CConnectDlgBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        lvwServers = new QTreeWidget(CConnectDlgBase);
        lvwServers->setObjectName(QString::fromUtf8("lvwServers"));
        lvwServers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvwServers->setTabKeyNavigation(true);

        vboxLayout->addWidget(lvwServers);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lblServerAddr = new QLabel(CConnectDlgBase);
        lblServerAddr->setObjectName(QString::fromUtf8("lblServerAddr"));
        lblServerAddr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(lblServerAddr);

        cbxServerAddr = new QComboBox(CConnectDlgBase);
        cbxServerAddr->setObjectName(QString::fromUtf8("cbxServerAddr"));
        cbxServerAddr->setEditable(true);

        hboxLayout->addWidget(cbxServerAddr);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem = new QSpacerItem(351, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        butCancel = new QPushButton(CConnectDlgBase);
        butCancel->setObjectName(QString::fromUtf8("butCancel"));

        hboxLayout1->addWidget(butCancel);

        butConnect = new QPushButton(CConnectDlgBase);
        butConnect->setObjectName(QString::fromUtf8("butConnect"));
        butConnect->setDefault(true);

        hboxLayout1->addWidget(butConnect);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(CConnectDlgBase);

        QMetaObject::connectSlotsByName(CConnectDlgBase);
    } // setupUi

    void retranslateUi(QDialog *CConnectDlgBase)
    {
        CConnectDlgBase->setWindowTitle(QApplication::translate("CConnectDlgBase", "Connection Setup", 0, QApplication::UnicodeUTF8));
        CConnectDlgBase->setStyleSheet(QString());
        QTreeWidgetItem *___qtreewidgetitem = lvwServers->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("CConnectDlgBase", "Location", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("CConnectDlgBase", "Musicians", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("CConnectDlgBase", "Ping Time", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("CConnectDlgBase", "Server Name", 0, QApplication::UnicodeUTF8));
        lblServerAddr->setText(QApplication::translate("CConnectDlgBase", "Server Name/Address", 0, QApplication::UnicodeUTF8));
        butCancel->setText(QApplication::translate("CConnectDlgBase", "C&ancel", 0, QApplication::UnicodeUTF8));
        butConnect->setText(QApplication::translate("CConnectDlgBase", "&Connect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CConnectDlgBase: public Ui_CConnectDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDLGBASE_H
