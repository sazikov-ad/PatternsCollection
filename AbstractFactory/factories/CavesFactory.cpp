//
// Created by Pavel Akhtyamov on 2019-02-25.
//

#include "AbstractFactory/rooms/CavesNormalRoom.h"
#include "AbstractFactory/rooms/CavesHardRoom.h"

#include "CavesFactory.h"

std::shared_ptr<NormalRoom> CavesFactory::CreateNormalRoom() {
  return std::make_shared<CavesNormalRoom>();
}

std::shared_ptr<HardRoom> CavesFactory::CreateHardRoom() {
  return std::make_shared<CavesHardRoom>();
}
