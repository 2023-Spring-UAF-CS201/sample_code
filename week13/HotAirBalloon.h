#include <string>


class HotAirBalloon {
public:
  HotAirBalloon();

  HotAirBalloon(std::string c, double capacity);

  std::string getColor();

  double getCapacity();

  std::string haveFun();

 private:
  std::string color;
  double capacityInPounds;
};
