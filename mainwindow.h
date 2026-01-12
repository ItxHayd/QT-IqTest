#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ExitBtn_clicked();

    void on_IqBtn_clicked();

    void on_nameBtn_clicked();

    void UpdateQuestions();


    void on_Option_D_toggled();
    void on_Option_B_toggled();
    void on_Option_A_toggled();
    void on_Option_C_toggled();

    void on_ansBtn_clicked();

    void on_pushButton_clicked();

    void startTest();

    void updateTimer();

    void finishTest();

    void on_TypingTestBtn_clicked();

private:
    Ui::MainWindow *ui;

    QTimer *timer;

    int timeLeft;

    QString textToType;

    QStringList texts;
};
#endif // MAINWINDOW_H
