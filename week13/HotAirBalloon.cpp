#include "HotAirBalloon.h"

HotAirBalloon::HotAirBalloon() {
  color = "red";
  capacityInPounds = 850;
}

HotAirBalloon::HotAirBalloon(std::string c, double capacity) {
  color = c;
  capacityInPounds = capacity;
}

std::string HotAirBalloon::getColor() const {
  return color;
}

double HotAirBalloon::getCapacity() const {
  return capacityInPounds;
}

std::string HotAirBalloon::haveFun() {
  return "Yaaaaaaayyyy!";
}

std::ostream& operator<<(std::ostream& os, const HotAirBalloon& balloon) {
  os << "HotAirBalloon(" << balloon.getColor() << ", " << balloon.getCapacity() << ")";
  return os;
}



