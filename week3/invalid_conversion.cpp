int main() {

  int x{7};

  // The following will cause a compile-time error,
  //   because we previously declared that x is of type int
  //
  // That means that x can only store integers, not strings
  x = "hello";
  
  return 0;
}
