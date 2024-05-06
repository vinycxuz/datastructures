#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
using std::string;

int main () {
  int number = 1;
  if (number == 1) {
    cout << "Number is 1" << endl;
  } else if (number == 2) {
    cout << "Number is 2" << endl;
  } else {
    cout << "Number is not 1 or 2" << endl;
  }

  while (number < 10) {
    cout << "Number is " << number << endl;
    number++;
  }

  switch (number == 1)
  {
  case true:
    cout << "Number is 1" << endl;
    break;
  
  default:
    break;
  }
}
