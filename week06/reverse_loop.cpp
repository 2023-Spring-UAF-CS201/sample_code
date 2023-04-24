#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::endl;



int main() {

  vector<int> grades{78, 69, 85, 94};
  //
  // grades[0] is 78
  // grades[1] is 69
  // grades[2] is 85
  // grades[3] is 94

  
  for (int i{grades.size() - 1}; i >= 0; i -= 1) {

    cout << grades[i] << endl;
    
  }

  
  return 0;
}
