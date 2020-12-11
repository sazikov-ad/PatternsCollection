//
// Created by Pavel Akhtyamov on 2019-03-19.
//

#pragma once

#include "AbstractFactory/rooms/NormalRoom.h"
#include "AbstractFactory/rooms/HardRoom.h"

#include <string>
#include <memory>

class RoomSerializer {
 public:
  std::string SerializeNormalRoom(std::shared_ptr<NormalRoom> room);
  std::string SerializeHardRoom(
      std::shared_ptr<HardRoom> room,
      std::shared_ptr<Room> previous_room
  );


  bool IsNormalRoom(std::shared_ptr<Room> room);
};



