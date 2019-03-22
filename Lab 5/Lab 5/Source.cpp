//------------------------
// Author: Tyler Patrick
// Assignment: Lab 4
// Last Date Modified: 2/7/19
// Description: Give a sum, and box width from a user input

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	// Provide a do loop for the program to run
	do
	{
		// Display the diffrent user options
		cout << "S - Sum Between" << endl;
		cout << "B - Print Box" << endl;
		cout << "X - Exit Box" << endl;
		cout << "Enter Option : "  ;
		// Initalizes variables
		char choice;
		int num1, lastNum, sum = 0, boxSize;
		cin >> choice;
		//Provides choices for switch statement
		if (choice == 'S' || choice == 's' || choice == 'B' || choice == 'b' || choice == 'X' || choice == 'x')
		{
			switch (choice)
			{
				// Sum case
			case 'S':
				sum = 0;
				cout << "Enter Start and Stop Number: ";
				cin >> num1;
				cin >> lastNum;
				for (int i = num1; i <= lastNum; i++)
				{
					sum = sum + i;
				}
				cout << "Sum of numbers between those is : " << sum << endl;
				break;

			case 's':
				sum = 0;
				cout << "Enter Start and Stop Number: ";
				cin >> num1;
				cin >> lastNum;
				for (int i = num1; i <= lastNum; i++)
				{
					sum = sum + i;
				}
				cout << "Sum of numbers between those is :" << sum << endl;
				break;

			case 'B':
				// Box width Case

				cout << "Enter box size" ;
				cin >> boxSize;
				for (int i = 0; i < boxSize; i++)
				{
					for (int j = 0; j < boxSize; j++)
					{
						cout << "* ";
					}
					cout << endl;

				}
				break;

			case 'b':

				cout << "Enter box size" ;
				cin >> boxSize;
				for (int i = 0; i < boxSize; i++)
				{
					for (int j = 0; j < boxSize; j++)
					{
						cout << "* ";
					}
					cout << endl;
				}
				break;
				//Exit Case
			case 'X':
				cout << "Thanks for playing!" << endl;
				return 0;
				system("pause");
			case 'x':
				cout << "Thanks for playing!" << endl;
				system("pause");
				return 0;
			}

		}
		// Invalid Character given
		else
			cout << "Invaid option, try again " << endl;
	} while (1);
}

