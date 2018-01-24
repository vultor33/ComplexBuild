#include "widget.h"
#include "ui_widget.h"

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

void Widget::setBidentateMessage(){
    ui->label_16->setText("Click on two atoms to define as bidentates");
    bidentateActive = true;
}
void Widget::unsetBidentateMessage(){
    ui->label_16->setText(" ");
    bidentateActive = false;
}

void Widget::setAtomLabel(const QString &name){
    ui->label_4->setText(name);
}

void Widget::setAtomX(const QString &name){
    ui->label_6->setText(name);
}

void Widget::setAtomY(const QString &name){
    ui->label_7->setText(name);
}

void Widget::setAtomZ(const QString &name){
    ui->label_9->setText(name);
}

void Widget::setPolyedra(const QString &name){
    ui->label_13->setText(name);
}

void Widget::setIsomerID(const QString &name){
    ui->label_15->setText(name);
}


//void Widget::setName(const QString &name){
//    ui->lineEdit->setText(name);
//}


/* pegar o nome que esta la
QString Widget::name() const
{
    return ui->lineEdit->text();
}
*/
