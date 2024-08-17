#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QThread>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::string welcome_string = "Welcome to MyUI";
std::string welcome_string_font_weight = "Bold";
int main_btn_width = 300;
int main_btn_height = 60; void MainWindow::set_normal_brightness(){ ui->centralwidget->setStyleSheet("background-color: lightgray;"); ui->main_btn->setStyleSheet("color: white; background-color: gray;");  // Darker button background ui->reset_btn->setStyleSheet("color: white; background-color: gray;");
}

void MainWindow::set_high_brightness(){
    ui->centralwidget->setStyleSheet("background-color: white;");
    ui->main_btn->setStyleSheet("color: black; background-color: white;");  // Darker button background
    ui->reset_btn->setStyleSheet("color: black; background-color: white");
}

void MainWindow::set_low_brightness(){
    ui->centralwidget->setStyleSheet("background-color: gray;");
    ui->main_btn->setStyleSheet("color: lightgray; background-color: gray;");  // Darker button background
    ui->reset_btn->setStyleSheet("color: lightgray; background-color: gray");
}


void MainWindow::set_large_font() {
    // Define a larger font for the welcome label
    QFont welcomeFont;
    welcomeFont.setPointSize(30);  // Increase font size
    welcomeFont.setWeight(QFont::Bold);  // Make the font bold
    welcomeFont.setItalic(false);  // Optional: Make the font non-italic if desired
    ui->main_btn->resize(400, 80);

    // Apply the large font to the welcome label
    ui->welcome_label->setFont(welcomeFont);

    // Define a larger font for the main button
    QFont btnFont;
    btnFont.setPointSize(15);  // Increase font size
    btnFont.setWeight(QFont::Bold);  // Set the font weight
    btnFont.setItalic(false);  // Optional: Make the font non-italic if desired

    // Apply the large font to the main button
    ui->main_btn->setFont(btnFont);
}

void MainWindow::set_small_font() {
    // Define a larger font for the welcome label
    QFont welcomeFont;
    welcomeFont.setPointSize(16);  // Increase font size
    welcomeFont.setWeight(QFont::Light);  // Make the font bold
    welcomeFont.setItalic(true);  // Optional: Make the font non-italic if desired

    // Apply the large font to the welcome label
    ui->welcome_label->setFont(welcomeFont);
    ui->main_btn->resize(250, 40);

    // Define a larger font for the main button
    QFont btnFont;
    btnFont.setPointSize(7);  // Increase font size
    btnFont.setWeight(QFont::Light);  // Set the font weight
    btnFont.setItalic(true);  // Optional: Make the font non-italic if desired

    // Apply the large font to the main button
    ui->main_btn->setFont(btnFont);
}

void MainWindow::set_normal_font() {
    // Define a larger font for the welcome label
    QFont welcomeFont;
    welcomeFont.setPointSize(20);  // Increase font size
    welcomeFont.setWeight(QFont::Normal);  // Make the font bold/ Optional: Make the font non-italic if desired

    // Apply the large font to the welcome label
    ui->welcome_label->setFont(welcomeFont);
    ui->main_btn->resize(300, 60);

    // Define a larger font for the main button
    QFont btnFont;
    btnFont.setPointSize(9);  // Increase font size
    btnFont.setWeight(QFont::Normal);  // Set the font weight
    btnFont.setItalic(false);  // Optional: Make the font non-italic if desired

    // Apply the large font to the main button
    ui->main_btn->setFont(btnFont);
}

void MainWindow::set_high_contrast_mode() {
    // Set a high-contrast yellow background color
    ui->centralwidget->setStyleSheet("background-color: #FFFF00;");  // Yellow background

    // Define a high-contrast font for the welcome label
    QFont welcomeFont;
    welcomeFont.setPointSize(22);
    welcomeFont.setWeight(QFont::Bold);
    welcomeFont.setItalic(false);  // Non-italic for clarity

    // Apply the font and color to the welcome label
    ui->welcome_label->setFont(welcomeFont);
    ui->welcome_label->setStyleSheet("color: #FF0000;");  // Red text color

    // Define a high-contrast font for the main button
    QFont btnFont;
    btnFont.setPointSize(9);
    btnFont.setWeight(QFont::Bold);
    btnFont.setItalic(false);  // Non-italic for clarity

    // Apply the font and color to the main button
    ui->main_btn->setFont(btnFont);
    ui->main_btn->setStyleSheet("color: #FF0000; background-color: #FFFF00;");  // Red text on yellow background

    // Apply similar high-contrast styles to the reset button
    ui->reset_btn->setFont(btnFont);
    ui->reset_btn->setStyleSheet("color: #FF0000; background-color: #FFFF00;");  // Red text on yellow background
}

