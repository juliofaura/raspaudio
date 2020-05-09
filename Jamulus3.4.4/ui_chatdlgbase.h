/********************************************************************************
** Form generated from reading UI file 'chatdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDLGBASE_H
#define UI_CHATDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CChatDlgBase
{
public:
    QVBoxLayout *vboxLayout;
    QTextBrowser *txvChatWindow;
    QLineEdit *edtLocalInputText;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *butClear;
    QPushButton *buttonClose;

    void setupUi(QDialog *CChatDlgBase)
    {
        if (CChatDlgBase->objectName().isEmpty())
            CChatDlgBase->setObjectName(QString::fromUtf8("CChatDlgBase"));
        CChatDlgBase->resize(435, 405);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CChatDlgBase->sizePolicy().hasHeightForWidth());
        CChatDlgBase->setSizePolicy(sizePolicy);
        const QIcon icon = QIcon(QString::fromUtf8(":/png/main/res/mainicon.png"));
        CChatDlgBase->setWindowIcon(icon);
        CChatDlgBase->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(CChatDlgBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        txvChatWindow = new QTextBrowser(CChatDlgBase);
        txvChatWindow->setObjectName(QString::fromUtf8("txvChatWindow"));
        txvChatWindow->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::NoTextInteraction|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        vboxLayout->addWidget(txvChatWindow);

        edtLocalInputText = new QLineEdit(CChatDlgBase);
        edtLocalInputText->setObjectName(QString::fromUtf8("edtLocalInputText"));

        vboxLayout->addWidget(edtLocalInputText);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(181, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        butClear = new QPushButton(CChatDlgBase);
        butClear->setObjectName(QString::fromUtf8("butClear"));
        butClear->setAutoDefault(false);

        hboxLayout->addWidget(butClear);

        buttonClose = new QPushButton(CChatDlgBase);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));
        buttonClose->setAutoDefault(false);
        buttonClose->setDefault(false);

        hboxLayout->addWidget(buttonClose);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(edtLocalInputText, txvChatWindow);
        QWidget::setTabOrder(txvChatWindow, butClear);
        QWidget::setTabOrder(butClear, buttonClose);

        retranslateUi(CChatDlgBase);
        QObject::connect(buttonClose, SIGNAL(clicked()), CChatDlgBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(CChatDlgBase);
    } // setupUi

    void retranslateUi(QDialog *CChatDlgBase)
    {
        CChatDlgBase->setWindowTitle(QApplication::translate("CChatDlgBase", "Chat", 0, QApplication::UnicodeUTF8));
        butClear->setText(QApplication::translate("CChatDlgBase", "Cl&ear", 0, QApplication::UnicodeUTF8));
        buttonClose->setText(QApplication::translate("CChatDlgBase", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CChatDlgBase: public Ui_CChatDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDLGBASE_H
