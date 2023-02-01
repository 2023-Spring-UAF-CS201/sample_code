int main() {

  int x{7};

  // The following will cause a compile-time error,
  //   because x can only store integers, not strings
  x = "hello";
  
  return 0;
}
