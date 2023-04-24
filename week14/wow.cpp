#include <string>

using std::string;

class Wonder {

public:

  Wonder() = default;

  Wonder(const Wonder& original) = delete;
  /*
  {
    description = original.description;
    name = original.name;
  }
  */
  
  Wonder(string n, string d) {
    description = d;
    name = n;
  }


  
private:

  string description;
  string name;
  
};


void visit(Wonder somewhere) {
  
}

int main() {

  Wonder giza("Great Pyramid of Giza", "Ancient pyramid in Egypt");

  Wonder hangingGardens;

  //  visit(giza);

  Wonder otherPyramid = giza;
  
  return 0;
}
