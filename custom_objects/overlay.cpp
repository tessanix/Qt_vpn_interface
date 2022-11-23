#include "overlay.h"
//#include <QPainterPath>
#include <QPainter>
#include <QWidget>


Overlay::Overlay(QWidget *parent) : QWidget(parent) {
    //setAttribute(Qt::WA_NoSystemBackground);

    disable_mouse_event(true);

    opEffect->setOpacity(0);
    setGraphicsEffect(opEffect);
    //self.setAutoFillBackground(True)

    anim_opacity_increase->setDuration(250);
    anim_opacity_increase->setStartValue(0.0);
    anim_opacity_increase->setEndValue(1.0);

    anim_opacity_decrease->setDuration(250);
    anim_opacity_decrease->setStartValue(1.0);
    anim_opacity_decrease->setEndValue(0.0);

    connect(this, SIGNAL(overlay_clicked()),
            parent, SLOT(hide_menu()));
}


void Overlay::disable_mouse_event(bool disable){
    setAttribute(Qt::WA_TransparentForMouseEvents, disable);
}

void Overlay::paintEvent(QPaintEvent *) {
    QPainter(this).fillRect(rect(), {63, 63, 63, 180});
}

void Overlay::mousePressEvent(QMouseEvent *){
    if(isEnabled()) emit overlay_clicked();
}
