#include <iostream>

// ./function_sample1 && echo "Success!" || echo "Failure"

int main() {

  int n;
  std::cout << "Please enter a positive number: ";
  std::cin >> n;
  
  if (n <= 0) {
    std::cout << "You didn't follow the instructions\n :(\n";
    return -1;
  } 
  
  return 0;
}




