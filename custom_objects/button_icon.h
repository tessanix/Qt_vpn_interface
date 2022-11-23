#pragma once
#ifndef BUTTONICON_H
#define BUTTONICON_H

#include <QPushButton>

class ButtonIcon : public QPushButton
{
public:
    explicit ButtonIcon(QWidget* parent = nullptr);
    virtual ~ButtonIcon();

    void setPixmap(const QPixmap& pixmap);

    virtual QSize sizeHint() const override;

protected:
    virtual void paintEvent(QPaintEvent* e) override;
    virtual void enterEvent(QEnterEvent *event) override;
    //virtual void leaveEvent(QEvent *event) override;

private:
    QPixmap m_pixmap;
};


#endif // BUTTONICON_H
