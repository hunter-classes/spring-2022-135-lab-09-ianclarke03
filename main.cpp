#include <iostream>


#include "funcs.h"




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


  
  std::cout << "Task E\n";
  double x, y, z;
  std::cout << "Enter position: ";
  std::cin >> x >> y >> z;
  Coord3D *ppos = createCoord3D(x,y,z);
    
  std::cout << "Enter velocity: ";
  std::cin >> x >> y >> z;
  Coord3D *pvel = createCoord3D(x,y,z);

  move(ppos, pvel, 10.0);

  std::cout << "Coordinates after 10 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

  deleteCoord3D(ppos); // release memory
  deleteCoord3D(pvel);

  
  
  return 0;
}