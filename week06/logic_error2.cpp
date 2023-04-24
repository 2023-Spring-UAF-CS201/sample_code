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

  
  // Print all of the elements in the vector, in order
  //
  // The code below has an off-by-one error.
  //
  // This code sets i to 1, and checks if i < 4
  //
  // The first time through the loop,
  //    i is 1, and grades[i] is 69
  cout << "for loop with off-by-one logic error:" << endl;
  for (int i{1}; i<grades.size(); i+=1) {

    cout << grades[i] << endl;
    
  }
  cout << endl;
  
  cout << "for-each loop with correct result:" << endl;
  for (int grade : grades) {
    cout << grade << endl;
  }
  
  return 0;
}
