#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFont>
#include <QFontDialog>
#include <QColor>
#include <QColorDialog>

#include "glwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_menu_Board_triggered();
    void on_action_Show_triggered();
    void on_action_Hide_triggered();
    void on_action_Font_triggered();

    void on_action_Reset_default_triggered();

    void on_action_Color_triggered();
    
    bool on_action_Save_as_triggered();
    bool on_action_Save_triggered();
    void on_action_Open_triggered();
    void on_action_New_triggered();

private:
    Ui::MainWindow *ui;
    GLWidget *mpGLWidget;
    bool saveFile();
    bool maybeSave();
    QString curFile;
};

#endif // MAINWINDOW_H
