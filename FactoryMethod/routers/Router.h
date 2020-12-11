//
// Created by Pavel Akhtyamov on 2020-02-16.
//

#pragma once

#include "FactoryMethod/routes/Route.h"

#include <string>
#include <memory>

class Router {
 public:
  virtual std::shared_ptr<Route> CreateRoute() const = 0;

  std::string ConnectToNet();
};



