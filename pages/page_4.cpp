#include "page_4.h"
#include "ui_page_4.h"
#include <QButtonGroup>

Page_4::Page_4(ThemeManager* thememanager, QWidget *parent) :
    QWidget(parent), thememanager_ptr{thememanager}, ui(new Ui::Page_4)
{
    ui->setupUi(this);
    //QPixmap copy_img(":/icons/copy_icon_1");
    setAttribute(Qt::WA_StyledBackground);

    ui->identifier_label->setScaledContents(true);
    ui->set_disconnect_shortcut_button->installEventFilter(this);
    //########################################################//
    //################# VPN PROTOCOL SECTION #################//
    //########################################################//
    buttons_vpn_proto_section->setExclusive(true);
    for (int i=0; i<ui->h_layout_vpn_proto_section->count(); ++i){
        QPushButton* btn = ((QPushButton*)ui->h_layout_vpn_proto_section->itemAt(i)->widget());
        btn->installEventFilter(this);
        btn->setCheckable(true);
        buttons_vpn_proto_section->addButton(btn);
    }

    //##############################################################//
    //################# CONNECTION TIMEOUT SECTION #################//
    //#############################################################//

    buttons_connect_timeout_section->setExclusive(true);
    for (int i=0; i<ui->grid_layout_connect_timeout_section->count(); ++i){
        QPushButton* btn = ((QPushButton*)ui->grid_layout_connect_timeout_section->itemAt(i)->widget());
        btn->installEventFilter(this);
        btn->setCheckable(true);
        buttons_connect_timeout_section->addButton(btn);
    }

    //###########################################################//
    //################# SOFTWARE UPDATE SECTION #################//
    //##########################################################//

    buttons_software_update_section->setExclusive(true);
    for (int i=0; i<ui->grid_layout_software_update_section->count(); ++i){
        QPushButton* btn = ((QPushButton*)ui->grid_layout_software_update_section->itemAt(i)->widget());
        btn->installEventFilter(this);
        btn->setCheckable(true);
        buttons_software_update_section->addButton(btn);
    }

    //###########################################################//
    //################## THEME COLOR SECTION ###################//
    //##########################################################//
    buttons_theme_color_section->setExclusive(true);
    for (int i=0; i<ui->grid_layout_theme_color_section->count(); ++i){
        QPushButton* btn = ((QPushButton*)ui->grid_layout_theme_color_section->itemAt(i)->widget());
        btn->installEventFilter(this);
        btn->setCheckable(true);
        buttons_theme_color_section->addButton(btn);
    }

    //###########################################################//
    //################ TRAY ICON STYLE SECTION ##################//
    //###########################################################//
    buttons_tray_icon_style_section->setExclusive(true);
    for (int i=0; i<ui->h_layout_tray_icon_style_section->count(); ++i){
        QPushButton* btn = ((QPushButton*)ui->h_layout_tray_icon_style_section->itemAt(i)->widget());
        btn->installEventFilter(this);
        btn->setCheckable(true);
        buttons_tray_icon_style_section->addButton(btn);
    }

    //###########################################################//
    //################ CONFIRM DIALOGS SECTION ##################//
    //###########################################################//
    buttons_confirm_dialogs_section->setExclusive(true);
    for (int i=0; i<ui->grid_layout_confirm_dialogs_section->count(); ++i){
        QPushButton* btn = ((QPushButton*)ui->grid_layout_confirm_dialogs_section->itemAt(i)->widget());
        btn->installEventFilter(this);
        btn->setCheckable(true);
        buttons_confirm_dialogs_section->addButton(btn);
    }


    connect(buttons_theme_color_section, SIGNAL(buttonClicked(QAbstractButton*)),
                           thememanager, SLOT(change_theme(QAbstractButton*)));

}


//void Page_4::manage_sections(QAbstractButton *button){
//    for(QButtonGroup* section : list_of_sections){
//        if(section->buttons().contains(button)){
//            thememanager_ptr->set_color_button_group(section);
//            break;
//        }
//    }
//}


bool Page_4::eventFilter(QObject *watched, QEvent *event)
{
    if(watched->metaObject()->className() == QString("QPushButton")){

        if( event->type() == QEvent::Enter){
           setCursor(QCursor(Qt::PointingHandCursor));
           return true;
        }
        else if(event->type() == QEvent::Leave){
           setCursor(QCursor(Qt::ArrowCursor));
           return true;
       }
       return false;
    }
    // pass the event on to the parent class
    return false;
}



Page_4::~Page_4()
{
    delete ui;
}
