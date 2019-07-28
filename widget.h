#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    int money{0};

    void changeMoney(int n);

private slots:
    void on_pb10_clicked();

    void on_pb50_clicked();

    void on_pb100_clicked();

    void on_pb500_clicked();

    void on_Coffee_clicked();

    void on_Tea_clicked();

    void on_Goncha_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
