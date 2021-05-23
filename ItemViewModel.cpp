#include "ItemViewModel.h"


ItemViewModel::ItemViewModel(IRepository<Item>& modelData, QObject *parent)
    :QAbstractListModel{parent}
    ,modelData{modelData}
{
}

QVariant ItemViewModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    return QVariant();
}

int ItemViewModel::rowCount([[maybe_unused]] const QModelIndex &parent) const
{
    //return modelData.size();
    return 5;
}


QVariant ItemViewModel::data(const QModelIndex &index, [[maybe_unused]] int role) const
{
//    switch (index.column()){
//        case 0:
//            return modelData.at(index.row()).category;
//        case 1:
//            return modelData.at(index.row()).name;
//        case 2:
//            return modelData.at(index.row()).quantity;
//        default:
//            return "";
//    }
//    return {};
    return "Test";
}
