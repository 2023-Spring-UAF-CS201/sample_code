#include <iostream>
#include "HotAirBalloon.h"

using std::cout;
using std::endl;
using std::string;

int main() {

  HotAirBalloon mine{"green", 1001};

  HotAirBalloon red;

  cout << mine.haveFun() << endl;

  string hi{"hi there"};

  cout << red << endl;
  
  return 0;
}
