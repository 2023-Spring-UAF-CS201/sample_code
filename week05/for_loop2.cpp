#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main() {

  int num_times;
  cout << "How many times should I print \"Hello\"? ";
  cin >> num_times;

  for (int h{75}; h < 75 + num_times ; h += 1) {
    cout << "Hello" << endl;
  }

  return 0;
}
