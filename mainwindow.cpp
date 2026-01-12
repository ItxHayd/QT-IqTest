#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <QTimer>
#include <QString>
#include <QDebug>
#include <algorithm>
#include <ctime>
#include <QRandomGenerator>
#include <QVector>

#include <QMessageBox>

#include "questions.h"


char guess;
int correctAnswers = 0;
int current = 0 ;








MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initializeQuestions();

    std::shuffle(questions.begin(), questions.end(),*QRandomGenerator::global());

    texts << "The quick brown fox jumps over the lazy dog."
          << "Programming improves logical thinking and creativity."
          << "Consistency and practice are the keys to success."
          << "C++ is widely used in system level programming."
          << "Typing speed improves with daily practice."
          <<"Baby, ever wondered why I could make you laugh and cry? Eclipsing all your summer skies, some things never change."
          <<"Andy, you have to look inside and ask this question: who are you trying to entertain? The audience or yourself?";

    ui->textDisplay->setText("Press Start to begin the typing test.");
    ui->inputText->setEnabled(false);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTimer);
    connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::startTest);

}


void MainWindow::UpdateQuestions(){
    ui->questionNo->setText(QString("Question No %1").arg(current+1));

    ui->question->setText(questions[current].question);
    ui->Option_A->setText(questions[current].options[0]);
    ui->Option_B->setText(questions[current].options[1]);
    ui->Option_C->setText(questions[current].options[2]);
    ui->Option_D->setText(questions[current].options[3]);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ExitBtn_clicked()
{
    QTimer::singleShot(500, this, [](){

        std::exit(0);
    });
}


void MainWindow::on_IqBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->IqPage);
}



void MainWindow::on_nameBtn_clicked()
{
    QString userName = ui->userName->text();
    if(userName == ""){
        ui->userName->setPlaceholderText("this is mandatory");
    }
    else{
        qDebug() <<"Name: "<< userName;

        UpdateQuestions();

        ui->stackedWidget->setCurrentWidget(ui->IqPage_2);


    }

}




void MainWindow::on_Option_D_toggled()
{
    if(ui->Option_D->checkState() == Qt::Checked)
    {
        ui->Option_B->setCheckState(Qt::Unchecked );
        ui->Option_A->setCheckState(Qt::Unchecked );
        ui->Option_C->setCheckState(Qt::Unchecked );
    }
}
void MainWindow::on_Option_C_toggled()
{
    if(ui->Option_C->checkState() == Qt::Checked)
    {
        ui->Option_B->setCheckState(Qt::Unchecked );
        ui->Option_A->setCheckState(Qt::Unchecked );
        ui->Option_D->setCheckState(Qt::Unchecked );
    }
}
void MainWindow::on_Option_B_toggled()
{
    if(ui->Option_B->checkState() == Qt::Checked)
    {
        ui->Option_D->setCheckState(Qt::Unchecked );
        ui->Option_A->setCheckState(Qt::Unchecked );
        ui->Option_C->setCheckState(Qt::Unchecked );
    }
}
void MainWindow::on_Option_A_toggled()
{
    if(ui->Option_A->checkState() == Qt::Checked)
    {
        ui->Option_B->setCheckState(Qt::Unchecked );
        ui->Option_D->setCheckState(Qt::Unchecked );
        ui->Option_C->setCheckState(Qt::Unchecked );
    }
}


