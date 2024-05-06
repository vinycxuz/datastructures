#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
using std::string;

int main () {
  struct People {
    string name;
    int age;
  };	

  People *p = new People;
  p->name = "Vinicius"; //it's the same (*p).name = "Vinicius";
  p->age = 24;

  
}