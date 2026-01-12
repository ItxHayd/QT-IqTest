/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *WelcomePage;
    QVBoxLayout *verticalLayout;
    QLabel *WelcomeLabel;
    QLabel *EmptyLabel;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_7;
    QPushButton *IqBtn;
    QPushButton *TypingTestBtn;
    QPushButton *ExitBtn;
    QVBoxLayout *verticalLayout_6;
    QLabel *EmptyLabel_2;
    QWidget *TypingTest;
    QLabel *textDisplay;
    QPushButton *startButton;
    QLabel *timerLabel;
    QTextEdit *inputText;
    QWidget *IqPage;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QLineEdit *userName;
    QPushButton *nameBtn;
    QSpacerItem *horizontalSpacer;
    QWidget *IqPage_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *questionNo;
    QLabel *question;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QCheckBox *Option_D;
    QCheckBox *Option_C;
    QLabel *ansNeeded;
    QPushButton *ansBtn;
    QCheckBox *Option_B;
    QCheckBox *Option_A;
    QWidget *IqPage_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *name;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *score;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLabel *iq;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(613, 429);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMaximumSize(QSize(16777215, 391));
        stackedWidget->setStyleSheet(QString::fromUtf8("background: dark;"));
        WelcomePage = new QWidget();
        WelcomePage->setObjectName("WelcomePage");
        verticalLayout = new QVBoxLayout(WelcomePage);
        verticalLayout->setObjectName("verticalLayout");
        WelcomeLabel = new QLabel(WelcomePage);
        WelcomeLabel->setObjectName("WelcomeLabel");
        WelcomeLabel->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"font: 700 26pt \"Segoe Print\";"));
        WelcomeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(WelcomeLabel);

        EmptyLabel = new QLabel(WelcomePage);
        EmptyLabel->setObjectName("EmptyLabel");

        verticalLayout->addWidget(EmptyLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");

        horizontalLayout->addLayout(verticalLayout_7);

        IqBtn = new QPushButton(WelcomePage);
        IqBtn->setObjectName("IqBtn");
        IqBtn->setStyleSheet(QString::fromUtf8("margin-left: 4px;\n"
"padding : 5px;\n"
"font: 9pt \"Sans Serif Collection\";"));

        horizontalLayout->addWidget(IqBtn);

        TypingTestBtn = new QPushButton(WelcomePage);
        TypingTestBtn->setObjectName("TypingTestBtn");
        TypingTestBtn->setStyleSheet(QString::fromUtf8("margin-left: 4px;\n"
"padding : 5px;\n"
"font: 9pt \"Sans Serif Collection\";"));

        horizontalLayout->addWidget(TypingTestBtn);

        ExitBtn = new QPushButton(WelcomePage);
        ExitBtn->setObjectName("ExitBtn");
        ExitBtn->setStyleSheet(QString::fromUtf8("margin-left: 4px;\n"
"padding : 5px;\n"
"font: 9pt \"Sans Serif Collection\";"));

        horizontalLayout->addWidget(ExitBtn);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setSizeConstraint(QLayout::SizeConstraint::SetMinAndMaxSize);

        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout->addLayout(horizontalLayout);

        EmptyLabel_2 = new QLabel(WelcomePage);
        EmptyLabel_2->setObjectName("EmptyLabel_2");

        verticalLayout->addWidget(EmptyLabel_2);

        stackedWidget->addWidget(WelcomePage);
        TypingTest = new QWidget();
        TypingTest->setObjectName("TypingTest");
        textDisplay = new QLabel(TypingTest);
        textDisplay->setObjectName("textDisplay");
        textDisplay->setGeometry(QRect(10, 10, 551, 141));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        textDisplay->setFont(font);
        textDisplay->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"font: 700 14pt \"Segoe Print\";"));
        textDisplay->setAlignment(Qt::AlignmentFlag::AlignCenter);
        startButton = new QPushButton(TypingTest);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(430, 280, 101, 41));
        timerLabel = new QLabel(TypingTest);
        timerLabel->setObjectName("timerLabel");
        timerLabel->setGeometry(QRect(50, 290, 131, 41));
        QFont font1;
        font1.setPointSize(11);
        timerLabel->setFont(font1);
        timerLabel->setStyleSheet(QString::fromUtf8("color :  rgb(49, 52, 255);"));
        inputText = new QTextEdit(TypingTest);
        inputText->setObjectName("inputText");
        inputText->setGeometry(QRect(30, 160, 521, 31));
        stackedWidget->addWidget(TypingTest);
        IqPage = new QWidget();
        IqPage->setObjectName("IqPage");
        gridLayout_2 = new QGridLayout(IqPage);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(IqPage);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"font: 700 26pt \"Segoe Print\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        label_2 = new QLabel(IqPage);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(14);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        label_3 = new QLabel(IqPage);
        label_3->setObjectName("label_3");
        QFont font3;
        font3.setPointSize(16);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3->setWordWrap(true);

        verticalLayout_2->addWidget(label_3);

        label_5 = new QLabel(IqPage);
        label_5->setObjectName("label_5");
        QFont font4;
        font4.setPointSize(24);
        label_5->setFont(font4);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_5);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_6 = new QLabel(IqPage);
        label_6->setObjectName("label_6");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe Print")});
        font5.setPointSize(12);
        font5.setBold(true);
        label_6->setFont(font5);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_6);

        userName = new QLineEdit(IqPage);
        userName->setObjectName("userName");

        horizontalLayout_3->addWidget(userName);

        nameBtn = new QPushButton(IqPage);
        nameBtn->setObjectName("nameBtn");
        nameBtn->setFont(font1);

        horizontalLayout_3->addWidget(nameBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        stackedWidget->addWidget(IqPage);
        IqPage_2 = new QWidget();
        IqPage_2->setObjectName("IqPage_2");
        verticalLayout_5 = new QVBoxLayout(IqPage_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        questionNo = new QLabel(IqPage_2);
        questionNo->setObjectName("questionNo");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe Print")});
        font6.setPointSize(26);
        font6.setBold(true);
        font6.setItalic(false);
        questionNo->setFont(font6);
        questionNo->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"font: 700 26pt \"Segoe Print\";"));
        questionNo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(questionNo);

        question = new QLabel(IqPage_2);
        question->setObjectName("question");
        question->setFont(font2);
        question->setWordWrap(true);

        verticalLayout_4->addWidget(question);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        Option_D = new QCheckBox(IqPage_2);
        Option_D->setObjectName("Option_D");
        QFont font7;
        font7.setPointSize(12);
        Option_D->setFont(font7);

        gridLayout->addWidget(Option_D, 3, 0, 1, 1);

        Option_C = new QCheckBox(IqPage_2);
        Option_C->setObjectName("Option_C");
        Option_C->setFont(font7);

        gridLayout->addWidget(Option_C, 2, 0, 1, 1);

        ansNeeded = new QLabel(IqPage_2);
        ansNeeded->setObjectName("ansNeeded");
        ansNeeded->setFont(font7);

        gridLayout->addWidget(ansNeeded, 5, 0, 1, 1);

        ansBtn = new QPushButton(IqPage_2);
        ansBtn->setObjectName("ansBtn");
        QFont font8;
        font8.setPointSize(12);
        font8.setBold(true);
        font8.setItalic(true);
        ansBtn->setFont(font8);

        gridLayout->addWidget(ansBtn, 6, 0, 1, 1);

        Option_B = new QCheckBox(IqPage_2);
        Option_B->setObjectName("Option_B");
        Option_B->setFont(font7);

        gridLayout->addWidget(Option_B, 1, 0, 1, 1);

        Option_A = new QCheckBox(IqPage_2);
        Option_A->setObjectName("Option_A");
        Option_A->setFont(font7);

        gridLayout->addWidget(Option_A, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        stackedWidget->addWidget(IqPage_2);
        IqPage_3 = new QWidget();
        IqPage_3->setObjectName("IqPage_3");
        verticalLayout_3 = new QVBoxLayout(IqPage_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(IqPage_3);
        label_4->setObjectName("label_4");
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Rockwell")});
        font9.setPointSize(16);
        font9.setBold(true);
        label_4->setFont(font9);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(IqPage_3);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(label_7);

        name = new QLabel(IqPage_3);
        name->setObjectName("name");
        name->setFont(font2);

        horizontalLayout_4->addWidget(name);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(IqPage_3);
        label_9->setObjectName("label_9");
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(label_9);

        score = new QLabel(IqPage_3);
        score->setObjectName("score");
        score->setFont(font2);

        horizontalLayout_5->addWidget(score);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_11 = new QLabel(IqPage_3);
        label_11->setObjectName("label_11");
        label_11->setFont(font7);
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_6->addWidget(label_11);

        iq = new QLabel(IqPage_3);
        iq->setObjectName("iq");
        QFont font10;
        font10.setPointSize(14);
        font10.setBold(true);
        font10.setItalic(true);
        iq->setFont(font10);
        iq->setStyleSheet(QString::fromUtf8("color:rgb(170, 0, 0) ;"));

        horizontalLayout_6->addWidget(iq);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton = new QPushButton(IqPage_3);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font11;
        font11.setPointSize(11);
        font11.setBold(true);
        pushButton->setFont(font11);

        horizontalLayout_7->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(IqPage_3);

        horizontalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("MainWindow", "WELCOME", nullptr));
        EmptyLabel->setText(QString());
        IqBtn->setText(QCoreApplication::translate("MainWindow", "IQ Test", nullptr));
        TypingTestBtn->setText(QCoreApplication::translate("MainWindow", "Typing Test", nullptr));
        ExitBtn->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        EmptyLabel_2->setText(QString());
        textDisplay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        timerLabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "IQ Test", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Welcome to the Comprehensive Testing Suite!", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "This application will test your IQ through various questions", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Answer 20 random questions", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Your Name :", nullptr));
        nameBtn->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        questionNo->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        question->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        Option_D->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        Option_C->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        ansNeeded->setText(QString());
        ansBtn->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        Option_B->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        Option_A->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "RESULT", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        name->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Score: ", nullptr));
        score->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Your Calculated IQ appears to be :", nullptr));
        iq->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Back to Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
