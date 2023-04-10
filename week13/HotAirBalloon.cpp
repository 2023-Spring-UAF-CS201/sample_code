#include "HotAirBalloon.h"

HotAirBalloon::HotAirBalloon() {
  color = "red";
  capacityInPounds = 850;
}

HotAirBalloon::HotAirBalloon(std::string c, double capacity) {
  color = c;
  capacityInPounds = capacity;
}

std::string HotAirBalloon::getColor() {
  return color;
}

double HotAirBalloon::getCapacity() {
  return capacityInPounds;
}

std::string HotAirBalloon::haveFun() {
  return "Yaaaaaaayyyy!";
}





