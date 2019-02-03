// 1.4.1 the while statement
#include <iostream>

int main()
{
  int sum = 0, val = 1;
  // keep adding while val is 10 or less.
  while (val <= 10)
  {
    sum += val;
    ++val;
  }
  
	std::cout << "Sum of 1 to 10 inclusive is: "
  << sum << std::endl;
  
	return 0;
}

