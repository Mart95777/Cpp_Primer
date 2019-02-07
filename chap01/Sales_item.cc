#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item book;
  // read data
  std::cout << "Enter data: ";
  std::cin >> book;
  // write data
  std::cout << book << std::endl;
  
  return 0;
}