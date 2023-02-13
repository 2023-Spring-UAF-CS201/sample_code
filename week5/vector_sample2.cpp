#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {

  vector<int> numbers;

  int number_from_user;

  int x;

  cout << "Enter two numbers at a time, pressing enter after each pair: " << endl;
  while (cin >> number_from_user >> x) {
    numbers.push_back(number_from_user);
    numbers.push_back(x);
  }
  
  for (int n : numbers) {
    cout << n << endl;
  }
  
  return 0;
}