void MainWindow::set_low_contrast_mode() {
    // Set a low-contrast light green background color
    ui->centralwidget->setStyleSheet("background-color: green;");  // Light greenish background

    // Define a lighter font color for the welcome label
    QFont welcomeFont;
    welcomeFont.setPointSize(22);
    welcomeFont.setWeight(QFont::Bold);
    welcomeFont.setItalic(false);  // Non-italic for clarity

    // Apply the font and color to the welcome label
    ui->welcome_label->setFont(welcomeFont);
    ui->welcome_label->setStyleSheet("color: blue;");  // Light blue text color

    // Define a lighter font color for the main button
    QFont btnFont;
    btnFont.setPointSize(9);
    btnFont.setWeight(QFont::Bold);
    btnFont.setItalic(false);  // Non-italic for clarity

    // Apply the font and color to the main button
    ui->main_btn->setFont(btnFont);
    ui->main_btn->setStyleSheet("color: blue; background-color: green");  // Light blue text on a light greenish background

    // Apply similar low-contrast styles to the reset button
    ui->reset_btn->setFont(btnFont);
    ui->reset_btn->setStyleSheet("color: blue; background-color: green");  // Light blue text on a light greenish background
}


void MainWindow::set_dark_mode()
{
    ui->centralwidget->setStyleSheet("background-color: #2e2e2e;");  // Dark gray background

    // Update the font for the welcome label
    QFont welcomeFont;
    welcomeFont.setPointSize(22);
    welcomeFont.setWeight(QFont::Bold);
    welcomeFont.setItalic(true);  // Optional: Make the font italic for dark mode

    ui->welcome_label->setFont(welcomeFont);

    // Update the font for the main button
    QFont btnFont;
    btnFont.setPointSize(9);
    btnFont.setWeight(QFont::Normal);
    btnFont.setItalic(true);  // Optional: Make the font italic for dark mode

    ui->main_btn->setFont(btnFont);

    // Optionally, change the text color for better contrast
    ui->welcome_label->setStyleSheet("color: white;");
    ui->main_btn->setStyleSheet("color: white; background-color: #444444;");  // Darker button background
    ui->reset_btn->setStyleSheet("color: white; background-color: #444444;");
}


void MainWindow::on_reset_btn_clicked()
{
    QFont welcomeFont;
    welcomeFont.setPointSize(22);
    welcomeFont.setWeight(QFont::Bold);

    QFont btnFont;
    btnFont.setPointSize(9);
    btnFont.setWeight(QFont::Normal);

    ui->welcome_label->setText(QString::fromStdString(welcome_string));
    ui->welcome_label->setFont(welcomeFont);
    ui->welcome_label->setStyleSheet("color: black;");
    ui->main_btn->resize(main_btn_width, main_btn_height);
    ui->main_btn->setFont(btnFont);
    ui->centralwidget->setStyleSheet("background-color: lightgray;");
    ui->main_btn->setStyleSheet("color: black; background-color: gray;");  // Darker button background
    ui->reset_btn->setStyleSheet("color: black; background-color: gray");
}

void MainWindow::set_user(std::string name) {
    std::string new_string = welcome_string +' '+ name+ '!';
    ui->welcome_label->setText(QString::fromStdString(new_string));
}



void MainWindow::on_main_btn_clicked()
{
    int index = std::rand() % 3;
    if(index == 0) {
        set_user("Adam");
        set_high_brightness();
        set_high_contrast_mode();
        set_large_font();
    }
    else if(index == 1) {
        set_user("Eve");

        set_normal_brightness();
        set_low_contrast_mode();
        set_normal_font();
    }
    else if(index == 2) {
        set_user("Noah");

        set_low_brightness();
        set_dark_mode();
        set_small_font();
    }
}

