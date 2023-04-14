#include <string>
#include <ostream>

class HotAirBalloon {
public:
  HotAirBalloon();

  HotAirBalloon(std::string c, double capacity);

  std::string getColor() const; // const here means "Calling this method won't change the object"

  double getCapacity() const;

  std::string haveFun();

 private:
  std::string color;
  double capacityInPounds;
};

std::ostream& operator<<(std::ostream& os, const HotAirBalloon& balloon);














/*
ostream& operator<<(ostream& os, const int& i);

ostream& operator<<(ostream& os, const string& s);


// Syntactic sugar
//
cout << i;  // Hey! I know what this means:

operator<<(cout, i);

operator+=(balloon, 42.5)

balloon += 42.5;
*/
