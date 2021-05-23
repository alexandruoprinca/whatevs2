#pragma once
#include "Item.h"
#include <QVector>
#include <fstream>
#include <regex>

class ItemParser{
public:
    static QVector<Item> Parse(std::ifstream& file);
};
