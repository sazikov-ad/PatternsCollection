//
// Created by Pavel Akhtyamov on 2019-03-19.
//

#include "IsaacFacade.h"

#include "AbstractFactory/factories/BasementFactory.h"
#include "AbstractFactory/factories/CavesFactory.h"
#include "AbstractFactory/factories/RoomFactory.h"
#include "AbstractFactory/rooms/Room.h"

#include <vector>


std::string IsaacFacade::CreateGame(std::string difficulty) {
  std::vector<std::shared_ptr<Room>> rooms;

  std::shared_ptr<RoomFactory> basement_factory = std::make_shared<BasementFactory>();
  std::shared_ptr<RoomFactory> caves_factory = std::make_shared<CavesFactory>();
  if (difficulty == "normal") {
    rooms.push_back(basement_factory->CreateNormalRoom());
    rooms.push_back(basement_factory->CreateNormalRoom());
    rooms.push_back(caves_factory->CreateNormalRoom());
    rooms.push_back(caves_factory->CreateHardRoom());
  } else {
    rooms.push_back(basement_factory->CreateNormalRoom());
    rooms.push_back(basement_factory->CreateHardRoom());
    rooms.push_back(caves_factory->CreateHardRoom());
    rooms.push_back(caves_factory->CreateHardRoom());
  }
  return serializer_.SerializeGame(rooms);
}
