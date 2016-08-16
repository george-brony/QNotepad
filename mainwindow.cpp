#include "mainwindow.h"
#include "ui_mainwindow.h"


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
    QString copy = ui->textEditor->textCursor().selectedText();
    QApplication::clipboard()->setText(copy);
}



void MainWindow::on_actionPaste_triggered()
{
    QString copy = QApplication::clipboard()->text();
    ui->textEditor->textCursor().insertText(copy);
}

void MainWindow::on_actionCut_triggered()
{
    QString copy = ui->textEditor->textCursor().selectedText();
    QApplication::clipboard()->setText(copy);
    ui->textEditor->textCursor().removeSelectedText();
}
