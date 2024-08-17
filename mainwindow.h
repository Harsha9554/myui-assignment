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
    void on_reset_btn_clicked();
    // contrast
    void set_dark_mode();
    void set_high_contrast_mode();
    void set_low_contrast_mode();
    // brightness
    void set_normal_brightness();
    void set_high_brightness();
    void set_low_brightness();
    // font
    void set_large_font();
    void set_small_font();
    void set_normal_font();

    void set_user(std::string name);


    void on_main_btn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
