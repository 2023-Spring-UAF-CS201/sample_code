#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// A *class* is a user-defined data type (think of this as a cookie cutter)
//
// An *object* is an *instance* of that class. (think of this as the resulting cookie)


// When naming a class, start the name with a capital letter
//
// When naming a variable, start the name with a lowercase letter


class WeatherRecord {

public:

  // default constructor
  WeatherRecord() {
    date = "The eleventeeth of Never";
    high = 100.0;
    low  = -40.0;
  }

  WeatherRecord(string d, double h, double l) {
    date = d;
    high = h;
    low = l;
  }


  // s.length()
  // v.length()
  // v.push_back(i)

  string getDate() {
    return date;
  }
  
private:
  
  std::string date; // this is a *member variable*

  double high;      // this is another *member variable*

  double low;       // this is another *member variable*
  
};


int main() {

  // this calls the other constructor
  WeatherRecord sample{"March 22, 2023", 30.5, 8.0}; 


  WeatherRecord anotherSample; // this calls the default constructor of the WeatherRecord class

  
  cout << sample.high << endl;   // 30.5
  cout << sample.low << endl;    //  8.0
  cout << sample.getDate() << endl;   // March 22, 2023

  sample.low = -55.3;

  cout << endl;
  
  cout << sample.high << endl;   // 30.5
  cout << sample.low << endl;    //-55.3
  cout << sample.getDate() << endl;   // March 22, 2023

  
  cout << endl;

  cout << anotherSample.high << endl;  // 100
  cout << anotherSample.low << endl;   // -40
  cout << anotherSample.getDate() << endl;  // The eleventeeth of Never

  return 0;
}
