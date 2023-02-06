// ATM practice problem
// june 22 2022

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void showMenu() {

	cout << "**********MENU**********" << endl;
	cout << "1. Account Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "************************" << endl;
	

}

int main() {

	double balance = 500;
	int option;

	do {
		showMenu();

		cout << "Option: ";
		cin >> option;

		system("cls");


		switch (option) {

		case 1: cout << "Balance: $" << balance << endl; break;
		case 2: cout << "Deposit Amount: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount; break;
		case 3: cout << "Withdrawal Amount: ";
			double withdrawalAmount;
			cin >> withdrawalAmount;
			if (withdrawalAmount <= balance) {
				balance -= withdrawalAmount;
			}
			else
				cout << "Insufficient Funds." << endl; break;

		}
	} while (option != 4);

	system("pause>0");

}