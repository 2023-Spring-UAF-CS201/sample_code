
class Demo {

public:
  // Default constructor
  Demo() {
    // set the value for each member variable
    zipCode = 99999;
    wordToGuess = "fantabulous";
    guessesRemaining = 5;
  }

  // Other constructor
  Demo(int z, string w, int g) {
    zipCode = z;
    wordToGuess = w;
    guessesRemaining = g;
  }

  int getZipCode() {
    return zipCode;
  }





  void setGuessesRemaining(int guesses) {
    guessesRemaining = guesses;
  }

  bool shortWord() {
    return wordToGuess.length() < 6;
  }
  
private:
  // Member data

  int zipCode;

  string wordToGuess;

  int guessesRemaining;
  
};




int main() {

  Demo game(50849, "fields", 4);

  // ...

  game.setGuessesRemaining(17);

  return 0;
}



