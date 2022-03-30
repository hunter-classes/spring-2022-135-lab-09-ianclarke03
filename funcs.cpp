#include <iostream>
#include "funcs.h"
#include <math.h>
#include <stdio.h>

class Coord3D {
public:
    double x;
    double y;
    double z;
};



double length(Coord3D *p){
  double value;
  double xsq = pow (((*p).x) , 2.0);
  double ysq = pow (((*p).y) , 2.0);
  double zsq = pow (((*p).z) , 2.0);
  
  value = pow ((xsq + ysq + zsq) , 0.5);
  

  return value;
}

int main() {
  
  Coord3D pointP = {10, 20, 30};
  std::cout << length(&pointP) << std::endl; // would print 37.4166


  return 0;
}

