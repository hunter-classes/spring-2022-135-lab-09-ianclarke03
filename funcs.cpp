#include <iostream>
#include "funcs.h"
#include <math.h>
#include <stdio.h>

#include "coord3d.h"







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









/*
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

*/


Coord3D* createCoord3D(double x, double y, double z){
  Coord3D* newcoord;
  newcoord = new Coord3D;
  *newcoord = Coord3D{x, y, z};
  
}


void deleteCoord3D(Coord3D *p){
  delete p;
}





