#include "mainwindow.h"
#include "ItemRepository.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    std::ifstream fileLocation{"list.txt"};
    IRepository<Item>* repository = new ItemRepository{fileLocation};
    ItemService service{*repository};
    MainWindow w{service};
    w.show();
    return a.exec();
}
