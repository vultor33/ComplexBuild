#include "widget.h"
#include "ui_widget.h"
#include "QAbstractItemModel"

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

void Widget::setLigandList(QAbstractItemModel &ligands){
    ui->listView->setModel(&ligands);
}

void Widget::setIsomerID(const QString &name){
    ui->label_3->setText(name);
}

void Widget::setPolyedra(const QString &name){
    ui->label_7->setText(name);
}
