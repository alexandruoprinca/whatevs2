#pragma once
#include <QAbstractTableModel>
#include <Item.h>
#include <IRepository.h>

class ItemViewModel : public QAbstractListModel{
    Q_OBJECT
 public:
    enum roles{
        test = Qt::UserRole+1
    };

    ItemViewModel(IRepository<Item>& modelData, QObject * parent = 0);
    int rowCount(const QModelIndex& parent = QModelIndex()) const override;
//    int columnCount(const QModelIndex& parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation,
                             int role = Qt::DisplayRole) const;
 private:
    IRepository<Item>& modelData;
};
