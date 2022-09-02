#ifndef BASEWIDGET_H
#define BASEWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class BaseWidget; }
QT_END_NAMESPACE

class BaseWidget : public QWidget
{
    Q_OBJECT

public:
    BaseWidget(QWidget *parent = nullptr);
    ~BaseWidget();

private:
    Ui::BaseWidget *ui;
};
#endif // BASEWIDGET_H
