#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget:: changeMoney(int n)
{
    ui->Coffee->setEnabled(false);
    ui->Tea->setEnabled(false);
    ui->Goncha->setEnabled(false);

    if (100 <= money)
        ui->Coffee->setEnabled(true);
    if (150 <= money)
        ui->Tea->setEnabled(true);
    if (200 <= money)
        ui->Goncha->setEnabled(true);

    //msg.Information(, "title", "text");
    //down return is show toggle

    money += n;
    ui->lcdNumber->display(QString::number(money));

    this->repaint();
}

void Widget::on_pb10_clicked()
{
    changeMoney(10);
}

void Widget::on_pb50_clicked()
{
    changeMoney(50);
}

void Widget::on_pb100_clicked()
{
    changeMoney(100);
}

void Widget::on_pb500_clicked()
{
    changeMoney(500);
}

void Widget::on_Coffee_clicked()
{
    changeMoney(-100);
}

void Widget::on_Tea_clicked()
{
    changeMoney(-150);
}

void Widget::on_Goncha_clicked()
{
    changeMoney(-200);
}
