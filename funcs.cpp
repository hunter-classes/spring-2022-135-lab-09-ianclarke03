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









void move(Coord3D *ppos, Coord3D *pvel, double dt){
  (*ppos).x = (*ppos).x + ((*pvel).x * dt);
  (*ppos).y = (*ppos).y + ((*pvel).y * dt);
  (*ppos).z = (*ppos).z + ((*pvel).z * dt);
}










std::string * createAPoemDynamically() {
    std::string *ppoem;      // declare a pointer to string
                        // (it will store the address)

    ppoem = new std::string; // <-- DYNAMICALLY ALLOCATE MEMORY
                        //     for a poem string and
                        //     store its address in the pointer

    *ppoem =            // put a poem there
      "   Those             \n"
      "   who can write     \n"
      "   have a            \n"
      "   lot to            \n"
      "   learn from those  \n"
      "   bright            \n"
      "   enough            \n"
      "   not to.           \n"; 

    return ppoem;       // return the address where the poem is
}


//Hints: remember to call delete operator on p in appropriate location. Afterwards, set p to be nullptr.









int main() {

  std::cout << "Task A\n";
  Coord3D pointP = {10, 20, 30};
  std::cout << length(&pointP) << std::endl; // would print 37.4166
  std::cout << "\n";

  

  std::cout << "Task B\n";
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
  std::cout << "\n";




  std::cout << "Task C\n";
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
  // prints: 2 -10 100.4
  std::cout << "\n";



  std::cout << "Task D\n";
  std::string * p;
  p = createAPoemDynamically();
    // The memory at the address p still stores the poem we
    // put in it during the function call. Neat!

    // At any later moment, you can print it out:
  std::cout << *p << std::endl;
  delete p;

  
  return 0;
}





    

