// Assignment4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// Lizette Munoz 185 - 900
// 2/11/2023
//

#include <iostream>
#include "Coin.h"
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//I need this in order to be able to use random #
	srand(time(0));

	//Intances of coin object
	Coin coin1(0.25);
	Coin coin2(0.10);
	Coin coin3(0.05);
	double balance = 0.00;
	const double winningBalance = 1.00;
	
	

	//while loop will coin toss and add balance until balance is equal to winningBalance ( $1.00)
	//if statement to call bool getHeads. If bool is true return heads and add balance + coin value.
	//If bool is not true return only tails. balance stays the same. 

	cout << setprecision(2) << fixed ;
	cout << "Start balance: " << balance << endl;

	while (balance < winningBalance){
	
		coin1.toss();
		if (coin1.getHeads()) {
			balance += coin1.getValue();
			cout << "HEADS ...$" <<  coin1.getValue() << endl;
		}
		else if (!coin1.getHeads()) {
			cout << "tails" << endl;
		}
		

		coin2.toss();
		if (coin1.getHeads()) {
			balance += coin2.getValue();
			cout << "HEADS ...$" << coin2.getValue() << endl;
		}
		else
			if (!coin2.getHeads()) {
				cout << "tails" << endl;
			}
		

		coin3.toss();
		if (coin3.getHeads()) {
			balance += coin3.getValue();
			cout << "HEADS ...$" <<coin3.getValue() << endl;
		}
		else if (!coin2.getHeads()) {
			cout << "tails" << endl;
		}


		//if statements to decide if users wins or loses based off total balance
		if (balance == winningBalance) {
			cout << "Your tosses add up to $" << balance << " So you win the game." << endl;
		}
		else if (balance > winningBalance) {
			cout << "Your tosses add up to $" << balance << " So you lose the game." << endl;
		}
	}

	return 0;
}
