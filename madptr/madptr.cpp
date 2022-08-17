#include "madptr.hpp"

void Nuke::LaunchNukes() const {
    if (hasPermissionToLaunchNukes) 
      {
        std::cout << "Launching Nuke" << std::endl;
        return;
        
      }
    std::cout << "You don't have permission to Launch Nukes" << std::endl;
    return;
}

struct pImpl 
{
private:
  bool hasPerm;
  
public:
  void Launch() const 
  {
    if (hasPerm) 
      {
        std::cout << "Launching Nukes from Submarines" << std::endl;        
      } else 
      {
        std::cout << "You don't have permission to lunch nukes from submarine" << std::endl;        
      }
    return;       
  }  
};

void Nuke::LaunchSubmarineNukes() const 
{
  this->impl->Launch();
  return;
}

Nuke::Nuke() 
{
  impl = new pImpl();  
}
