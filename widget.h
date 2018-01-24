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
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void setBidentateMessage();
    void unsetBidentateMessage();

    void setAtomLabel(const QString &name);
    void setAtomX(const QString &name);
    void setAtomY(const QString &name);
    void setAtomZ(const QString &name);
    void setPolyedra(const QString &name);
    void setIsomerID(const QString &name);

    //void setName(const QString &name);
    //QString name() const;

private:
    Ui::Widget *ui;

    bool bidentateActive;

};

#endif // WIDGET_H
