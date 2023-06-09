#include "page_1.h"
#include <QPainter>
#include "ui_page_1.h"

Page_1::Page_1(ThemeManager* thememanager, QWidget *parent)
    : QWidget{parent}, ui(new Ui::Page_1), thememanager_ptr{thememanager}
{
    ui->setupUi(this);

    setAttribute(Qt::WA_StyledBackground);
    resize(400, height());

//    QPoint target_offset(0, 0);

//    QRegion sourceRegion(0,0,
//                        10, 5);
//    QPainter painter(ui->show_url_subpage_button);
//    painter.begin(0,0);

//    ui->show_url_subpage_button->render(&painter,
//                                        target_offset,
//                                        sourceRegion, QWidget::DrawWindowBackground);

    ui->file_subpage_layout->setAlignment( ui->browse_button, Qt::AlignHCenter);
    ui->file_subpage_layout->setAlignment(ui->cloud_pixmap, Qt::AlignHCenter);

    ui->show_file_subpage_button->installEventFilter(this);
    ui->show_url_subpage_button->installEventFilter(this);
    ui->next_button->installEventFilter(this);
    ui->browse_button->installEventFilter(this);


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

    ui->show_url_subpage_button->setCheckable(true);
    ui->show_file_subpage_button->setCheckable(true);

    connect(ui->show_url_subpage_button, SIGNAL(clicked()),
           this              , SLOT(show_subpage_url()));


    connect(ui->show_file_subpage_button, SIGNAL(clicked()),
            this             , SLOT(show_subpage_file()));

    ui->show_url_subpage_button->setDisabled(true);
    ui->show_url_subpage_button->setChecked(true);
    //ui->sub_widget_url->setStyleSheet("background-color:rgb(19,171,148);");//rgb(63,186,170);"); //rgb(230, 115, 0);";


}

void Page_1::show_subpage_url(){

//    thememanager_ptr->set_color_subpages_buttons(
//                1, ui->sub_widget_url, ui->show_url_subpage_button,
//                   ui->sub_widget_file, ui->show_file_subpage_button);
//    ui->sub_widget_url->setAccessibleDescription("checked");
//    ui->sub_widget_file->setAccessibleDescription("unchecked");

    ui->show_url_subpage_button->setDisabled(true);
    ui->show_file_subpage_button->setEnabled(true);
    ui->show_file_subpage_button->setChecked(false);
    anim_url_subpage_show->start();
}

void Page_1::show_subpage_file(){

//    thememanager_ptr->set_color_subpages_buttons(
//                2, ui->sub_widget_url, ui->show_url_subpage_button,
//                   ui->sub_widget_file, ui->show_file_subpage_button);
//    ui->sub_widget_url->setAccessibleDescription("unchecked");
//    ui->sub_widget_file->setAccessibleDescription("checked");

    ui->show_file_subpage_button->setDisabled(true);
    ui->show_url_subpage_button->setEnabled(true);
    ui->show_url_subpage_button->setChecked(false);
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


