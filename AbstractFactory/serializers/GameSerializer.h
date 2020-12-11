//
// Created by Pavel Akhtyamov on 2019-03-19.
//

#pragma once

#include "AbstractFactory/rooms/Room.h"

#include <string>
#include <memory>
#include <vector>

class GameSerializer {
 public:
  std::string SerializeGame(const std::vector<std::shared_ptr<Room>> &rooms);
};



