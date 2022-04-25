/********************************************************************************
** Form generated from reading UI file 'gua1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUA1_H
#define UI_GUA1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gua1
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gua1)
    {
        if (gua1->objectName().isEmpty())
            gua1->setObjectName(QString::fromUtf8("gua1"));
        gua1->resize(800, 600);
        centralwidget = new QWidget(gua1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(widget_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout->addWidget(textBrowser);

        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout->addWidget(widget);


        verticalLayout_2->addWidget(widget_2);

        gua1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gua1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        gua1->setMenuBar(menubar);
        statusbar = new QStatusBar(gua1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        gua1->setStatusBar(statusbar);

        retranslateUi(gua1);

        QMetaObject::connectSlotsByName(gua1);
    } // setupUi

    void retranslateUi(QMainWindow *gua1)
    {
        gua1->setWindowTitle(QApplication::translate("gua1", "MainWindow", nullptr));
        label->setText(QApplication::translate("gua1", "\346\230\245\347\247\213\345\217\244\347\255\256\346\263\225", nullptr));
        textBrowser->setHtml(QApplication::translate("gua1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \345\244\247\350\241\215\344\271\213\346\225\260\344\272\224\345\215\201\357\274\214\345\205\266\347\224\250\345\233\233\345\215\201\346\234\211\344\271\235\343\200\202\345\210\206\350\200\214\344\270\272\344\272\214\344\273\245\350\261\241\344\270\244\357\274\214\346\214\202\344\270\200\344\273\245\350\261\241\344\270\211\357\274\214\346\217\262\344\271\213\344\273\245\345\233\233\344\273\245\350\261\241\345\233\233\346\227\266\357\274\214\345\275\222\345\245\207\344\272\216\346\211\220\344\273\245\350\261\241\351\227\260\357\274"
                        "\214\344\272\224\345\262\201\345\206\215\351\227\260\357\274\214\346\225\205\345\206\215\346\211\220\350\200\214\345\220\216\346\214\202\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \345\244\251\346\225\260\344\272\224\357\274\214\345\234\260\346\225\260\344\272\224\357\274\214\344\272\224\344\275\215\347\233\270\345\276\227\350\200\214\345\220\204\346\234\211\345\220\210\343\200\202\345\244\251\346\225\260\344\272\214\345\215\201\346\234\211\344\272\224\357\274\214\345\234\260\346\225\260\344\270\211\345\215\201\357\274\214\345\207\241\345\244\251\345\234\260\344\271\213\346\225\260\344\272\224\345\215\201\346\234\211\344\272\224\343\200\202\346\255\244\346\211\200\344\273\245\346\210\220\345\217\230\345\214\226\350\200\214\350\241\214\351\254\274\347\245\236\344\271\237\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \344\271\276\344\271\213\347\255\226\344\272\214\347\231\276\344\270\200\345\215\201\346\234\211\345\205\255\357\274\214\345\235\244\344\271\213\347\255\226\347\231\276\345\233\233\345\215\201\346\234\211\345\233\233\357\274\214\345\207\241\344\270\211\347\231\276\346\234\211\345\205\255\345\215\201\357\274\214\345\275\223\346\234\237\344\271\213\346\227\245\343\200\202\344\272\214\347\257\207\344\271\213\347\255\226\357\274\214\344\270\207\346\234\211\344\270\200\345\215\203\344\272\224\347\231\276\344\272\214\345\215\201\357\274\214\345\275\223\344\270\207\347\211\251\344\271\213\346\225\260\344\271\237\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \346\230\257\346\225\205\345\233\233\350\220\245\350\200\214\346\210\220\346\230\223\357\274\214\345\215\201\346\234\211\345\205\253\345\217\230\350\200"
                        "\214\346\210\220\345\215\246\357\274\214\345\205\253\345\215\246\350\200\214\345\260\217\346\210\220\357\274\214\345\274\225\350\200\214\344\274\270\344\271\213\357\274\214\350\247\246\347\261\273\350\200\214\351\225\277\344\271\213\357\274\214\345\244\251\344\270\213\344\271\213\350\203\275\344\272\213\346\257\225\347\237\243\343\200\202\357\274\210\343\200\212\347\263\273\350\276\236\344\270\212\343\200\213\357\274\211</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p></body></html>", nullptr));
        pushButton_5->setText(QApplication::translate("gua1", "\347\256\227\344\270\200\345\215\246", nullptr));
        pushButton->setText(QApplication::translate("gua1", "\346\250\241\346\213\237\344\270\200\345\215\246\350\277\207\347\250\213", nullptr));
        pushButton_2->setText(QApplication::translate("gua1", "\346\250\241\346\213\237\344\270\200\347\210\273\350\277\207\347\250\213", nullptr));
        pushButton_3->setText(QApplication::translate("gua1", "\346\250\241\346\213\237\344\270\200\345\217\230\350\277\207\347\250\213", nullptr));
        pushButton_4->setText(QApplication::translate("gua1", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gua1: public Ui_gua1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUA1_H
