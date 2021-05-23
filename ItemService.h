#pragma once
#include <IRepository.h>
#include "Item.h"

class ItemService{
public:
    ItemService(IRepository<Item>& repository);
    void addItem(QString category, QString name, int quantity);
    void removeItem(int position);
    IRepository<Item>& getRepository();
private:
    IRepository<Item>& repository;
};
