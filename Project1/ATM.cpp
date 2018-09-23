
#include <iostream>

#include <string>

using namespace std;


int main()

{

	// Declaring the variables for the program 



	char newTransaction = 'y';

	int withdrawAmount = 0;

	int fifthyBill, twentyBill, tenBill, fiveBill, oneBill;


	// The Do while loop will execute the program at least once

	do

	{

		//Ask the user to enter the amount they'd like to withdraw 

		cout << "Please enter the amount you'd like to withdraw!" << endl;

		cin >> withdrawAmount;

		cout << withdrawAmount << endl;


		// Check if the maximum is more than 300 

		if (withdrawAmount > 300)

		{

			cout << "Sorry, the the maximum amount you can withdraw is $300" << endl;

		}


		// Check if the minimum is at least 1 

		if (withdrawAmount <= 0)

		{


			cout << "Sorry, the the minimum amount you can withdraw is $1" << endl;


		}



		// If the user enters the number between 1 and 300 the If statement will execute 

		if (withdrawAmount > 0 && withdrawAmount < 301)

		{

			// This conditions check if the amount is at least $50

			if (withdrawAmount >= 50)

			{


				// take the amount enter and then multiple it by 50 to get the 

				// number of $50 bills

				fifthyBill = withdrawAmount / 50;

				cout << "you have " << fifthyBill << " $50 bills" << endl;



				// get the remainer after deviding it by $50 

				withdrawAmount %= 50;

			}



			/* The next 4 If statements are checking for the same condition,

			 * it will check whether the withdrawAmount can be divisble by

			 * 20, 10, 5



			*/

			if (withdrawAmount >= 20)

			{

				twentyBill = withdrawAmount / 20;

				cout << "you have " << twentyBill << " $20 bills" << endl;

				withdrawAmount %= 20;

			}


			if (withdrawAmount >= 10)

			{

				tenBill = withdrawAmount / 10;

				cout << "you have " << tenBill << " $10 bills" << endl;

				withdrawAmount %= 10;


			}

			if (withdrawAmount >= 5)

			{

				fiveBill = withdrawAmount / 5;

				cout << "you have " << fiveBill << " $5 bills" << endl;

				withdrawAmount %= 5;



			}

			if (withdrawAmount >= 1)

			{

				oneBill = withdrawAmount / 1;

				cout << "you have " << oneBill << " $1 bills" << endl;




				// here we check whether the remainer is zero 

				withdrawAmount %= oneBill;



			}


			// if the remainer is zero, then the program will ask whether 

			// the user would like to perform another transaction 

			if (withdrawAmount == 0)

			{

				cout << "Would you like another transaction? Press Y for yes:  " << endl;

				cin >> newTransaction;

			}



			// If none of the condition matches, then the program should display this message


			else

			{


				cout << "We can't seem to figure out the problem " << endl;

			}



		}

	}


	// If the user press Y then the program will running again at the start of the Do..While loop

	while (newTransaction == 'y' || newTransaction == 'Y');




	return 0;

}

