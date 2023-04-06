//#pragma once
#include <iostream>
#include <string>
using namespace std;

class Tovar
{
	string marka;
	string model;
	int price;

public:
	Tovar();
	Tovar(string, string, int);
	Tovar(const Tovar&);
	~Tovar();

	string get_marka();
	void set_marka(string);

	string get_model();
	void set_model(string);

	int  get_price();
	void set_price(int);

	void show();
};
