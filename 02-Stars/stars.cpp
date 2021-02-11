#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int base = 2, exponent, result;
  char star = '*';
  int aux = 1;

  string starPattern;

  // Number entered by user is a power
  cout << "Please enter a number between 0 and 6: ";
  cin >> exponent;

  // iterates from 0 up to number entered by user 2^n
  for(int i = 0; i <= exponent; i++) {
    
    result = pow(base, i);
    for (int j = 1; j <= result; j++) {
        //Prints stars based on 2 ^ (the number entered by user)
      cout << star;
    }
    cout << endl;
  } 

  aux = exponent;
    // prints the second half of the star pattern  starting from number entered by user
    // Down to 2 ^ 0
  for (int i = exponent - 1; i >= 0; i--) {

    aux++;
    result = pow(base, i);
    for (int j = 1; j <= result; j++) {
      cout << star;
    }
    cout << endl;
  } 
  return 0;
}