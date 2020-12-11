//
// Created by Pavel Akhtyamov on 2019-02-25.
//

#pragma once

#include "AbstractFactory/rooms/NormalRoom.h"
#include "AbstractFactory/rooms/HardRoom.h"

#include <memory>


class RoomFactory {
 public:
  virtual std::shared_ptr<NormalRoom> CreateNormalRoom() = 0;
  virtual std::shared_ptr<HardRoom> CreateHardRoom() = 0;
};



