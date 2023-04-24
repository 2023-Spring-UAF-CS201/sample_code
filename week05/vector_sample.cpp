#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main() {

  vector<int> numbers;

  numbers.push_back(17);
  numbers.push_back(-34);
  numbers.push_back(0);

  for (int n : numbers) {
    cout << n << endl;
  }
  
  return 0;
}
