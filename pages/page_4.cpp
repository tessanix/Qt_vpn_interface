#include "page_4.h"
#include "ui_page_4.h"
#include <QButtonGroup>

Page_4::Page_4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_4)
{
    ui->setupUi(this);
    //QPixmap copy_img(":/icons/copy_icon_1");
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
    connect(buttons_vpn_proto_section, SIGNAL(buttonClicked(QAbstractButton*)),
                                 this, SLOT(change_color_vpn_proto_section(QAbstractButton*)));

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
    connect(buttons_connect_timeout_section, SIGNAL(buttonClicked(QAbstractButton*)),
                                 this, SLOT(change_color_connect_timeout_section(QAbstractButton* )));


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
    connect(buttons_software_update_section, SIGNAL(buttonClicked(QAbstractButton*)),
                                 this, SLOT(change_color_software_update_section(QAbstractButton* )));

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
    connect(buttons_theme_color_section, SIGNAL(buttonClicked(QAbstractButton*)),
                                 this, SLOT(change_color_theme_color_section(QAbstractButton* )));

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
    connect(buttons_tray_icon_style_section, SIGNAL(buttonClicked(QAbstractButton*)),
                                 this, SLOT(change_color_tray_icon_section(QAbstractButton* )));

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
    connect(buttons_confirm_dialogs_section, SIGNAL(buttonClicked(QAbstractButton*)),
                                 this, SLOT(change_color_confirm_dialogs_section(QAbstractButton* )));


//    QList<QPushButton *> buttons_connect_timeout_section;
//    for (int i=0; i<ui->grid_layout_connect_timeout_section->count(); ++i){
//        buttons_connect_timeout_section.append(
//                    (QPushButton*)ui->grid_layout_connect_timeout_section->itemAt(i)->widget()
//        );
//    }



//    sections = {buttons_vpn_proto_section, buttons_connect_timeout_section};
////    qDebug() << "hey there!!";

//    for ( QList<QPushButton *> &section : sections){
//        qDebug() <<"test x";
//        for(QPushButton *button : section){
////            qDebug() <<"test in x";
////            qDebug() << button->objectName();
//            button->setCheckable(true);
//            button->installEventFilter(this);
//        }
//    }

}

void Page_4::change_color_vpn_proto_section(QAbstractButton *button){
    for (QAbstractButton* btn : buttons_vpn_proto_section->buttons()){
        if(!btn->isChecked())  btn->setStyleSheet(  "background-color:rgb(255,255,255);"
                                                    "border-color: rgb(157, 152, 168);"
                                                    "color: rgb(157, 152, 168);");
    }
    button->setStyleSheet("background-color:rgb(9, 56, 94);"
                          "color:rgb(255,255,255);");
}

void Page_4::change_color_connect_timeout_section(QAbstractButton *button){
    for (QAbstractButton* btn : buttons_connect_timeout_section->buttons()){
        if(!btn->isChecked())  btn->setStyleSheet(  "background-color:rgb(255,255,255);"
                                                    "border-color: rgb(157, 152, 168);"
                                                    "color: rgb(157, 152, 168);");
    }
    button->setStyleSheet("background-color:rgb(9, 56, 94);"
                          "color:rgb(255,255,255);");
}
void Page_4::change_color_software_update_section(QAbstractButton *button){
    for (QAbstractButton* btn : buttons_software_update_section->buttons()){
        if(!btn->isChecked())  btn->setStyleSheet(  "background-color:rgb(255,255,255);"
                                                    "border-color: rgb(157, 152, 168);"
                                                    "color: rgb(157, 152, 168);");
    }
    button->setStyleSheet("background-color:rgb(9, 56, 94);"
                          "color:rgb(255,255,255);");
}
void Page_4::change_color_theme_color_section(QAbstractButton *button){
    for (QAbstractButton* btn : buttons_theme_color_section->buttons()){
        if(!btn->isChecked())  btn->setStyleSheet(  "background-color:rgb(255,255,255);"
                                                    "border-color: rgb(157, 152, 168);"
                                                    "color: rgb(157, 152, 168);");
    }
    button->setStyleSheet("background-color:rgb(9, 56, 94);"
                          "color:rgb(255,255,255);");
}
void Page_4::change_color_tray_icon_section(QAbstractButton *button){
    for (QAbstractButton* btn : buttons_tray_icon_style_section->buttons()){
        if(!btn->isChecked())  btn->setStyleSheet(  "background-color:rgb(255,255,255);"
                                                    "border-color: rgb(157, 152, 168);"
                                                    "color: rgb(157, 152, 168);");
    }
    button->setStyleSheet("background-color:rgb(9, 56, 94);"
                          "color:rgb(255,255,255);");
}
void Page_4::change_color_confirm_dialogs_section(QAbstractButton *button){
    for (QAbstractButton* btn : buttons_confirm_dialogs_section->buttons()){
        if(!btn->isChecked())  btn->setStyleSheet(  "background-color:rgb(255,255,255);"
                                                    "border-color: rgb(157, 152, 168);"
                                                    "color: rgb(157, 152, 168);");
    }
    button->setStyleSheet("background-color:rgb(9, 56, 94);"
                          "color:rgb(255,255,255);");
}

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
