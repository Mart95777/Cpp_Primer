// 4.1. Arrays, defining size
#include <iostream>
#include <string>

int get_size();

int main()
{
  const unsigned buf_size = 512, max_files = 20;
  int staff_size = 27; // nonconst
  const unsigned sz = get_size(); //const value not known until run time
  
  char input_buffer[buf_size]; // ok, const
  std::string fileTable[max_files + 1]; //ok, const expression
  
  double salaries[staff_size]; // can be error, non const, but compiler 
  // extensions can make it work (C90/99)
  
  int test_scores[get_size()]; // error, non const expresion, but can work as above
  int vals[sz]; // error, size not known until run time, but can work as above
  
	return 0;
}

int get_size()
{
  return 3;
}

