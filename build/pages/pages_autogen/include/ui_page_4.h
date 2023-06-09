/********************************************************************************
** Form generated from reading UI file 'page_4.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_4_H
#define UI_PAGE_4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_4
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidget_settings;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *main_vertical_layout;
    QPushButton *set_disconnect_shortcut_button;
    QLabel *title_section_deviceID;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *identifier_label;
    QLabel *identifier_pixmap;
    QLabel *title_section_vpn_proto;
    QLabel *label_2;
    QGridLayout *h_layout_vpn_proto_section;
    QPushButton *tcp_button;
    QPushButton *adapt_button;
    QPushButton *udp_button;
    QLabel *title_section_connect_timeout;
    QLabel *label_3;
    QGridLayout *grid_layout_connect_timeout_section;
    QPushButton *button_10_sec;
    QPushButton *button_30_sec;
    QPushButton *button_cont_retry;
    QPushButton *button_1_min;
    QPushButton *button_2_min;
    QLabel *title_section_launch_options;
    QLabel *label_4;
    QRadioButton *radioButton;
    QLabel *label_5;
    QRadioButton *radioButton_2;
    QLabel *label_6;
    QRadioButton *radioButton_3;
    QLabel *label_7;
    QRadioButton *radioButton_4;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *title_section_seamless_tunnel;
    QCheckBox *checkBox_5;
    QLabel *label_21;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox_6;
    QLabel *label_8;
    QLabel *title_section_shortcut_min;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBox_7;
    QLabel *title_section_portal_detect;
    QLabel *label_9;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *title_section_software_update;
    QLabel *label_12;
    QGridLayout *grid_layout_software_update_section;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QLabel *title_section_theme;
    QLabel *label_16;
    QGridLayout *grid_layout_theme_color_section;
    QPushButton *pushButton_14;
    QPushButton *darkMode_button;
    QPushButton *lightMode_button;
    QLabel *title_section_tray_icon_style;
    QLabel *label_17;
    QHBoxLayout *h_layout_tray_icon_style_section;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QLabel *title_section_confirm_dialogs;
    QLabel *label_18;
    QGridLayout *grid_layout_confirm_dialogs_section;
    QPushButton *pushButton_26;
    QPushButton *pushButton_25;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkBox_8;
    QLabel *title_section_crash_report;
    QLabel *label_24;

    void setupUi(QWidget *Page_4)
    {
        if (Page_4->objectName().isEmpty())
            Page_4->setObjectName("Page_4");
        Page_4->resize(1129, 1500);
        Page_4->setStyleSheet(QString::fromUtf8(""));
        scrollArea = new QScrollArea(Page_4);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, -1, 400, 601));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setAutoFillBackground(false);
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidget_settings = new QWidget();
        scrollAreaWidget_settings->setObjectName("scrollAreaWidget_settings");
        scrollAreaWidget_settings->setGeometry(QRect(0, -747, 384, 1700));
        scrollAreaWidget_settings->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget_2 = new QWidget(scrollAreaWidget_settings);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 0, 371, 1691));
        main_vertical_layout = new QVBoxLayout(verticalLayoutWidget_2);
        main_vertical_layout->setObjectName("main_vertical_layout");
        main_vertical_layout->setContentsMargins(0, 10, 0, 10);
        set_disconnect_shortcut_button = new QPushButton(verticalLayoutWidget_2);
        set_disconnect_shortcut_button->setObjectName("set_disconnect_shortcut_button");

        main_vertical_layout->addWidget(set_disconnect_shortcut_button);

        title_section_deviceID = new QLabel(verticalLayoutWidget_2);
        title_section_deviceID->setObjectName("title_section_deviceID");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        title_section_deviceID->setFont(font);
        title_section_deviceID->setMouseTracking(true);
        title_section_deviceID->setWordWrap(false);

        main_vertical_layout->addWidget(title_section_deviceID);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName("label");
        label->setMaximumSize(QSize(400, 16777215));
        label->setWordWrap(true);

        main_vertical_layout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        identifier_label = new QLabel(verticalLayoutWidget_2);
        identifier_label->setObjectName("identifier_label");
        identifier_label->setAlignment(Qt::AlignCenter);
        identifier_label->setWordWrap(true);

        horizontalLayout->addWidget(identifier_label);

        identifier_pixmap = new QLabel(verticalLayoutWidget_2);
        identifier_pixmap->setObjectName("identifier_pixmap");
        identifier_pixmap->setEnabled(true);
        identifier_pixmap->setMaximumSize(QSize(20, 20));
        identifier_pixmap->setPixmap(QPixmap(QString::fromUtf8(":/icons/copy_icon_1")));
        identifier_pixmap->setScaledContents(true);

        horizontalLayout->addWidget(identifier_pixmap);


        main_vertical_layout->addLayout(horizontalLayout);

        title_section_vpn_proto = new QLabel(verticalLayoutWidget_2);
        title_section_vpn_proto->setObjectName("title_section_vpn_proto");
        title_section_vpn_proto->setFont(font);

        main_vertical_layout->addWidget(title_section_vpn_proto);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        main_vertical_layout->addWidget(label_2);

        h_layout_vpn_proto_section = new QGridLayout();
        h_layout_vpn_proto_section->setObjectName("h_layout_vpn_proto_section");
        h_layout_vpn_proto_section->setSizeConstraint(QLayout::SetDefaultConstraint);
        h_layout_vpn_proto_section->setHorizontalSpacing(20);
        h_layout_vpn_proto_section->setVerticalSpacing(10);
        h_layout_vpn_proto_section->setContentsMargins(10, -1, 10, -1);
        tcp_button = new QPushButton(verticalLayoutWidget_2);
        tcp_button->setObjectName("tcp_button");
        tcp_button->setMaximumSize(QSize(120, 16777215));
        tcp_button->setCheckable(true);
        tcp_button->setChecked(false);

        h_layout_vpn_proto_section->addWidget(tcp_button, 0, 1, 1, 1);

        adapt_button = new QPushButton(verticalLayoutWidget_2);
        adapt_button->setObjectName("adapt_button");
        sizePolicy.setHeightForWidth(adapt_button->sizePolicy().hasHeightForWidth());
        adapt_button->setSizePolicy(sizePolicy);
        adapt_button->setMinimumSize(QSize(180, 0));
        adapt_button->setMaximumSize(QSize(16777215, 16777215));
        adapt_button->setCheckable(true);
        adapt_button->setChecked(true);

        h_layout_vpn_proto_section->addWidget(adapt_button, 0, 0, 1, 1);

        udp_button = new QPushButton(verticalLayoutWidget_2);
        udp_button->setObjectName("udp_button");
        udp_button->setMaximumSize(QSize(120, 16777215));

        h_layout_vpn_proto_section->addWidget(udp_button, 1, 0, 1, 1);


        main_vertical_layout->addLayout(h_layout_vpn_proto_section);

        title_section_connect_timeout = new QLabel(verticalLayoutWidget_2);
        title_section_connect_timeout->setObjectName("title_section_connect_timeout");
        title_section_connect_timeout->setFont(font);

        main_vertical_layout->addWidget(title_section_connect_timeout);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName("label_3");
        label_3->setWordWrap(true);

        main_vertical_layout->addWidget(label_3);

        grid_layout_connect_timeout_section = new QGridLayout();
        grid_layout_connect_timeout_section->setObjectName("grid_layout_connect_timeout_section");
        grid_layout_connect_timeout_section->setHorizontalSpacing(20);
        grid_layout_connect_timeout_section->setVerticalSpacing(15);
        grid_layout_connect_timeout_section->setContentsMargins(10, -1, 10, -1);
        button_10_sec = new QPushButton(verticalLayoutWidget_2);
        button_10_sec->setObjectName("button_10_sec");

        grid_layout_connect_timeout_section->addWidget(button_10_sec, 0, 0, 1, 1);

        button_30_sec = new QPushButton(verticalLayoutWidget_2);
        button_30_sec->setObjectName("button_30_sec");

        grid_layout_connect_timeout_section->addWidget(button_30_sec, 0, 1, 1, 1);

        button_cont_retry = new QPushButton(verticalLayoutWidget_2);
        button_cont_retry->setObjectName("button_cont_retry");

        grid_layout_connect_timeout_section->addWidget(button_cont_retry, 4, 0, 1, 2);

        button_1_min = new QPushButton(verticalLayoutWidget_2);
        button_1_min->setObjectName("button_1_min");
        button_1_min->setCheckable(true);
        button_1_min->setChecked(true);

        grid_layout_connect_timeout_section->addWidget(button_1_min, 2, 0, 1, 1);

        button_2_min = new QPushButton(verticalLayoutWidget_2);
        button_2_min->setObjectName("button_2_min");

        grid_layout_connect_timeout_section->addWidget(button_2_min, 2, 1, 1, 1);


        main_vertical_layout->addLayout(grid_layout_connect_timeout_section);

        title_section_launch_options = new QLabel(verticalLayoutWidget_2);
        title_section_launch_options->setObjectName("title_section_launch_options");
        title_section_launch_options->setFont(font);
        title_section_launch_options->setWordWrap(true);

        main_vertical_layout->addWidget(title_section_launch_options);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setWordWrap(true);

        main_vertical_layout->addWidget(label_4);

        radioButton = new QRadioButton(verticalLayoutWidget_2);
        radioButton->setObjectName("radioButton");

        main_vertical_layout->addWidget(radioButton);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_5->setIndent(20);

        main_vertical_layout->addWidget(label_5);

        radioButton_2 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_2->setObjectName("radioButton_2");

        main_vertical_layout->addWidget(radioButton_2);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setScaledContents(false);
        label_6->setWordWrap(true);
        label_6->setIndent(20);

        main_vertical_layout->addWidget(label_6);

        radioButton_3 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_3->setObjectName("radioButton_3");

        main_vertical_layout->addWidget(radioButton_3);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setWordWrap(true);
        label_7->setIndent(20);

        main_vertical_layout->addWidget(label_7);

        radioButton_4 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_4->setObjectName("radioButton_4");

        main_vertical_layout->addWidget(radioButton_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        title_section_seamless_tunnel = new QLabel(verticalLayoutWidget_2);
        title_section_seamless_tunnel->setObjectName("title_section_seamless_tunnel");
        title_section_seamless_tunnel->setFont(font);

        gridLayout->addWidget(title_section_seamless_tunnel, 0, 0, 1, 2);

        checkBox_5 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_5->setObjectName("checkBox_5");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox_5->sizePolicy().hasHeightForWidth());
        checkBox_5->setSizePolicy(sizePolicy1);
        checkBox_5->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(9);
        checkBox_5->setFont(font1);
        checkBox_5->setIconSize(QSize(16, 16));
        checkBox_5->setAutoExclusive(false);
        checkBox_5->setTristate(false);

        gridLayout->addWidget(checkBox_5, 2, 3, 1, 1);

        label_21 = new QLabel(verticalLayoutWidget_2);
        label_21->setObjectName("label_21");
        label_21->setScaledContents(false);
        label_21->setWordWrap(true);

        gridLayout->addWidget(label_21, 2, 0, 1, 2);


        main_vertical_layout->addLayout(gridLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        checkBox_6 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_6->setObjectName("checkBox_6");
        sizePolicy1.setHeightForWidth(checkBox_6->sizePolicy().hasHeightForWidth());
        checkBox_6->setSizePolicy(sizePolicy1);
        checkBox_6->setMinimumSize(QSize(0, 0));
        checkBox_6->setFont(font1);
        checkBox_6->setIconSize(QSize(16, 16));
        checkBox_6->setAutoExclusive(false);
        checkBox_6->setTristate(false);

        gridLayout_3->addWidget(checkBox_6, 2, 3, 1, 1);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setWordWrap(true);

        gridLayout_3->addWidget(label_8, 2, 0, 1, 1);

        title_section_shortcut_min = new QLabel(verticalLayoutWidget_2);
        title_section_shortcut_min->setObjectName("title_section_shortcut_min");
        title_section_shortcut_min->setFont(font);

        gridLayout_3->addWidget(title_section_shortcut_min, 0, 0, 1, 1);


        main_vertical_layout->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_3 = new QSpacerItem(43, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        checkBox_7 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_7->setObjectName("checkBox_7");
        sizePolicy1.setHeightForWidth(checkBox_7->sizePolicy().hasHeightForWidth());
        checkBox_7->setSizePolicy(sizePolicy1);
        checkBox_7->setMinimumSize(QSize(0, 0));
        checkBox_7->setFont(font1);
        checkBox_7->setIconSize(QSize(16, 16));
        checkBox_7->setAutoExclusive(false);
        checkBox_7->setTristate(false);

        gridLayout_4->addWidget(checkBox_7, 2, 3, 1, 1);

        title_section_portal_detect = new QLabel(verticalLayoutWidget_2);
        title_section_portal_detect->setObjectName("title_section_portal_detect");
        title_section_portal_detect->setFont(font);

        gridLayout_4->addWidget(title_section_portal_detect, 0, 0, 1, 1);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setWordWrap(true);

        gridLayout_4->addWidget(label_9, 1, 0, 2, 1);


        main_vertical_layout->addLayout(gridLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName("label_13");
        QFont font2;
        font2.setBold(true);
        label_13->setFont(font2);

        gridLayout_2->addWidget(label_13, 1, 1, 1, 1);

        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName("label_14");
        QFont font3;
        font3.setUnderline(true);
        label_14->setFont(font3);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_14, 1, 2, 1, 1);

        label_15 = new QLabel(verticalLayoutWidget_2);
        label_15->setObjectName("label_15");
        label_15->setWordWrap(true);

        gridLayout_2->addWidget(label_15, 2, 0, 1, 3);

        title_section_software_update = new QLabel(verticalLayoutWidget_2);
        title_section_software_update->setObjectName("title_section_software_update");
        title_section_software_update->setFont(font);

        gridLayout_2->addWidget(title_section_software_update, 0, 0, 1, 2);

        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName("label_12");
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMaximumSize(QSize(32, 32));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/icons/update_icon_1")));
        label_12->setScaledContents(true);

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);


        main_vertical_layout->addLayout(gridLayout_2);

        grid_layout_software_update_section = new QGridLayout();
        grid_layout_software_update_section->setObjectName("grid_layout_software_update_section");
        grid_layout_software_update_section->setHorizontalSpacing(20);
        grid_layout_software_update_section->setVerticalSpacing(15);
        grid_layout_software_update_section->setContentsMargins(10, -1, 10, -1);
        pushButton_10 = new QPushButton(verticalLayoutWidget_2);
        pushButton_10->setObjectName("pushButton_10");

        grid_layout_software_update_section->addWidget(pushButton_10, 0, 0, 1, 1);

        pushButton_11 = new QPushButton(verticalLayoutWidget_2);
        pushButton_11->setObjectName("pushButton_11");

        grid_layout_software_update_section->addWidget(pushButton_11, 0, 1, 1, 1);

        pushButton_12 = new QPushButton(verticalLayoutWidget_2);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setCheckable(true);
        pushButton_12->setChecked(true);

        grid_layout_software_update_section->addWidget(pushButton_12, 1, 0, 1, 1);

        pushButton_13 = new QPushButton(verticalLayoutWidget_2);
        pushButton_13->setObjectName("pushButton_13");

        grid_layout_software_update_section->addWidget(pushButton_13, 1, 1, 1, 1);


        main_vertical_layout->addLayout(grid_layout_software_update_section);

        title_section_theme = new QLabel(verticalLayoutWidget_2);
        title_section_theme->setObjectName("title_section_theme");
        title_section_theme->setFont(font);

        main_vertical_layout->addWidget(title_section_theme);

        label_16 = new QLabel(verticalLayoutWidget_2);
        label_16->setObjectName("label_16");

        main_vertical_layout->addWidget(label_16);

        grid_layout_theme_color_section = new QGridLayout();
        grid_layout_theme_color_section->setSpacing(15);
        grid_layout_theme_color_section->setObjectName("grid_layout_theme_color_section");
        grid_layout_theme_color_section->setContentsMargins(10, -1, 10, -1);
        pushButton_14 = new QPushButton(verticalLayoutWidget_2);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setMinimumSize(QSize(0, 0));

        grid_layout_theme_color_section->addWidget(pushButton_14, 0, 0, 1, 1);

        darkMode_button = new QPushButton(verticalLayoutWidget_2);
        darkMode_button->setObjectName("darkMode_button");

        grid_layout_theme_color_section->addWidget(darkMode_button, 0, 2, 1, 1);

        lightMode_button = new QPushButton(verticalLayoutWidget_2);
        lightMode_button->setObjectName("lightMode_button");
        lightMode_button->setCheckable(true);
        lightMode_button->setChecked(true);

        grid_layout_theme_color_section->addWidget(lightMode_button, 0, 1, 1, 1);


        main_vertical_layout->addLayout(grid_layout_theme_color_section);

        title_section_tray_icon_style = new QLabel(verticalLayoutWidget_2);
        title_section_tray_icon_style->setObjectName("title_section_tray_icon_style");
        title_section_tray_icon_style->setFont(font);

        main_vertical_layout->addWidget(title_section_tray_icon_style);

        label_17 = new QLabel(verticalLayoutWidget_2);
        label_17->setObjectName("label_17");

        main_vertical_layout->addWidget(label_17);

        h_layout_tray_icon_style_section = new QHBoxLayout();
        h_layout_tray_icon_style_section->setSpacing(20);
        h_layout_tray_icon_style_section->setObjectName("h_layout_tray_icon_style_section");
        h_layout_tray_icon_style_section->setContentsMargins(10, -1, 10, -1);
        pushButton_18 = new QPushButton(verticalLayoutWidget_2);
        pushButton_18->setObjectName("pushButton_18");

        h_layout_tray_icon_style_section->addWidget(pushButton_18);

        pushButton_19 = new QPushButton(verticalLayoutWidget_2);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setCheckable(true);
        pushButton_19->setChecked(true);

        h_layout_tray_icon_style_section->addWidget(pushButton_19);


        main_vertical_layout->addLayout(h_layout_tray_icon_style_section);

        title_section_confirm_dialogs = new QLabel(verticalLayoutWidget_2);
        title_section_confirm_dialogs->setObjectName("title_section_confirm_dialogs");
        title_section_confirm_dialogs->setFont(font);

        main_vertical_layout->addWidget(title_section_confirm_dialogs);

        label_18 = new QLabel(verticalLayoutWidget_2);
        label_18->setObjectName("label_18");
        label_18->setWordWrap(true);

        main_vertical_layout->addWidget(label_18);

        grid_layout_confirm_dialogs_section = new QGridLayout();
        grid_layout_confirm_dialogs_section->setObjectName("grid_layout_confirm_dialogs_section");
        grid_layout_confirm_dialogs_section->setHorizontalSpacing(20);
        grid_layout_confirm_dialogs_section->setVerticalSpacing(15);
        grid_layout_confirm_dialogs_section->setContentsMargins(10, -1, 10, -1);
        pushButton_26 = new QPushButton(verticalLayoutWidget_2);
        pushButton_26->setObjectName("pushButton_26");

        grid_layout_confirm_dialogs_section->addWidget(pushButton_26, 0, 1, 1, 1);

        pushButton_25 = new QPushButton(verticalLayoutWidget_2);
        pushButton_25->setObjectName("pushButton_25");
        pushButton_25->setCheckable(true);
        pushButton_25->setChecked(true);

        grid_layout_confirm_dialogs_section->addWidget(pushButton_25, 0, 0, 1, 1);

        pushButton_21 = new QPushButton(verticalLayoutWidget_2);
        pushButton_21->setObjectName("pushButton_21");

        grid_layout_confirm_dialogs_section->addWidget(pushButton_21, 1, 0, 1, 2);

        pushButton_22 = new QPushButton(verticalLayoutWidget_2);
        pushButton_22->setObjectName("pushButton_22");

        grid_layout_confirm_dialogs_section->addWidget(pushButton_22, 2, 0, 1, 2);


        main_vertical_layout->addLayout(grid_layout_confirm_dialogs_section);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        checkBox_8 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_8->setObjectName("checkBox_8");
        sizePolicy1.setHeightForWidth(checkBox_8->sizePolicy().hasHeightForWidth());
        checkBox_8->setSizePolicy(sizePolicy1);
        checkBox_8->setMinimumSize(QSize(0, 0));
        checkBox_8->setFont(font1);
        checkBox_8->setIconSize(QSize(16, 16));
        checkBox_8->setAutoExclusive(false);
        checkBox_8->setTristate(false);

        gridLayout_5->addWidget(checkBox_8, 2, 3, 1, 1);

        title_section_crash_report = new QLabel(verticalLayoutWidget_2);
        title_section_crash_report->setObjectName("title_section_crash_report");
        title_section_crash_report->setFont(font);

        gridLayout_5->addWidget(title_section_crash_report, 0, 0, 1, 1);

        label_24 = new QLabel(verticalLayoutWidget_2);
        label_24->setObjectName("label_24");
        label_24->setWordWrap(true);

        gridLayout_5->addWidget(label_24, 1, 0, 2, 2);


        main_vertical_layout->addLayout(gridLayout_5);

        scrollArea->setWidget(scrollAreaWidget_settings);

        retranslateUi(Page_4);

        QMetaObject::connectSlotsByName(Page_4);
    } // setupUi

    void retranslateUi(QWidget *Page_4)
    {
        Page_4->setWindowTitle(QCoreApplication::translate("Page_4", "Form", nullptr));
        set_disconnect_shortcut_button->setText(QCoreApplication::translate("Page_4", "SET DICONNECT SHORTCUT", nullptr));
        title_section_deviceID->setText(QCoreApplication::translate("Page_4", "Device ID", nullptr));
        label->setText(QCoreApplication::translate("Page_4", "<html><head/><body><p>Unique Identifier of this device</p></body></html>", nullptr));
        identifier_label->setText(QCoreApplication::translate("Page_4", "17DAD4C0-4B78-E811-80C9-9828A616CE29", nullptr));
        identifier_pixmap->setText(QString());
        title_section_vpn_proto->setText(QCoreApplication::translate("Page_4", "VPN Protocol", nullptr));
        label_2->setText(QCoreApplication::translate("Page_4", "<html><head/><body><p><span style=\" font-size:11pt;\">Set the protol used for connection</span></p></body></html>", nullptr));
        tcp_button->setText(QCoreApplication::translate("Page_4", "TCP", nullptr));
        adapt_button->setText(QCoreApplication::translate("Page_4", "ADAPTATIVE", nullptr));
        udp_button->setText(QCoreApplication::translate("Page_4", "UDP", nullptr));
        title_section_connect_timeout->setText(QCoreApplication::translate("Page_4", "Connection Timeout", nullptr));
        label_3->setText(QCoreApplication::translate("Page_4", "<html><head/><body><p><span style=\" font-size:11pt;\">How long should OpenVPN try to connect before giving up?</span></p></body></html>", nullptr));
        button_10_sec->setText(QCoreApplication::translate("Page_4", "10 sec", nullptr));
        button_30_sec->setText(QCoreApplication::translate("Page_4", "30 sec", nullptr));
        button_cont_retry->setText(QCoreApplication::translate("Page_4", "Continuously Retry", nullptr));
        button_1_min->setText(QCoreApplication::translate("Page_4", "1 min", nullptr));
        button_2_min->setText(QCoreApplication::translate("Page_4", "2 min", nullptr));
        title_section_launch_options->setText(QCoreApplication::translate("Page_4", "Launch Options", nullptr));
        label_4->setText(QCoreApplication::translate("Page_4", "<html><head/><body><p><span style=\" font-size:11pt;\">Configure app to aunch automatically after device reboot</span></p></body></html>", nullptr));
        radioButton->setText(QCoreApplication::translate("Page_4", "Start app", nullptr));
        label_5->setText(QCoreApplication::translate("Page_4", "The application will be launch after reboot", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Page_4", "Connect lastest", nullptr));
        label_6->setText(QCoreApplication::translate("Page_4", "<html><head/><body><p>The application will be launched after reboot and will try to connect the lastest connected profile in your profie list</p></body></html>", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Page_4", "Restore connection", nullptr));
        label_7->setText(QCoreApplication::translate("Page_4", "<html><head/><body><p>The application will be launched after reboot and will try to reconnect the profile that was connected before shutdown</p></body></html>", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Page_4", "None", nullptr));
        title_section_seamless_tunnel->setText(QCoreApplication::translate("Page_4", "Seamless Tunnel", nullptr));
        checkBox_5->setText(QString());
        label_21->setText(QCoreApplication::translate("Page_4", "<html><head/><body><p>Block Internet while VPN is paused or reconnecting</p></body></html>", nullptr));
        checkBox_6->setText(QString());
        label_8->setText(QCoreApplication::translate("Page_4", "When VPN connection is launched from a shortcut , and no user input is required to authentificate connection, minimize the shortcut", nullptr));
        title_section_shortcut_min->setText(QCoreApplication::translate("Page_4", "Shortcut Minimize", nullptr));
        checkBox_7->setText(QString());
        title_section_portal_detect->setText(QCoreApplication::translate("Page_4", "Captive Portal Detection", nullptr));
        label_9->setText(QCoreApplication::translate("Page_4", "Try to detect the captive portal during network change and application launch", nullptr));
        label_13->setText(QCoreApplication::translate("Page_4", "<html><head/><body><p><span style=\" font-weight:400;\">Next update scan:</span> Nov 9, 2022</p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("Page_4", "Check now", nullptr));
        label_15->setText(QCoreApplication::translate("Page_4", "<html><head/><body><p>How often OpenVPN should check if the new version of the software is available ?</p></body></html>", nullptr));
        title_section_software_update->setText(QCoreApplication::translate("Page_4", "Software Update", nullptr));
        label_12->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("Page_4", "DAILY", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Page_4", "WEEKLY", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Page_4", "MONTHLY", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Page_4", "NEVER", nullptr));
        title_section_theme->setText(QCoreApplication::translate("Page_4", "Theme", nullptr));
        label_16->setText(QCoreApplication::translate("Page_4", "<html><head/><body><p><span style=\" font-size:10pt;\">Choose application color theme</span></p></body></html>", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Page_4", "System", nullptr));
        darkMode_button->setText(QCoreApplication::translate("Page_4", "Dark", nullptr));
        lightMode_button->setText(QCoreApplication::translate("Page_4", "Light", nullptr));
        title_section_tray_icon_style->setText(QCoreApplication::translate("Page_4", "Tray Icon Style", nullptr));
        label_17->setText(QCoreApplication::translate("Page_4", "<html><head/><body><p><span style=\" font-size:10pt;\">Choose application style in the system tray</span></p></body></html>", nullptr));
        pushButton_18->setText(QCoreApplication::translate("Page_4", "Monochrome", nullptr));
        pushButton_19->setText(QCoreApplication::translate("Page_4", "Colorful", nullptr));
        title_section_confirm_dialogs->setText(QCoreApplication::translate("Page_4", "Confirmation Dialogs", nullptr));
        label_18->setText(QCoreApplication::translate("Page_4", "<html><head/><body><p><span style=\" font-size:10pt;\">Choose actions on which app will show the confirmation dialogs</span></p></body></html>", nullptr));
        pushButton_26->setText(QCoreApplication::translate("Page_4", "NONE", nullptr));
        pushButton_25->setText(QCoreApplication::translate("Page_4", "ALL", nullptr));
        pushButton_21->setText(QCoreApplication::translate("Page_4", "ON DISCONNECT", nullptr));
        pushButton_22->setText(QCoreApplication::translate("Page_4", "ON RECONNECT", nullptr));
        checkBox_8->setText(QString());
        title_section_crash_report->setText(QCoreApplication::translate("Page_4", "Crash Reporting", nullptr));
        label_24->setText(QCoreApplication::translate("Page_4", "Enable crach reporting to OpenVPN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_4: public Ui_Page_4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_4_H
