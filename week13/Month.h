
enum class Month {

  jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    
};

Month fromString(std::string name) {

  if (name == "January" or name=="Jan") {
    return Month::jan;
  } else if (name == "February") {
    return Month::feb;
  } else {
    //    return Genre::other;
  }

}



std::string getName(Month m) {

  /**
  if (m == Month::jan) {
    return "January";
  } else if (m == Month::feb) {
    return "February";
  }
  */

  switch (m) {
  case Month::jan: return "January";
  case Month::feb: return "February";
    //...
  case Month::dec: return "December";
  default: return "I don't know that month";
  }

}
