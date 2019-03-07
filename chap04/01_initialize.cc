// 4.1. Arrays, defining size
#include <iostream>
#include <string>

int main()
{
  const unsigned array_size = 3;
  int in[array_size] = {0,1,2};
  int ia[] = {0,1,2};
  
  const unsigned array_size2 = 5;
  int ib[array_size2] = {0,1,2};
  
  std::cout << ib[0] << " " << ib[1] << " " << ib[2] << " " <<
   ib[3] << " " << ib[4] << " " << std::endl;
   
  // and for string, notice empty strings
  std::string ic[array_size2] = {"hi", "bye"};
  
  std::cout << "," << ic[0] << "," << ic[1] << "," << ic[2] << "," <<
   ic[3] << "," << ic[4] << "," << std::endl;
    
	return 0;
}


