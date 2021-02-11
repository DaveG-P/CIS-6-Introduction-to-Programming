/*  
Write a program that prints ten # characters on one line, 
then a word entered by the user on the next line, then 
another ten # characters. For full credit, only type "##########" 
ONCE (this means you'll need to store that string in a variable). 
For example, if the user types "BIPP", your program should print:

Goal:
##########
BIPP
##########

*/

#include <iostream>
#include <string>

using namespace std;
int main(){

  	string hashTags  = "##########";
	string input;

  	cout << "Please type something: "  << endl;
	cin >> input;

	cout << hashTags << endl;
  	cout <<  input << endl;
  	cout << hashTags << endl;

	

	

 return 0;
}