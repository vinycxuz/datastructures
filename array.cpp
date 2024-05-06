#include <iostream>
#include <cstdlib>

int main () {
  int a[] = {1, 2, 3, 4, 5};
  bool b[] = {true, false, true, false, true};
  char c[] = {'a', 'b', 'c', 'd', 'e'};

  char *p = c; //p point to c[0]

  char *q = &c[0]; //q point to c[0]
}