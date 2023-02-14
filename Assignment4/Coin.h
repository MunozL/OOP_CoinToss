#pragma once
#include <iostream>
using namespace std;
class Coin
{
	//attributes
private:
	string sideUp; // will hold either “HEADS” or “tails” 
	bool heads; // will be true if the heads side is up and false if the heads side is down.
	double value; // will hold the decimal value of the coin object.

public:
	Coin(double value); //constructor header. It passes the coin object value
	bool getHeads(); //
	string getSideUp();
	double getValue();
	void toss(); //random # generator function
};

