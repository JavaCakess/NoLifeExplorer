#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "NoLifeNx/NX.hpp"

#include "Sound.h"

#include <QMainWindow>
#include <QStandardItemModel>

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
    void on_action_Open_triggered();
    void handleItemClicked(QModelIndex index);

    void on_actionLoop_toggled(bool arg1);

private:
    void handleNode(const NL::Node& node, QStandardItem *parent = nullptr);
    Ui::MainWindow *ui;
    NL::File* file;
    QStandardItemModel model;
    Sound sound;
    bool m_looping = true;
};

#endif // MAINWINDOW_H
