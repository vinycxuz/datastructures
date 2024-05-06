#include <iostream>
#include <cstdlib>

int main () {
  char oi = 1;
  char *p = &oi;

  std::cout << *p; //show 1
  
  oi = 2;
  std::cout << *p; //show 2

  *p = 3;
  std::cout << oi; //show 3


}