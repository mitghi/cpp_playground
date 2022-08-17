#include "madptr.hpp"

int main() 
{
  Nuke n;

  n.LaunchNukes();
  n.LaunchSubmarineNukes(); 

  
  *(*(bool**)(&n))= true;
  *((bool*)(&n)+8) = true;
   
  
  n.LaunchNukes();
  n.LaunchSubmarineNukes();  
}
