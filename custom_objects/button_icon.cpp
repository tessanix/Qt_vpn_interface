#include "button_icon.h"
#include <QPainter>

ButtonIcon::ButtonIcon(QWidget* parent) : QPushButton(parent)
{
}

ButtonIcon::~ButtonIcon()
{
}

QSize ButtonIcon::sizeHint() const
{
    const auto parentHint = QPushButton::sizeHint();
    // add margins here if needed
    return QSize(parentHint.width() + m_pixmap.width(), std::max(parentHint.height(), m_pixmap.height()));
}

void ButtonIcon::setPixmap(const QPixmap& pixmap)
{
    m_pixmap = pixmap;
}

void ButtonIcon::paintEvent(QPaintEvent* e)
{
    QPushButton::paintEvent(e);

    if (!m_pixmap.isNull())
    {
        const int y = (height() - m_pixmap.height()) / 2; // add margin if needed
        QPainter painter(this);
        painter.drawPixmap(5, y, m_pixmap); // hardcoded horizontal margin
    }
}


void ButtonIcon::enterEvent(QEnterEvent *event)
{
  this->QPushButton::enterEvent(event);
  setCursor(QCursor(Qt::PointingHandCursor));
}

//void ButtonIcon::leaveEvent(QEvent *event)
//{
//  this->QPushButton::leaveEvent(event);
//  //setIcon(QIcon(":/icons/smallbutton.png"));
//}
