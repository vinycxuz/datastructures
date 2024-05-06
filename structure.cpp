#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
using std::string;

int main () {
  enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

  struct Calendar {
    Day today;
    int date;
    string month;
    int year;
  };

  Calendar h2024 = {Thursday, 25, "July", 2024};

  h2024.today = Friday;
  
}