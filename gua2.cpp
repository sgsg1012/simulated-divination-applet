#include "gua2.h"
#include "ui_gua2.h"
#include<QImage>
#include<QPushButton>
#include<QToolButton>
#include"mainwindow.h"

struct node
{
    QString s;
    int type; //1-少阳 2--老阳 3--少阴 4--老阴
};

node yao2()
{
    int val=rand()%8;
    int arr[3];
    int num=0;
    for(int i=0;i<3;i++)
    {
        arr[i]=val>>i&1;
        if(arr[i])
        {
            num++;

        }
    }
    QString s="随机掷出铜钱(1--正面): ";
    for(int i=0;i<3;i++) {s+=QString::number(arr[i]);s+=" ";}
    s+="\n";
    int type=0;
    if(num==2)
    {
        type=1;
        s+="少阳:---\n";
    }
    else if(num==1)
    {
        type=3;
        s+="少阴:- -\n";
    }
    else if(num==0)
    {
        type=2;
        s+="老阳:---\n";
    }
    else if(num==3)
    {
        type=4;
        s+="老阴:- -\n";
    }
    s+="\n";
    return {s,type};
}
QString gua_two()
{
    int arr[6];
    QString s="";
    node t;
    s+="六爻为一卦\n";
    s+="第一爻:\n";
    t=yao2();
    arr[0]=t.type;
    s+=t.s;
    s+="第二爻:\n";
    t=yao2();
    arr[1]=t.type;
    s+=t.s;
    s+="第三爻:\n";
    t=yao2();
    arr[2]=t.type;
    s+=t.s;
    s+="第四爻:\n";
    t=yao2();
    arr[3]=t.type;
    s+=t.s;
    s+="第五爻:\n";
    t=yao2();
    arr[4]=t.type;
    s+=t.s;
    s+="第六爻:\n";
    t=yao2();
    arr[5]=t.type;
    s+=t.s;
    s+="卦象为：\n";
    for(int i=0;i<6;i++)
    {
        if(arr[i]==1||arr[i]==2)
        {
            s+="---\n";
        }
        else if(arr[i]==3||arr[i]==4)
        {
            s+="- -\n";
        }
    }
    s+="变卦： \n\n";
    for(int i=0;i<6;i++)
    {
        if(arr[i]==1||arr[i]==4)
        {
            s+="---\n";
        }
        else if(arr[i]==2||arr[i]==3)
        {
            s+="- -\n";
        }
    }
    return s;
}
gua2::gua2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gua2)
{
    ui->setupUi(this);
    srand(time(nullptr));
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
        tb->setText(gua_two());
        w->setLayout(&layout);
        w->show();
    });
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
        tb->setText(yao2().s);
        w->setLayout(&layout);
        w->show();
    });
    connect(ui->pushButton_3,&QPushButton::clicked,[=](){
        MainWindow * mw = new MainWindow();
        mw->setGeometry(this->geometry());
        mw->show();
        this->close();
    });
}

gua2::~gua2()
{
    delete ui;
}
