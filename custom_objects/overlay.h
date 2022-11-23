#include <QWidget>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>

#ifndef SHADOWANIM_H
#define SHADOWANIM_H


class Overlay : public QWidget {
    Q_OBJECT
    public:
        explicit Overlay(QWidget *parent = nullptr) ;

        QGraphicsOpacityEffect* opEffect = new QGraphicsOpacityEffect(this);

        QPropertyAnimation* anim_opacity_increase = new QPropertyAnimation(opEffect, "opacity", this);
        QPropertyAnimation* anim_opacity_decrease = new QPropertyAnimation(opEffect, "opacity", this);


    public slots:
        void disable_mouse_event(bool enable);

    protected:
        void paintEvent(QPaintEvent *) override;
        void mousePressEvent(QMouseEvent *) override;

    signals:
        void overlay_clicked();



};

#endif // SHADOWANIM_H
