// 1.4.2 ...
#include <iostream>

int main()
{
  int sum = 0;
  for (int i = -100; i <= 100; ++i)
    sum += i;
  std::cout << "sum is: " << sum << std::endl;
  
  // a variation
  int otherSum = 0;
  for (int i = -100; i <= 100; ++i)
    otherSum += 1;
  std::cout << "otherSum is: " << otherSum << std::endl;
  
	return 0;
}