void MainWindow::on_ansBtn_clicked()
{

        if( ui->Option_A->checkState() == Qt::Unchecked &&
            ui->Option_B->checkState() == Qt::Unchecked &&
            ui->Option_C->checkState() == Qt::Unchecked &&
            ui->Option_D->checkState() == Qt::Unchecked)
        {
            guess = QChar::Null;
            ui->ansNeeded->setText("A Option Needs to be Selected");
        }
        else
        {
            if(ui->Option_A->checkState() == Qt::Checked)
            {
                guess = 'A';
            }
            else if(ui->Option_B->checkState() == Qt::Checked)
            {
                guess = 'B';
            }
            else if(ui->Option_C->checkState() == Qt::Checked)
            {
                guess = 'C';
            }
            else if(ui->Option_D->checkState() == Qt::Checked)
            {
                guess = 'D';
            }

            if(guess == questions[current].correctAnswer){
                ui->ansNeeded->setText("Correct Answer!");
                correctAnswers ++;
            }
            else{
                ui->ansNeeded->setText("Incorrect Answer!");
            }

            ui->Option_A->setCheckState(Qt::Unchecked);
            ui->Option_B->setCheckState(Qt::Unchecked);
            ui->Option_C->setCheckState(Qt::Unchecked);
            ui->Option_D->setCheckState(Qt::Unchecked);



            QTimer::singleShot(500, this, [this](){

                current++;

                if(current != 20){

                    ui->ansNeeded->setText(" ");

                    UpdateQuestions();

                }
                else{
                    ui->name->setText(ui->userName->text());
                    ui->score->setText(QString("%1/20").arg(correctAnswers));

                    double percentage = (static_cast<double>(correctAnswers) / 20) * 100;

                    // IQ calculation: Base 100 + (percentage - 50) * 2

                    int iqScore = 100 + ((percentage - 50) * 2);

                    // Add some randomness to make it more realistic
                    iqScore += (rand() % 21) - 10; // Add random value between -10 and +10

                    // Ensure IQ is within reasonable bounds
                    if(iqScore < 70) iqScore = 70 + rand() % 10;
                    if(iqScore > 160) iqScore = 160 - rand() % 10;

                    ui->iq->setText(QString::number(iqScore));
                    ui->stackedWidget->setCurrentWidget(ui->IqPage_3);
                }
            });


        }




}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->WelcomePage);
}






//// typing test








void MainWindow::startTest()
{
    int index = QRandomGenerator::global()->bounded(texts.size());
    textToType = texts[index];

    ui->textDisplay->setText(textToType);
    ui->inputText->clear();
    ui->inputText->setEnabled(true);
    ui->inputText->setFocus();

    timeLeft = 30;
    ui->timerLabel->setText(QString("Time Left: %1 s").arg(timeLeft));

    timer->start(1000);
    ui->startButton->setEnabled(false);
}

void MainWindow::updateTimer()
{
    timeLeft--;
    ui->timerLabel->setText(QString("Time Left: %1 s").arg(timeLeft));

    if (timeLeft <= 0)
    {
        timer->stop();
        finishTest();
    }
}

void MainWindow::finishTest()
{
    ui->inputText->setEnabled(false);

    QString userInput = ui->inputText->toPlainText();

    // Word count
    int words = userInput.split(' ', Qt::SkipEmptyParts).count();

    int wpm = (words * 60) / 30; // WPM for 30 seconds

    // Accuracy
    int correctChars = 0;
    int len = qMin(userInput.length(), textToType.length());
    for (int i = 0; i < len; i++)
        if (userInput[i] == textToType[i]) correctChars++;

    double accuracy = (double)correctChars / textToType.length() * 100;

    QString performance;
    if (wpm >= 70) performance = "Professional";
    else if (wpm >= 50) performance = "Advanced";
    else if (wpm >= 35) performance = "Intermediate";
    else if (wpm >= 20) performance = "Beginner";
    else performance = "Needs Practice";

    QMessageBox::information(this, "Test Result",
                             QString("Words: %1\nSpeed: %2 WPM\nAccuracy: %3%\nPerformance: %4")
                                 .arg(words).arg(wpm).arg(accuracy, 0, 'f', 1).arg(performance));

    ui->startButton->setEnabled(true);
    ui->textDisplay->setText("Press Start to begin the typing test.");
    ui->timerLabel->setText("Time Left: 0 s");
}


void MainWindow::on_TypingTestBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->TypingTest);
}

