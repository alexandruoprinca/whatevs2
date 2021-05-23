#pragma once
#include <QString>

class Item {
public:
    Item() = default;
    Item(QString category, QString name, int quantity);
public:
    QString category{};
    QString name{};
    int quantity{};
};
