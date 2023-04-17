# What does const mean?

lol

good question

* It can mean "This variable is actually a constant. Its value will never change

```
int main() {

	const double pi{3.14};
	
	pi = 7.0; // This is a compile-time error. You can't change the value of a const variable.

	return 0;
}
```


* It can mean "This method won't cause the object's member variable values to change"

```
class HotAirBalloon {
public:

...

  std::string getColor() const {
	return color;
  }


private:
  std::string color;
};


int main() {

	const HotAirBalloon redBalloon{"red", 1000.0};
	
	//	redBalloon = HotAirBalloon{"pink", 750.0}; // this is a compile-time error
	
	cout << redBalloon.getColor();

	return 0;
}
```




