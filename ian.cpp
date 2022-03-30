#include <iostream>
#include "funcs.h"
#include <math.h>
#include <stdio.h>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};



int main() {
  
  Coord3D pointP = {10, 20, 30};

Coord3D *p; // declaring a pointer (p).
*p = &pointP; // storing the address of 'pointP' in the pointer

  cout << *p << endl; // would print 37.4166


  return 0;
}
