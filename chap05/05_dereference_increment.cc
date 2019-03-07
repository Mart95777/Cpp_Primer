// 5.5 Increment and decrement
#include <iostream>
#include <vector>

int main()
{
  std::vector<int> ivec; //empty vector
  int cnt1 = 10;
  // add 10 elements to ivec1
  while(cnt1 > 0) 
    ivec.push_back(cnt1--);
  
  std::vector<int>::iterator iter = ivec.begin(); //empty vector
  while(iter != ivec.end())
    std::cout << *iter++ << " ";
  std::cout << std::endl;
  
  // note what happens when we use prefix. See precedence table
  iter = ivec.begin();
  while(iter != ivec.end())
    std::cout << *(++iter) << " ";
  std::cout << std::endl;
  
  // the first case be also written with more code
  iter = ivec.begin();
  while(iter != ivec.end())
  {
    std::cout << *iter << " ";
    ++iter;
  }

	return 0;
}


