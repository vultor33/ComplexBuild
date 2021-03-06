#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QAbstractItemModel"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void setLigandList(QAbstractItemModel &ligands);

    void setIsomerID(const QString &name);

    void setPolyedra(const QString &name);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
