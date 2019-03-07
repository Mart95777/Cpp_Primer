// 2.3.3. Defining objects initialization
#include <iostream>
#include "../chap01/Sales_item.h"

int main()
{
  // need an object of Sales_item
  Sales_item book;
  double book_price = book.avg_price();
  
  std::cout << "The book_price value: " << book_price << std::endl; 	
  
	return 0;
}

