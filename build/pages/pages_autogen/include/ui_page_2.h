/********************************************************************************
** Form generated from reading UI file 'page_2.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_2_H
#define UI_PAGE_2_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_2
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *proxy_pixmap;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QPushButton *add_proxy_button;

    void setupUi(QWidget *Page_2)
    {
        if (Page_2->objectName().isEmpty())
            Page_2->setObjectName("Page_2");
        Page_2->resize(400, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Page_2->sizePolicy().hasHeightForWidth());
        Page_2->setSizePolicy(sizePolicy);
        Page_2->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(Page_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 401, 601));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        proxy_pixmap = new QLabel(verticalLayoutWidget);
        proxy_pixmap->setObjectName("proxy_pixmap");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(proxy_pixmap->sizePolicy().hasHeightForWidth());
        proxy_pixmap->setSizePolicy(sizePolicy1);
        proxy_pixmap->setMinimumSize(QSize(220, 220));
        proxy_pixmap->setMaximumSize(QSize(240, 220));
        proxy_pixmap->setPixmap(QPixmap(QString::fromUtf8(":/icons/proxy_icon")));
        proxy_pixmap->setScaledContents(true);

        verticalLayout->addWidget(proxy_pixmap);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 16000));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        add_proxy_button = new QPushButton(verticalLayoutWidget);
        add_proxy_button->setObjectName("add_proxy_button");
        add_proxy_button->setMaximumSize(QSize(75, 75));
        add_proxy_button->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/plus_icon_blue_86"), QSize(), QIcon::Normal, QIcon::Off);
        add_proxy_button->setIcon(icon);
        add_proxy_button->setIconSize(QSize(86, 86));

        verticalLayout->addWidget(add_proxy_button);


        retranslateUi(Page_2);

        QMetaObject::connectSlotsByName(Page_2);
    } // setupUi

    void retranslateUi(QWidget *Page_2)
    {
        Page_2->setWindowTitle(QCoreApplication::translate("Page_2", "Form", nullptr));
        proxy_pixmap->setText(QString());
        label->setText(QCoreApplication::translate("Page_2", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">You have no proxy added yet</span></p></body></html>", nullptr));
        add_proxy_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Page_2: public Ui_Page_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_2_H
