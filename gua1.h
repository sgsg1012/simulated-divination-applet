#ifndef GUA1_H
#define GUA1_H

#include <QMainWindow>

namespace Ui {
class gua1;
}

class gua1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit gua1(QWidget *parent = nullptr);
    ~gua1();

private:
    Ui::gua1 *ui;
};

#endif // GUA1_H
