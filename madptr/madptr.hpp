#ifndef __NUTS_HPP__
#define __NUTS_HPP__

#include <cstddef>
#include <iostream>

struct pImpl;

struct Nuke 
{
private:
  
  struct pImpl* impl;
  bool hasPermissionToLaunchNukes;

public:
  
  Nuke();
  void LaunchNukes() const;
  void LaunchSubmarineNukes() const; 
};
#endif
