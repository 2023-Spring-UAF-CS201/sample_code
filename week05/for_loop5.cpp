#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;


int main() {

  cout << INT_MIN << " " << INT_MAX << endl;
  
  int starting_point;
  cout << "What starting point should I use? ";
  cin >> starting_point;

  int ending_point;
  cout << "What ending point should I use? ";
  cin >> ending_point;
  
  int increment;
  cout << "How much should I increment each time? ";
  cin >> increment;
  
  for (int h{starting_point}; h <= ending_point ; h += increment) {
    cout << h << ": Hello" << endl;
  }

  return 0;
}
