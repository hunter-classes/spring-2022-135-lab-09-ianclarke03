#include <iostream>
#include "funcs.h"
#include <math.h>
#include <stdio.h>

#include "coord3d.h"



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




int main(){

  
  while(true){
    std::string * p;
    p = createAPoemDynamically();
   
  //std::cout << *p << std::endl;
    delete p;
  }

  
  return 0;
}
