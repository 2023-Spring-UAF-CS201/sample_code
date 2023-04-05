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

  // member functions (aka methods)
  string getDate() {
    /*
    if (daysSinceNewYear == 0) {
      return "January 1";
    } else if (daysSinceNewYear == 1) {
      return "January 2";
    } else {
      return "Sometime later in the year";
    }
    */
    return date;
  }

  // get method - aka accessor method
  double getHigh() {
    return high;
  }

  double getLow() {
    return low;
  }

  // set method (aka updater)
  void setLow(double updatedLow) {
    low = updatedLow;
  }

  bool warmAllDay() {
    //return low >= 32;
    if (low >= 32) {
      return true;
    } else {
      return false;
    }
  }

  double temperatureRange() {
    return high - low;
  }
  
private:
  
  
  std::string date; // this is a *member variable*
  //int daysSinceNewYear;
  
  double high;      // this is another *member variable*

  double low;       // this is another *member variable*
  
};


int main() {

  // this calls the other constructor
  WeatherRecord sample{"March 22, 2023", 30.5, 8.0}; 


  WeatherRecord anotherSample; // this calls the default constructor of the WeatherRecord class

  
  cout << sample.getHigh() << endl;   // 30.5
  cout << sample.getLow() << endl;    //  8.0
  cout << sample.getDate() << endl;   // March 22, 2023
  cout << sample.warmAllDay() << endl;
  cout << sample.temperatureRange() << endl;
  
  // sample.low = -55.3;

  sample.setLow(-55.3);
  
  cout << endl;
  
  cout << sample.getHigh() << endl;   // 30.5
  cout << sample.getLow() << endl;    //-55.3
  cout << sample.getDate() << endl;   // March 22, 2023

  
  cout << endl;

  cout << anotherSample.getHigh() << endl;  // 100
  cout << anotherSample.getLow() << endl;   // -40
  cout << anotherSample.getDate() << endl;  // The eleventeeth of Never

  return 0;
}
