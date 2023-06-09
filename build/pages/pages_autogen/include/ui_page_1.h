/********************************************************************************
** Form generated from reading UI file 'page_1.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_1_H
#define UI_PAGE_1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_1
{
public:
    QAction *action_move_widget1;
    QWidget *slider_container_widget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *url_subpage_widget;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLineEdit *line_edit_url;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QPushButton *next_button;
    QWidget *dropfile_subpage_widget;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *file_subpage_layout;
    QLabel *label_7;
    QLabel *cloud_pixmap;
    QPushButton *browse_button;
    QSpacerItem *verticalSpacer_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *url_subpage_layout;
    QPushButton *show_url_subpage_button;
    QPushButton *show_file_subpage_button;

    void setupUi(QWidget *Page_1)
    {
        if (Page_1->objectName().isEmpty())
            Page_1->setObjectName("Page_1");
        Page_1->resize(1073, 677);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Page_1->sizePolicy().hasHeightForWidth());
        Page_1->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka")});
        Page_1->setFont(font);
        action_move_widget1 = new QAction(Page_1);
        action_move_widget1->setObjectName("action_move_widget1");
        slider_container_widget = new QWidget(Page_1);
        slider_container_widget->setObjectName("slider_container_widget");
        slider_container_widget->setGeometry(QRect(0, 60, 891, 541));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(slider_container_widget->sizePolicy().hasHeightForWidth());
        slider_container_widget->setSizePolicy(sizePolicy1);
        horizontalLayoutWidget = new QWidget(slider_container_widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 802, 602));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        url_subpage_widget = new QWidget(horizontalLayoutWidget);
        url_subpage_widget->setObjectName("url_subpage_widget");
        sizePolicy1.setHeightForWidth(url_subpage_widget->sizePolicy().hasHeightForWidth());
        url_subpage_widget->setSizePolicy(sizePolicy1);
        url_subpage_widget->setMinimumSize(QSize(400, 600));
        url_subpage_widget->setMaximumSize(QSize(400, 600));
        verticalLayoutWidget_4 = new QWidget(url_subpage_widget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(0, 0, 401, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(20, 0, 20, 0);
        label_5 = new QLabel(verticalLayoutWidget_4);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka")});
        font1.setPointSize(14);
        label_5->setFont(font1);

        verticalLayout->addWidget(label_5);

        line_edit_url = new QLineEdit(verticalLayoutWidget_4);
        line_edit_url->setObjectName("line_edit_url");
        line_edit_url->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(14);
        line_edit_url->setFont(font2);

        verticalLayout->addWidget(line_edit_url);

        label_6 = new QLabel(verticalLayoutWidget_4);
        label_6->setObjectName("label_6");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Light")});
        label_6->setFont(font3);
        label_6->setWordWrap(true);

        verticalLayout->addWidget(label_6);

        verticalSpacer = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        next_button = new QPushButton(verticalLayoutWidget_4);
        next_button->setObjectName("next_button");
        sizePolicy1.setHeightForWidth(next_button->sizePolicy().hasHeightForWidth());
        next_button->setSizePolicy(sizePolicy1);
        next_button->setMinimumSize(QSize(350, 40));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(14);
        font4.setBold(true);
        next_button->setFont(font4);

        verticalLayout->addWidget(next_button);


        horizontalLayout->addWidget(url_subpage_widget);

        dropfile_subpage_widget = new QWidget(horizontalLayoutWidget);
        dropfile_subpage_widget->setObjectName("dropfile_subpage_widget");
        sizePolicy1.setHeightForWidth(dropfile_subpage_widget->sizePolicy().hasHeightForWidth());
        dropfile_subpage_widget->setSizePolicy(sizePolicy1);
        dropfile_subpage_widget->setMinimumSize(QSize(400, 600));
        dropfile_subpage_widget->setMaximumSize(QSize(400, 600));
        verticalLayoutWidget_5 = new QWidget(dropfile_subpage_widget);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(1, 0, 401, 541));
        file_subpage_layout = new QVBoxLayout(verticalLayoutWidget_5);
        file_subpage_layout->setObjectName("file_subpage_layout");
        file_subpage_layout->setContentsMargins(20, 0, 20, 0);
        label_7 = new QLabel(verticalLayoutWidget_5);
        label_7->setObjectName("label_7");
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setMaximumSize(QSize(16777215, 100));
        label_7->setFont(font3);
        label_7->setWordWrap(true);

        file_subpage_layout->addWidget(label_7);

        cloud_pixmap = new QLabel(verticalLayoutWidget_5);
        cloud_pixmap->setObjectName("cloud_pixmap");
        sizePolicy1.setHeightForWidth(cloud_pixmap->sizePolicy().hasHeightForWidth());
        cloud_pixmap->setSizePolicy(sizePolicy1);
        cloud_pixmap->setMinimumSize(QSize(220, 220));
        cloud_pixmap->setMaximumSize(QSize(240, 220));
        cloud_pixmap->setPixmap(QPixmap(QString::fromUtf8(":/icons/cloud_icon")));
        cloud_pixmap->setScaledContents(true);
        cloud_pixmap->setAlignment(Qt::AlignCenter);

        file_subpage_layout->addWidget(cloud_pixmap);

        browse_button = new QPushButton(verticalLayoutWidget_5);
        browse_button->setObjectName("browse_button");
        sizePolicy1.setHeightForWidth(browse_button->sizePolicy().hasHeightForWidth());
        browse_button->setSizePolicy(sizePolicy1);
        browse_button->setMinimumSize(QSize(125, 40));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI")});
        font5.setPointSize(18);
        browse_button->setFont(font5);

        file_subpage_layout->addWidget(browse_button);

        verticalSpacer_2 = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Fixed);

        file_subpage_layout->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(dropfile_subpage_widget);

        horizontalLayoutWidget_2 = new QWidget(Page_1);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, 0, 401, 61));
        url_subpage_layout = new QHBoxLayout(horizontalLayoutWidget_2);
        url_subpage_layout->setSpacing(20);
        url_subpage_layout->setObjectName("url_subpage_layout");
        url_subpage_layout->setContentsMargins(20, 0, 20, 0);
        show_url_subpage_button = new QPushButton(horizontalLayoutWidget_2);
        show_url_subpage_button->setObjectName("show_url_subpage_button");
        show_url_subpage_button->setMinimumSize(QSize(0, 45));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI")});
        font6.setPointSize(13);
        show_url_subpage_button->setFont(font6);

        url_subpage_layout->addWidget(show_url_subpage_button);

        show_file_subpage_button = new QPushButton(horizontalLayoutWidget_2);
        show_file_subpage_button->setObjectName("show_file_subpage_button");
        show_file_subpage_button->setMinimumSize(QSize(0, 45));
        show_file_subpage_button->setMaximumSize(QSize(16777215, 45));
        show_file_subpage_button->setFont(font6);
        show_file_subpage_button->setStyleSheet(QString::fromUtf8(""));

        url_subpage_layout->addWidget(show_file_subpage_button);


        retranslateUi(Page_1);

        QMetaObject::connectSlotsByName(Page_1);
    } // setupUi

    void retranslateUi(QWidget *Page_1)
    {
        Page_1->setWindowTitle(QCoreApplication::translate("Page_1", "Form", nullptr));
        action_move_widget1->setText(QCoreApplication::translate("Page_1", "move_widget1", nullptr));
#if QT_CONFIG(tooltip)
        action_move_widget1->setToolTip(QCoreApplication::translate("Page_1", "move_widget1", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("Page_1", "Url:", nullptr));
        line_edit_url->setText(QCoreApplication::translate("Page_1", "https://", nullptr));
        label_6->setText(QCoreApplication::translate("Page_1", "<html><head/><body><p><span style=\" font-size:14pt;\">Please note that you can only import profile using URL if it is supported by your VPN provider</span></p><p><br/></p></body></html>", nullptr));
        next_button->setText(QCoreApplication::translate("Page_1", "NEXT", nullptr));
        label_7->setText(QCoreApplication::translate("Page_1", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Drag and drop to upload .OVPN profile. You can only import one profile at a time.</span></p></body></html>", nullptr));
        cloud_pixmap->setText(QString());
        browse_button->setText(QCoreApplication::translate("Page_1", "BROWSE", nullptr));
        show_url_subpage_button->setText(QCoreApplication::translate("Page_1", "URL", nullptr));
        show_file_subpage_button->setText(QCoreApplication::translate("Page_1", "FILE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_1: public Ui_Page_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_1_H
