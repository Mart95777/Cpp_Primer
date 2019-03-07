// 2.2 Literal constants
#include <iostream>

int main()
{
  std::cout << "The same line for both cases." << std::endl; 	
  // notice, that if you have indentation in the second line below, compiler will 
  // rise an error like: 'cou' is not a member of 'std'
  std::cou\
t << "The \
  same line for both cases\
  ." << std:\
:endl\
  ; 

  std::cout << "... not quite." << std::endl;
  
	return 0;
}

