/********************************************************************************
** Form generated from reading UI file 'sidemenu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDEMENU_H
#define UI_SIDEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "button_icon.h"

QT_BEGIN_NAMESPACE

class Ui_sideMenu
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    ButtonIcon *import_profile_button;
    ButtonIcon *proxies_button;
    ButtonIcon *certif_button;
    ButtonIcon *settings_button;
    ButtonIcon *statistic_button;
    QSpacerItem *verticalSpacer;
    QLabel *version_label;

    void setupUi(QWidget *sideMenu)
    {
        if (sideMenu->objectName().isEmpty())
            sideMenu->setObjectName("sideMenu");
        sideMenu->resize(280, 650);
        sideMenu->setMaximumSize(QSize(16777215, 16777215));
        sideMenu->setAutoFillBackground(false);
        sideMenu->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(sideMenu);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 281, 651));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(40);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(20, 40, 20, 10);
        import_profile_button = new ButtonIcon(verticalLayoutWidget);
        import_profile_button->setObjectName("import_profile_button");
        import_profile_button->setIconSize(QSize(25, 25));

        verticalLayout->addWidget(import_profile_button);

        proxies_button = new ButtonIcon(verticalLayoutWidget);
        proxies_button->setObjectName("proxies_button");

        verticalLayout->addWidget(proxies_button);

        certif_button = new ButtonIcon(verticalLayoutWidget);
        certif_button->setObjectName("certif_button");

        verticalLayout->addWidget(certif_button);

        settings_button = new ButtonIcon(verticalLayoutWidget);
        settings_button->setObjectName("settings_button");

        verticalLayout->addWidget(settings_button);

        statistic_button = new ButtonIcon(verticalLayoutWidget);
        statistic_button->setObjectName("statistic_button");

        verticalLayout->addWidget(statistic_button);

        verticalSpacer = new QSpacerItem(20, 230, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        version_label = new QLabel(verticalLayoutWidget);
        version_label->setObjectName("version_label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(9);
        font.setBold(true);
        version_label->setFont(font);

        verticalLayout->addWidget(version_label);


        retranslateUi(sideMenu);

        QMetaObject::connectSlotsByName(sideMenu);
    } // setupUi

    void retranslateUi(QWidget *sideMenu)
    {
        sideMenu->setWindowTitle(QCoreApplication::translate("sideMenu", "Form", nullptr));
#if QT_CONFIG(accessibility)
        sideMenu->setAccessibleName(QCoreApplication::translate("sideMenu", "sideMenu", nullptr));
#endif // QT_CONFIG(accessibility)
        import_profile_button->setText(QCoreApplication::translate("sideMenu", "Import profile", nullptr));
        proxies_button->setText(QCoreApplication::translate("sideMenu", "Proxies", nullptr));
        certif_button->setText(QCoreApplication::translate("sideMenu", "Certificates && Tokens", nullptr));
        settings_button->setText(QCoreApplication::translate("sideMenu", "Settings", nullptr));
        statistic_button->setText(QCoreApplication::translate("sideMenu", "Statistics", nullptr));
        version_label->setText(QCoreApplication::translate("sideMenu", "Version 1.0.0 ( XXX )", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sideMenu: public Ui_sideMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEMENU_H
