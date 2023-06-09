#ifndef PAGE_3_H
#define PAGE_3_H

#include <QWidget>
#include <QPropertyAnimation>
#include "../custom_objects/thememanager.h"

namespace Ui {
class Page_3;
}

class Page_3 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_3(ThemeManager* thememanager, QWidget *parent = nullptr);
    ~Page_3();

public slots:
    void show_subpage_certif_pkcs();
    void show_subpage_certif_hardware();

protected:
    bool eventFilter(QObject *watched, QEvent *event);


private:
    ThemeManager* thememanager_ptr = nullptr;
    QPropertyAnimation* anim_pkcs_subpage_show = new QPropertyAnimation(this);
    QPropertyAnimation* anim_hardware_subpage_show = new QPropertyAnimation(this);

    Ui::Page_3 *ui;
};

#endif // PAGE_3_H
