#include "gua1.h"
#include "ui_gua1.h"
#include<QPushButton>
#include"mainwindow.h"
#include<QString>
#include<QWidget>
#include<QTextBrowser>
#include<QFont>
#include<QVBoxLayout>
struct node
{
    QString s;
    int type;
};

QString bian(int &num)
{
    QString s="初始蓍草数量：";
    s+=QString::number(num);
    s+="\n";
    s+="随机分成两部分：";
    int num1=rand()%(num-1)+1;
    int num2=num-num1;
    s+=QString::number(num1);
    s+=" ";
    s+=QString::number(num2);
    s+="\n";
    if(num1>1) num1--;
    else num2--;
    s+="从两堆蓍策中任取一策: ";
    s+=QString::number(num1);
    s+=" ";
    s+=QString::number(num2);
    s+="\n";
    int rem1=num1%4;
    if(rem1==0) rem1=4;
    int rem2=num2%4;
    if(rem2==0) rem2=4;
    s+="左右两堆分别以4除之：";
    s+=QString::number(rem1);
    s+=" ";
    s+=QString::number(rem2);
    s+="\n";
    int res=num-1-rem1-rem2;
    s+="剩余蓍策数量：";
    s+=QString::number(res);
    s+="\n";
    num=res;
    return s;
}
node yao()
{
    int num=50;
    QString s="初始蓍草数量：";
    s+=QString::number(num);
    s+="\n";
    num--;
    s+="抽去1根（以象天）: ";
    s+=QString::number(num);
    s+="\n";
    s+="第一变：\n";
    s+=bian(num);
    s+="第二变：\n";
    s+=bian(num);
    s+="第三变：\n";
    s+=bian(num);
    num/=4;
    s+="剩余的蓍策数除以4得：";
    s+=QString::number(num);
    s+="\n";
    if(num==9||num==7)
    {
        s+="可画一阳爻:---\n";
    }
    else if(num==6||num==8)
    {
        s+="可画一阴爻:- -\n";
    }
    return {s,num};
}
QString gua()
{
    QString s="三变而成爻、十八变而成卦\n";
    int arr[6];
    s+="第一爻:\n";
    node t=yao();
    s+=t.s;
    arr[0]=t.type;
    s+='\n';
    s+="第二爻:\n";
    t=yao();
    s+=t.s;
    arr[1]=t.type;
    s+='\n';
    s+="第三爻:\n";
    t=yao();
    s+=t.s;
    arr[2]=t.type;
    s+='\n';
    s+="第四爻:\n";
    t=yao();
    s+=t.s;
    arr[3]=t.type;
    s+='\n';
    s+="第五爻:\n";
    t=yao();
    s+=t.s;
    arr[4]=t.type;
    s+='\n';
    s+="第六爻:\n";
    t=yao();
    s+=t.s;
    arr[5]=t.type;
    s+='\n';
    s+="卦象为：\n\n";
    for(int i=0;i<6;i++)
    {
        if(arr[i]==9||arr[i]==7)
        {
            s+="---\n";
        }
        else if(arr[i]==6||arr[i]==8)
        {
            s+="- -\n";
        }
    }
    s+="变卦： \n\n";
    for(int i=0;i<6;i++)
    {
        if(arr[i]==6||arr[i]==7)
        {
            s+="---\n";
        }
        else if(arr[i]==9||arr[i]==8)
        {
            s+="- -\n";
        }
    }
    return s;
}
QString gua2()
{
    QString s="三变而成爻、十八变而成卦\n";
    int arr[6];
//    s+="第一爻:\n";
    node t=yao();
//    s+=t.s;
    arr[0]=t.type;
//    s+="第二爻:\n";
    t=yao();
//    s+=t.s;
    arr[1]=t.type;
//    s+="第三爻:\n";
    t=yao();
//    s+=t.s;
    arr[2]=t.type;
//    s+="第四爻:\n";
    t=yao();
//    s+=t.s;
    arr[3]=t.type;
//    s+="第五爻:\n";
    t=yao();
//    s+=t.s;
    arr[4]=t.type;
//    s+="第六爻:\n";
    t=yao();
//    s+=t.s;
    arr[5]=t.type;
    s+="卦象为：\n\n";
    for(int i=0;i<6;i++)
    {
        if(arr[i]==9||arr[i]==7)
        {
            s+="---\n";
        }
        else if(arr[i]==6||arr[i]==8)
        {
            s+="- -\n";
        }
    }
    s+="变卦： \n\n";
    for(int i=0;i<6;i++)
    {
        if(arr[i]==6||arr[i]==7)
        {
            s+="---\n";
        }
        else if(arr[i]==9||arr[i]==8)
        {
            s+="- -\n";
        }
    }
    return s;
}
gua1::gua1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gua1)
{
    ui->setupUi(this);
    srand(time(nullptr));
    connect(ui->pushButton_4,&QPushButton::clicked,[=](){
        MainWindow * mw = new MainWindow();
        mw->setGeometry(this->geometry());
        mw->show();
        this->close();
    });
    //算一卦
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QWidget * w=new QWidget();
        QVBoxLayout layout;
        w->resize(700,600);
        w->setMaximumSize(700,600);
        w->setMinimumSize(700,600);
        QTextBrowser * tb=new QTextBrowser(w);
        layout.addWidget(tb);
        QFont font;
        font.setPointSize(20);
        tb->setFont(font);
        tb->setText(gua());
        w->setLayout(&layout);
        w->show();
    });
    //算一爻
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        QWidget * w=new QWidget();
        QVBoxLayout layout;
        w->resize(700,600);
        w->setMaximumSize(700,600);
        w->setMinimumSize(700,600);
        QTextBrowser * tb=new QTextBrowser(w);
        layout.addWidget(tb);
        QFont font;
        font.setPointSize(20);
        tb->setFont(font);
        tb->setText(yao().s);
        w->setLayout(&layout);
        w->show();
    });
    //算一变
    connect(ui->pushButton_3,&QPushButton::clicked,[=]()
    {
        QWidget * w=new QWidget();
        w->resize(700,600);
        w->setMaximumSize(700,600);
        w->setMinimumSize(700,600);
        QVBoxLayout layout;
        QTextBrowser * tb=new QTextBrowser(w);
        layout.addWidget(tb);
        QFont font;
        font.setPointSize(20);
        tb->setFont(font);
        int num=49;
        tb->setText(bian(num));
        w->setLayout(&layout);

        w->show();
    });
    connect(ui->pushButton_5,&QPushButton::clicked,[=]()
    {
        QWidget * w=new QWidget();
        QVBoxLayout layout;
        w->resize(700,600);
        w->setMaximumSize(700,600);
        w->setMinimumSize(700,600);
        QTextBrowser * tb=new QTextBrowser(w);
        layout.addWidget(tb);
        QFont font;
        font.setPointSize(20);
        tb->setFont(font);
        tb->setText(gua2());
        w->setLayout(&layout);
        w->show();
    });
}

gua1::~gua1()
{
    delete ui;
}
