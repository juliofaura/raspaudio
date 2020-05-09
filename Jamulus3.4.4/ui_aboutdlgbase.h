/********************************************************************************
** Form generated from reading UI file 'aboutdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLGBASE_H
#define UI_ABOUTDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CAboutDlgBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout1;
    QLabel *PixmapLabelDreamLogo;
    QLabel *lblVersion;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout2;
    QLabel *lblAuthorNames;
    QLabel *lblCopyright;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout3;
    QLabel *pxlGigPicture;
    QSpacerItem *spacerItem1;
    QTextBrowser *txvCredits;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem2;
    QPushButton *buttonOk;

    void setupUi(QDialog *CAboutDlgBase)
    {
        if (CAboutDlgBase->objectName().isEmpty())
            CAboutDlgBase->setObjectName(QString::fromUtf8("CAboutDlgBase"));
        CAboutDlgBase->resize(630, 465);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CAboutDlgBase->sizePolicy().hasHeightForWidth());
        CAboutDlgBase->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/main/res/mainicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CAboutDlgBase->setWindowIcon(icon);
        CAboutDlgBase->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(CAboutDlgBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        PixmapLabelDreamLogo = new QLabel(CAboutDlgBase);
        PixmapLabelDreamLogo->setObjectName(QString::fromUtf8("PixmapLabelDreamLogo"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PixmapLabelDreamLogo->sizePolicy().hasHeightForWidth());
        PixmapLabelDreamLogo->setSizePolicy(sizePolicy1);
        PixmapLabelDreamLogo->setScaledContents(true);
        PixmapLabelDreamLogo->setWordWrap(false);

        hboxLayout1->addWidget(PixmapLabelDreamLogo);

        lblVersion = new QLabel(CAboutDlgBase);
        lblVersion->setObjectName(QString::fromUtf8("lblVersion"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblVersion->sizePolicy().hasHeightForWidth());
        lblVersion->setSizePolicy(sizePolicy2);
        lblVersion->setAlignment(Qt::AlignCenter);
        lblVersion->setWordWrap(false);

        hboxLayout1->addWidget(lblVersion);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        lblAuthorNames = new QLabel(CAboutDlgBase);
        lblAuthorNames->setObjectName(QString::fromUtf8("lblAuthorNames"));
        lblAuthorNames->setWordWrap(false);

        vboxLayout2->addWidget(lblAuthorNames);

        lblCopyright = new QLabel(CAboutDlgBase);
        lblCopyright->setObjectName(QString::fromUtf8("lblCopyright"));
        lblCopyright->setWordWrap(false);

        vboxLayout2->addWidget(lblCopyright);


        hboxLayout2->addLayout(vboxLayout2);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout2);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        pxlGigPicture = new QLabel(CAboutDlgBase);
        pxlGigPicture->setObjectName(QString::fromUtf8("pxlGigPicture"));
        pxlGigPicture->setPixmap(QPixmap(QString::fromUtf8(":/png/main/res/logopicture.png")));

        vboxLayout3->addWidget(pxlGigPicture);

        spacerItem1 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Minimum);

        vboxLayout3->addItem(spacerItem1);


        hboxLayout->addLayout(vboxLayout3);


        vboxLayout->addLayout(hboxLayout);

        txvCredits = new QTextBrowser(CAboutDlgBase);
        txvCredits->setObjectName(QString::fromUtf8("txvCredits"));

        vboxLayout->addWidget(txvCredits);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);

        buttonOk = new QPushButton(CAboutDlgBase);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout3->addWidget(buttonOk);


        vboxLayout->addLayout(hboxLayout3);

        QWidget::setTabOrder(buttonOk, txvCredits);

        retranslateUi(CAboutDlgBase);
        QObject::connect(buttonOk, SIGNAL(clicked()), CAboutDlgBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(CAboutDlgBase);
    } // setupUi

    void retranslateUi(QDialog *CAboutDlgBase)
    {
        CAboutDlgBase->setWindowTitle(QApplication::translate("CAboutDlgBase", "About", 0, QApplication::UnicodeUTF8));
        lblVersion->setText(QApplication::translate("CAboutDlgBase", "TextLabelVersion", 0, QApplication::UnicodeUTF8));
        lblAuthorNames->setText(QApplication::translate("CAboutDlgBase", "Author: Volker Fischer", 0, QApplication::UnicodeUTF8));
        lblCopyright->setText(QApplication::translate("CAboutDlgBase", "Copyright (C) 2005-2020", 0, QApplication::UnicodeUTF8));
        pxlGigPicture->setText(QString());
        buttonOk->setText(QApplication::translate("CAboutDlgBase", "&OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CAboutDlgBase: public Ui_CAboutDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLGBASE_H
