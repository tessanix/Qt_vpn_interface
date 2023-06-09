/********************************************************************************
** Form generated from reading UI file 'page_3.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_3_H
#define UI_PAGE_3_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_3
{
public:
    QAction *action_move_widget1;
    QWidget *slider_container_widget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *pkcs_subpage_widget;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *pkcs_subpage_layout;
    QSpacerItem *verticalSpacer_2;
    QLabel *certificate_label_pixmap;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QPushButton *add_certificate_button;
    QWidget *hardware_subpage_widget;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *hardware_subpage_layout;
    QSpacerItem *verticalSpacer_4;
    QLabel *hardware_label_pixmap;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *show_subpage_pkcs_button;
    QPushButton *show_subpage_hardware_button;

    void setupUi(QWidget *Page_3)
    {
        if (Page_3->objectName().isEmpty())
            Page_3->setObjectName("Page_3");
        Page_3->resize(850, 609);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Page_3->sizePolicy().hasHeightForWidth());
        Page_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka")});
        Page_3->setFont(font);
        action_move_widget1 = new QAction(Page_3);
        action_move_widget1->setObjectName("action_move_widget1");
        slider_container_widget = new QWidget(Page_3);
        slider_container_widget->setObjectName("slider_container_widget");
        slider_container_widget->setGeometry(QRect(0, 60, 800, 600));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(slider_container_widget->sizePolicy().hasHeightForWidth());
        slider_container_widget->setSizePolicy(sizePolicy1);
        slider_container_widget->setMinimumSize(QSize(800, 0));
        slider_container_widget->setMaximumSize(QSize(800, 16777215));
        horizontalLayoutWidget = new QWidget(slider_container_widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 802, 602));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pkcs_subpage_widget = new QWidget(horizontalLayoutWidget);
        pkcs_subpage_widget->setObjectName("pkcs_subpage_widget");
        sizePolicy1.setHeightForWidth(pkcs_subpage_widget->sizePolicy().hasHeightForWidth());
        pkcs_subpage_widget->setSizePolicy(sizePolicy1);
        pkcs_subpage_widget->setMinimumSize(QSize(400, 600));
        pkcs_subpage_widget->setMaximumSize(QSize(400, 600));
        verticalLayoutWidget_4 = new QWidget(pkcs_subpage_widget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(0, 0, 401, 541));
        pkcs_subpage_layout = new QVBoxLayout(verticalLayoutWidget_4);
        pkcs_subpage_layout->setObjectName("pkcs_subpage_layout");
        pkcs_subpage_layout->setContentsMargins(20, 0, 20, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        pkcs_subpage_layout->addItem(verticalSpacer_2);

        certificate_label_pixmap = new QLabel(verticalLayoutWidget_4);
        certificate_label_pixmap->setObjectName("certificate_label_pixmap");
        sizePolicy1.setHeightForWidth(certificate_label_pixmap->sizePolicy().hasHeightForWidth());
        certificate_label_pixmap->setSizePolicy(sizePolicy1);
        certificate_label_pixmap->setMinimumSize(QSize(200, 220));
        certificate_label_pixmap->setMaximumSize(QSize(200, 220));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka")});
        font1.setPointSize(14);
        certificate_label_pixmap->setFont(font1);
        certificate_label_pixmap->setPixmap(QPixmap(QString::fromUtf8(":/icons/policy_icon")));
        certificate_label_pixmap->setScaledContents(true);
        certificate_label_pixmap->setAlignment(Qt::AlignCenter);

        pkcs_subpage_layout->addWidget(certificate_label_pixmap);

        label_6 = new QLabel(verticalLayoutWidget_4);
        label_6->setObjectName("label_6");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);

        pkcs_subpage_layout->addWidget(label_6);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        pkcs_subpage_layout->addItem(verticalSpacer);

        add_certificate_button = new QPushButton(verticalLayoutWidget_4);
        add_certificate_button->setObjectName("add_certificate_button");
        sizePolicy1.setHeightForWidth(add_certificate_button->sizePolicy().hasHeightForWidth());
        add_certificate_button->setSizePolicy(sizePolicy1);
        add_certificate_button->setMinimumSize(QSize(350, 40));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(14);
        font3.setBold(true);
        add_certificate_button->setFont(font3);

        pkcs_subpage_layout->addWidget(add_certificate_button);


        horizontalLayout->addWidget(pkcs_subpage_widget);

        hardware_subpage_widget = new QWidget(horizontalLayoutWidget);
        hardware_subpage_widget->setObjectName("hardware_subpage_widget");
        sizePolicy1.setHeightForWidth(hardware_subpage_widget->sizePolicy().hasHeightForWidth());
        hardware_subpage_widget->setSizePolicy(sizePolicy1);
        hardware_subpage_widget->setMinimumSize(QSize(400, 600));
        hardware_subpage_widget->setMaximumSize(QSize(400, 600));
        verticalLayoutWidget_5 = new QWidget(hardware_subpage_widget);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(0, -10, 401, 551));
        hardware_subpage_layout = new QVBoxLayout(verticalLayoutWidget_5);
        hardware_subpage_layout->setObjectName("hardware_subpage_layout");
        hardware_subpage_layout->setContentsMargins(20, 0, 20, 0);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        hardware_subpage_layout->addItem(verticalSpacer_4);

        hardware_label_pixmap = new QLabel(verticalLayoutWidget_5);
        hardware_label_pixmap->setObjectName("hardware_label_pixmap");
        sizePolicy1.setHeightForWidth(hardware_label_pixmap->sizePolicy().hasHeightForWidth());
        hardware_label_pixmap->setSizePolicy(sizePolicy1);
        hardware_label_pixmap->setMinimumSize(QSize(220, 220));
        hardware_label_pixmap->setMaximumSize(QSize(220, 220));
        hardware_label_pixmap->setPixmap(QPixmap(QString::fromUtf8(":/icons/hardware_icon")));
        hardware_label_pixmap->setScaledContents(true);
        hardware_label_pixmap->setAlignment(Qt::AlignCenter);

        hardware_subpage_layout->addWidget(hardware_label_pixmap);

        label_7 = new QLabel(verticalLayoutWidget_5);
        label_7->setObjectName("label_7");
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMaximumSize(QSize(16777215, 100));
        label_7->setFont(font2);
        label_7->setWordWrap(true);

        hardware_subpage_layout->addWidget(label_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        hardware_subpage_layout->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(hardware_subpage_widget);

        horizontalLayoutWidget_2 = new QWidget(Page_3);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, 0, 401, 61));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(20, 0, 20, 0);
        show_subpage_pkcs_button = new QPushButton(horizontalLayoutWidget_2);
        show_subpage_pkcs_button->setObjectName("show_subpage_pkcs_button");
        show_subpage_pkcs_button->setMinimumSize(QSize(0, 45));
        show_subpage_pkcs_button->setMaximumSize(QSize(16777215, 45));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(13);
        show_subpage_pkcs_button->setFont(font4);

        horizontalLayout_2->addWidget(show_subpage_pkcs_button);

        show_subpage_hardware_button = new QPushButton(horizontalLayoutWidget_2);
        show_subpage_hardware_button->setObjectName("show_subpage_hardware_button");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(45);
        sizePolicy3.setHeightForWidth(show_subpage_hardware_button->sizePolicy().hasHeightForWidth());
        show_subpage_hardware_button->setSizePolicy(sizePolicy3);
        show_subpage_hardware_button->setMaximumSize(QSize(16777215, 45));
        show_subpage_hardware_button->setFont(font4);

        horizontalLayout_2->addWidget(show_subpage_hardware_button);


        retranslateUi(Page_3);

        QMetaObject::connectSlotsByName(Page_3);
    } // setupUi

    void retranslateUi(QWidget *Page_3)
    {
        Page_3->setWindowTitle(QCoreApplication::translate("Page_3", "Form", nullptr));
        action_move_widget1->setText(QCoreApplication::translate("Page_3", "move_widget1", nullptr));
#if QT_CONFIG(tooltip)
        action_move_widget1->setToolTip(QCoreApplication::translate("Page_3", "move_widget1", nullptr));
#endif // QT_CONFIG(tooltip)
        certificate_label_pixmap->setText(QString());
        label_6->setText(QCoreApplication::translate("Page_3", "<html><head/><body><p><span style=\" font-size:14pt;\">No external certificate imported </span></p></body></html>", nullptr));
        add_certificate_button->setText(QCoreApplication::translate("Page_3", "ADD CERTIFICATE", nullptr));
        hardware_label_pixmap->setText(QString());
        label_7->setText(QCoreApplication::translate("Page_3", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">No hardware tokens detected</span></p></body></html>", nullptr));
        show_subpage_pkcs_button->setText(QCoreApplication::translate("Page_3", "PKCS #12", nullptr));
        show_subpage_hardware_button->setText(QCoreApplication::translate("Page_3", "HARDWARE TOKENS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_3: public Ui_Page_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_3_H
