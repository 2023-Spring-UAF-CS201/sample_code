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

  for (int h{0}; h < 3; h+=1) {
  
    for (int n : numbers) {
      cout << h << ": " << n << endl;
    }

  }
  
  return 0;
}
