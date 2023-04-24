#include <iostream>

using std::cout;
using std::endl;

int main() {

  for (int x{0}; x < 10; x+=1) {

    for (int y{10}; y < 100; y += 10) {
    
      cout << x << "," << y << endl;

    }

  }

  return 0;
}
