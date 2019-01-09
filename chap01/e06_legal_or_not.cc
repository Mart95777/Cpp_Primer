// 1.2.2 using the IO library
#include <iostream>

int main()
{
	int v1 = 2;
  int v2 = 3; 
  // The two semicolons make the code not compiling. 
  // Comment them out to compile.
	std::cout << "The sum of " << v1;
            << " and " << v2;
	          << " is: " << v1 + v2 
            << std::endl;
	return 0;
}

