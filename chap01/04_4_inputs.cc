// 1.4.4 the unknown number of inputs
#include <iostream>

int main()
{
  int sum = 0, value;
  // read till end of file, to end enter CTRL+z or CTRL+d
  while(std::cin >> value)
    sum += value;

	std::cout << "Sum is: " << sum << std::endl;
  
	return 0;
}

