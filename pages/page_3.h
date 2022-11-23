#ifndef PAGE_3_H
#define PAGE_3_H

#include <QWidget>
#include <QPropertyAnimation>

namespace Ui {
class Page_3;
}

class Page_3 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_3(QWidget *parent = nullptr);
    ~Page_3();

public slots:
    void show_subpage_certif_pkcs();
    void show_subpage_certif_hardware();
protected:
   bool eventFilter(QObject *watched, QEvent *event);
private:

   QPropertyAnimation* anim_pkcs_subpage_show = new QPropertyAnimation(this);
    QPropertyAnimation* anim_hardware_subpage_show = new QPropertyAnimation(this);

    Ui::Page_3 *ui;
};

#endif // PAGE_3_H
