#include "ItemRepository.h"
#include "ItemParser.h"
ItemRepository::ItemRepository(std::ifstream& dataLocation)
    : data{ItemParser::Parse(dataLocation)}
{}

Item ItemRepository::at(int position)
{
    if(position < data.size())
        return data[position];
    return Item{};
}

void ItemRepository::add(const Item &element)
{
    data.append(element);
}

void ItemRepository::remove([[maybe_unused]] int position)
{
    //nush men fa tu cv aici
}

void ItemRepository::change(int position, const Item &element)
{
    data[position] = element;
}

int ItemRepository::size() const
{
    return data.size();
}

void ItemRepository::save()
{
    //gl
}
