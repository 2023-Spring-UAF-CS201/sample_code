#include <iostream>

using std::cout;

int main() {

  int year{2023};
  int month{2};
  int day{8};

  cout << year << "-";

  if (month < 10) {
    cout << 0;
  }

  cout << month << "-";

  if (day < 10) {
    cout << 0;
  }

  cout << day << "\n";
  
  
  for (int i{1}; i < 15; i=i+1) {

    if (i < 10) {
      cout << 0;
    }

    cout << i << "\n";

  }
  
  return 0;
}
