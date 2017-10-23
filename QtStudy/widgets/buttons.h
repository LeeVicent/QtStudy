
#ifndef BUTTONS_H_
#define BUTTONS_H_

#include <QDialog>   //主窗口

//前置声明 （复习：前置声明，组合的类只能使用指针或引用（因为无法获得类的完整定义））
class QPushButton;   //下压式按钮（常规按钮）
class QRadioButton;  //单选按钮
class QToolButton;
class QCheckBox;     //复选框

class Buttons : public QDialog
{
    Q_OBJECT    //使本类获得信号槽等能力，moc预处理展开

private:
    QPushButton *pushButton;   //前置声明，成员指针
    QRadioButton *radioButton;
    QToolButton *toolButton;
    QCheckBox *checkBox;

public:
    Buttons(QWidget *parent = 0);//父窗口，基类指针，默认值
    ~Buttons();
};



#endif
