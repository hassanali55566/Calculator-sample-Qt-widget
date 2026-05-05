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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void FractionButtonPressed();
    void BackButtonPressed();
    void UnaryButtonPressed();
    void ClearAllButtonPressed(); // NEW: Handles the "del All" button

private:
    Ui::MainWindow *ui;
    double calcVal;

    // Operation state trackers
    bool divTrigger;
    bool multTrigger;
    bool addTrigger;
    bool subTrigger;
    bool powTrigger; // NEW: Handles the "x^n" button

    bool userIsTypingSecondNumber;
};
#endif // MAINWINDOW_H