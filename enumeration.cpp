#include <iostream>
#include <cstdlib>

int main () {
  enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
  Day today = Thursday;

  std::cout << today;

  return 0;
}