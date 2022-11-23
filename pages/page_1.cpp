#include "page_1.h"
#include "ui_page_1.h"

Page_1::Page_1( QWidget *parent)
    : QWidget{parent},
    ui(new Ui::Page_1)
{
    ui->setupUi(this);
    //setAttribute(Qt::WA_StyledBackground);
    resize(400, height());

    //setStyleSheet("background-color: green");
    //setMinimumSize(400,400);
    //ui->main_v_layout->setAlignment(  Qt::AlignHCenter);
//    ui->sub_v_layout_1->setAlignment( ui->line_edit_url, Qt::AlignHCenter);
//    ui->sub_v_layout_1->setAlignment( ui->next_button, Qt::AlignHCenter);
//    ui->sub_v_layout_2->setAlignment( ui->browse_button, Qt::AlignHCenter);
     ui->file_subpage_layout->setAlignment( ui->browse_button, Qt::AlignHCenter);
     ui->file_subpage_layout->setAlignment(ui->cloud_pixmap, Qt::AlignHCenter);

     ui->show_file_subpage_button->installEventFilter(this);
     ui->show_url_subpage_button->installEventFilter(this);
     ui->next_button->installEventFilter(this);
     ui->browse_button->installEventFilter(this);

//    for (int i=0; i<ui->v_layout->count(); ++i)
//    {
//        ui->v_layout->setAlignment( ui->v_layout->itemAt(i)->widget(), Qt::AlignHCenter);
//    }
    //ui->stackedWidget->setCurrentIndex(0);
    anim_file_subpage_show->setTargetObject(ui->slider_container_widget);
    anim_file_subpage_show->setPropertyName("pos");
    anim_file_subpage_show->setDuration(250);
    anim_file_subpage_show->setStartValue(QPoint(x(), ui->slider_container_widget->y()));
    anim_file_subpage_show->setEndValue(QPoint(-width(), ui->slider_container_widget->y()));

    anim_url_subpage_show->setTargetObject(ui->slider_container_widget);
    anim_url_subpage_show->setPropertyName("pos");
    anim_url_subpage_show->setDuration(250);
    anim_url_subpage_show->setStartValue(QPoint(-width(), ui->slider_container_widget->y()));
    anim_url_subpage_show->setEndValue(QPoint(x(), ui->slider_container_widget->y()));


    connect(ui->show_url_subpage_button, SIGNAL(clicked()),
           this              , SLOT(show_subpage_url()));


    connect(ui->show_file_subpage_button, SIGNAL(clicked()),
            this             , SLOT(show_subpage_file()));

    ui->show_url_subpage_button->setDisabled(true);

}

void Page_1::show_subpage_url(){
    ui->show_url_subpage_button->setDisabled(true);
    ui->show_file_subpage_button->setEnabled(true);

    ui->sub_widget_url->setStyleSheet("background-color: rgb(230, 115, 0);");
    ui->show_url_subpage_button->setStyleSheet("color:rgb(230, 115, 0);");

    ui->sub_widget_file->setStyleSheet("");
    ui->show_file_subpage_button->setStyleSheet("color: rgb(9, 56, 94);");

    anim_url_subpage_show->start();

}

void Page_1::show_subpage_file(){
    ui->show_file_subpage_button->setDisabled(true);
    ui->show_url_subpage_button->setEnabled(true);

    ui->sub_widget_file->setStyleSheet("background-color: rgb(230, 115, 0);");
    ui->show_file_subpage_button->setStyleSheet("color:rgb(230, 115, 0);");

    ui->sub_widget_url->setStyleSheet("");
    ui->show_url_subpage_button->setStyleSheet("color: rgb(9, 56, 94);");

    anim_file_subpage_show->start();
}

bool Page_1::eventFilter(QObject *watched, QEvent *event)
{
    if (watched->metaObject()->className() == QString("QPushButton")){

        if(event->type() == QEvent::Enter){
            setCursor(QCursor(Qt::PointingHandCursor));
            return true;
        }
        else if(event->type() == QEvent::Leave){
            setCursor(QCursor(Qt::ArrowCursor));
            return true;
        }
        return false;
    }
    return false;
}


Page_1::~Page_1()
{
    delete ui;
}


