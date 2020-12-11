//
// Created by Pavel Akhtyamov on 2019-03-19.
//

#pragma once

#include "AbstractFactory/serializers/GameSerializer.h"

#include <string>

class IsaacFacade {
 public:
  std::string CreateGame(std::string difficulty);

 private:
  GameSerializer serializer_;
};



