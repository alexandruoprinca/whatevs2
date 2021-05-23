#include "IRepository.h"
#include "Item.h"
#include <QVector>
#include <fstream>

class ItemRepository : public IRepository <Item> {
public:
    ItemRepository(std::ifstream& dataLocation);
    Item at(int position) override;
    void add(const Item& element) override;
    void remove(int position) override;
    void change(int position, const Item& element) override;
    int size() const override;
    void save() override;
private:
    QVector<Item> data;
};
