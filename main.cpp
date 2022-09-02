#include "basewidget.h"

#include <QApplication>
#include <QSplitter>
#include <QTextEdit>
#include <QLCDNumber>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("ZYSONG18030",20);
    a.setFont(font);
    //主分割窗口
    QSplitter * MainWidget = new QSplitter(Qt::Horizontal,0);
    QTextEdit * textCenter = new QTextEdit(QObject::tr("Main TextEdit"),MainWidget);
    textCenter->setAlignment(Qt::AlignCenter);//设置对齐方式
    //右分割窗口
    QSplitter * RightWidget = new QSplitter(Qt::Vertical,MainWidget);
    QTextEdit * text_right = new QTextEdit(QObject::tr("Top TextEdit"),RightWidget);
    text_right->setAlignment(Qt::AlignTop);
    //tr个人猜测是类型转换函数
    //↓
    //tr实际作用是让这个字符串可以被工具提取出来翻译成其他的语言，国际化使用
    QTextEdit * text_bottom = new QTextEdit(QObject::tr("Bottom Widget"),RightWidget);
    text_bottom->setAlignment(Qt::AlignBottom);

    //窗口必须要有控件才可以被分割出来,比如有一个splitter时应该有两个widget用同一个splitter实现切割
    //QLCDNumber * lcd_num = new QLCDNumber(LeftWidget);
    //lcd_num->display(12);
    //lcd_num->move(-100,100);
    MainWidget->setOpaqueResize(1);
    MainWidget->setStretchFactor(0,1);
    MainWidget->setStretchFactor(1,1);
    //MainWidget->setStretchFactor(2,1);
    MainWidget->setWindowTitle("splitter");
    MainWidget->show();
    return a.exec();
}
