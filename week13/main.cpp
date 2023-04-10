#include "cubed.h"

// The following is called a *forward declaration*
//
// It means: "Hey, there's gonna be a function like this declared later"
//
//int cubed(int x);


int main() {

  int answer = cubed(10);
  
  return 0;
}

/*
int cubed(int x) {
  return x * x * x;
}
*/
