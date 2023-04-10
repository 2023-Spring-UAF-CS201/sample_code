# Header

* A header file (*.h)
  - says that something exists (a class or a function)
  - it tells you the *what*
  - it does not necessarily tell you the *how*
  
* In the C family of languages (including C++), it is common to separate 
  - the *what* and the *how*
  - the *what* in a header file (*.h)
  - the *how* in a corresponding .cpp file

* Organizing your code
  - In a .h file, we will generally omit all function bodies
  - The function bodies will go in the corresponding .cpp file
  - For example:
    * Rectangle.h will contain the class declaration
	* Rectangle.cpp will contain the body of each function in the class
