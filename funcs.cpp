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



Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
  double length1, length2;
  length1 = length(p1);
  length2 = length(p2);

  if (length1 > length2)
    return p1;
  else if (length1 < length2)
    return p2;
}





int main() {

  //Task A
  Coord3D pointP = {10, 20, 30};
  std::cout << length(&pointP) << std::endl; // would print 37.4166

  

  //Task B
  Coord3D pointX = {10, 20, 30};
  Coord3D pointY = {-20, 21, -22};   
  
  std::cout << "Address of X: " << &pointX << std::endl;
  std::cout << "Address of Y: " << &pointY << std::endl;

  Coord3D * ans = fartherFromOrigin(&pointX, &pointY);
   
  std::cout << "ans = " << ans << std::endl; // So which point is farther?
  //std::cout << "ans = " << *ans << std::endl;
  if (ans == &pointX)
    std::cout << "Point X is farther.\n";
  else if (ans == &pointY)
    std::cout << "Point Y is farther.\n";


  
  return 0;
}

