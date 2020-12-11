//
// Created by Pavel Akhtyamov on 2019-03-20.
//

#include "Facade/facades/Facade.h"

#include <iostream>

int main() {
  Facade facade;
  std::cout << facade.CreateNormalGame() << " is normal game" << std::endl;
  std::cout << facade.CreateHardGame() << " is hard game" << std::endl;
  std::cout << facade.CreateVegiburger() << " is burger" << std::endl;
}