//
// Created by Pavel Akhtyamov on 2019-03-19.
//

#include "BurgerFacade.h"

#include "Builder/builders/BurgerBuilder.h"
#include "Builder/builders/HamburgerBuilder.h"
#include "Builder/builders/VegiburgerBuilder.h"

#include <iostream>
#include <memory>


std::string BurgerFacade::createHamburger() {
  std::shared_ptr<BurgerBuilder> hamburger_builder = std::make_shared<HamburgerBuilder>();
  chef_.SetBuilder(hamburger_builder);
  std::shared_ptr<Burger> burger = chef_.Cook();
  return burger->serialize();
}

std::string BurgerFacade::createVegiburger() {
  std::shared_ptr<BurgerBuilder> hamburger_builder = std::make_shared<HamburgerBuilder>();
  chef_.SetBuilder(hamburger_builder);
  std::shared_ptr<Burger> burger = chef_.Cook();
  return burger->serialize();
}

std::string BurgerFacade::createBurger(const std::string &type) {
  if (type == "hamburger") {
    return createHamburger();
  } else {
    return createVegiburger();
  }
}

