#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ItemService.h>
#include <ItemViewModel.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(ItemService& itemService, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_deleteBtn_clicked();

    void on_filterBtn_clicked();

private:
    Ui::MainWindow *ui;
    ItemService& itemService;
    ItemViewModel itemModel;
};
#endif // MAINWINDOW_H
