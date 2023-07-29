//
// Set up a simple class definition based on Prata's Chapter 10 material
#pragma once
#include <string>

class Stock
{
public:
	stock():
//	Stock();  //Save the constructor and destructor for later
//	~Stock();
	void acquire(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();

private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares*share_val; }

};
