//declaring header mains
#include <iostream>
#include <string>
using namespace std;

//Method: The main method
//Purpose: To get the users name, age, and money; and return the information
//Parameters: Name as string, age as integer, and money as a float value
//Returns: Users inputted name, age, and money
int main()
{
	//Declaring variables
	string fullName;
	int age;
	float money;

	//Promt the user to enter their age
	cout << "\nPlease enter your age: ";
	cin >> age;

	//Prompt the user to enter their amount of money
	cout << "\nPlease tell me how much money you have: ";
	cin >> money;

        cin.ignore(1, '\n');  // had to add this for it to work right for me

	//Prompt the user to enter their full name
	cout << "\nPlease enter your full name: ";
	getline( cin, fullName);

	//Display the name back to the user; and adds another line
	cout << "\nThank you " << fullName << endl;

	//Display the age back to the user
	cout << "\nYou are " << age;
	cout << " years old; ";

	//Display the amount of money back to the user
	cout << "\nand you have $" << money;
	cout << " in your pocket.";

	//Giving the user an ending message
	cout << "\nGoodbye .....\n";

	//Keeping the window open
	//system("PAUSE");

	// and finally, return zero
	return 0;
}
