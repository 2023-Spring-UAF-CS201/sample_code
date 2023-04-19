#include <iostream>

using std::cout;
using std::endl;


enum class Month {
  january=1,
  february,
  march,
  april,
  may,
  june,
  july,
  august,
  september,
  october,
  november,
  december
};

std::ostream& operator<<(std::ostream& stream, Month m) {

  stream << "It's a Month!!!";

  return stream;
}


class Date {

public:

  Date(int y, Month m, int d)
  {
    year = y;
    month = m;
    day = d;
  }
  

private:

  int year;
  Month month;
  int day;
  
};

int daysInMonth(Month m) {
  
  switch(m) {

  case Month::september:
  case Month::april:
  case Month::june:
  case Month::november:
    return 30;

  case Month::february:
    return 28;

  default:     // all the rest
    return 31;

  }


    /*    
  case Month::january:
  case Month::march:
  case Month::may:
  case Month::july:
  case Month::august:
  case Month::october:
  case Month::december:
    */
  
}



int main() {

  Month m = Month::february;

  std::cout << "Month is " << m << std::endl;

  /*
  operator<<(std::cout, "Month is ");

  operator<<(std::cout, m);

  operator<<(std::cout, std::endl);
  */
  
  
  Date d{1945, m, 27};
  

  /*
  if (m == Month::january) {

  } else if (m == Month::february) {

  }
  */
  
  return 0;
}



