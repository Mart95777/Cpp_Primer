// 1.4.2 the for statement
#include <iostream>

int main()
{
  int sum = 0;
  // sum for counter from 1 to 10
  for(int val = 1; val <= 10; ++val)
    sum += val;
  
	std::cout << "Sum of 1 to 10 inclusive is: "
  << sum << std::endl;
  
	return 0;
}

