// A calculator program that out puts the exact change 
// specified in dollars, quarters, dimes, nickels, and pennies

#include <iostream>
using namespace std;

int main() {
  
  float due, recieved, change;
  int   leftOver, // Used to hold change
        dollars, 
        quarters, 
        dimes, 
        nickels, 
        pennies;

  cout << "Enter the amount due: $" ;
  cin >> due; // Money customer owes
  cout << "Enter the amount recieved: $";
  cin >> recieved; // Money customer pays

  float amountOwed = recieved - due; 
  float amountDue = due - recieved;

  change = amountOwed;
  leftOver = change * 100;
  dollars = leftOver / 100; 
  quarters = leftOver % 100 / 25;
  dimes = leftOver % 100 % 25 / 10;
  nickels = leftOver % 100 % 25 %  10 / 5;
  pennies = leftOver % 100 % 25 % 10 % 5;

  if (recieved >= due) {
            cout << "Here is your change: $" << change << endl;
            cout << dollars << " dollars, " 
                  << quarters << " quarters, " 
                  << dimes << " dimes, "
                  << nickels << " nickels, "
                  << pennies << " pennies. " << endl;
            } 
            else {
              cout << "Its not enough! you owe: $" << amountDue;
            }


}