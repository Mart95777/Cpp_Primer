// 1.3 ...
#include <iostream>

int main()
{
  // ok
  std::cout << "/*";
  // ok
  std::cout << "*/";
  // missing terminating " ; uncomment to see
  //std::cout << /* "*/" */;
	return 0;
}

