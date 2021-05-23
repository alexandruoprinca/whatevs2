#pragma once

template <class Type>
class IRepository{
public:
  virtual Type at(int position) = 0;
  virtual void add(const Type& element) = 0;
  virtual void remove(int position) = 0;
  virtual void change(int position, const Type& element) = 0;
  virtual int size() const = 0;
  virtual void save() = 0;
};
