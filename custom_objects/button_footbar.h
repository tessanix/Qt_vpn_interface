#ifndef BUTTON_FOOTBAR_H
#define BUTTON_FOOTBAR_H

#include <QPushButton>

class Button_FootBar : public QPushButton
{
    public:
        Button_FootBar(QWidget* parent=nullptr);

        virtual ~Button_FootBar();


    protected:
        virtual void paintEvent(QPaintEvent* e) override;
};

#endif // BUTTON_FOOTBAR_H
