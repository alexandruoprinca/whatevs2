#include "ItemService.h"

ItemService::ItemService(IRepository<Item> &repository)
    :repository{repository}
{
}

void ItemService::addItem(QString category, QString name, int quantity)
{
    repository.add(Item{category, name, quantity});
    repository.save();
}

void ItemService::removeItem(int position)
{
    repository.remove(position);
    repository.save();
}

IRepository<Item> &ItemService::getRepository()
{
    return repository;
}
