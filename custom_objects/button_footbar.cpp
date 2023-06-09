#include "button_footbar.h"
#include <QPainter>

Button_FootBar::Button_FootBar(QWidget* parent) : QPushButton(parent)
{

}

Button_FootBar::~Button_FootBar(){

}

void Button_FootBar::paintEvent(QPaintEvent* e)
{
    QPushButton::paintEvent(e);

    QPainter painter(this);
    painter.fillRect(0, height()-6, width(), 6, Qt::cyan);

}
