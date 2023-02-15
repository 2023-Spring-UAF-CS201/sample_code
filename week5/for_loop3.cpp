#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main() {

  int num_times;
  cout << "How many times should I print \"Hello\"? ";
  cin >> num_times;

  int starting_point;
  cout << "What starting point should I use? ";
  cin >> starting_point;
  
  for (int h{starting_point}; h < starting_point + num_times ; h += 1) {
    cout << "Hello" << endl;
  }

  return 0;
}
