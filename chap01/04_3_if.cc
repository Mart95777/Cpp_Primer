// 1.4.3 the if statement
#include <iostream>

int main()
{
  std::cout << "Enter two numbers: " << std::endl; 
	int v1, v2;
	std::cin >> v1 >> v2;  

  // determine which is lower numbers
  int lower, upper;
  if(v1 <= v2)
  {
    lower = v1;
    upper = v2;
  }    
  else
  {
    lower = v2;
    upper = v1;
  }
  
  int sum = 0;
  // sum for counter from 1 to 10
  for(int val = lower; val <= upper; ++val)
    sum += val;

	std::cout << "The sum of " << lower << " to " << upper
	          << " inclusive is: " << sum << std::endl;
  
	return 0;
}

