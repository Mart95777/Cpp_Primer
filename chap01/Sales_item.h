// earlier definition check
#ifndef SALES_ITEM_H
#define SALES_ITEM_H

#include <iostream>
#include <string>

class Sales_item
{
  // member operator declaration
  friend bool operator==(const Sales_item&, const Sales_item&);
  
  // Contructors
  public:
  Sales_item(const std::string & book):
    isbn(book), units_sold(0), revenue(0.0)
  { }
  
  
}

#endif