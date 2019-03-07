// 5.5 Increment and decrement
#include <iostream>
#include <vector>

int main()
{
  int i =0, j = 0;
  // prefix
  j = ++i;
  
  std::cout << "prefix  j: " << j << " i:" << i << std::endl;
  
  i =0, j = 0;
  //postfix
  j = i++;
  std::cout << "postfix j: " << j << " i:" << i << std::endl;
  
  // prefix decrement
  std::vector<int> ivec2;
  int cnt2 = 10;
  // add 10 elements to ivec1
  while(cnt2 > 0) 
    ivec2.push_back(--cnt2);
  std::cout << "prefix number of elements: " << ivec2.size() << std::endl;
  for (int i=0; i <10; ++i) std::cout << ivec2[i] << " ";
  std::cout << std::endl;
  
  // postfix decrement
  std::vector<int> ivec1; //empty vector
  int cnt1 = 10;
  // add 10 elements to ivec1
  while(cnt1 > 0) 
    ivec1.push_back(cnt1--);
  std::cout << "postfix number of elements: " << ivec1.size() << std::endl;
  for (int i=0; i <10; ++i) std::cout << ivec1[i] << " ";
  std::cout << std::endl;

	return 0;
}


