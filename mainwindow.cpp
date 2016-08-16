#include "mainwindow.h"
#include "ui_mainwindow.h"

 QString copy= "";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionCopy_triggered()
{
    copy = ui->textEditor->textCursor().selectedText();
}



void MainWindow::on_actionPaste_triggered()
{
    ui->textEditor->textCursor().insertText(copy);
}
