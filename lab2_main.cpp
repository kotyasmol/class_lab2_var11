#include "Header.h"
#include <string>
#include <iostream>
using namespace std;

Tovar make_tovar()
{

	string s;
	string d;
	int f;

	cout << "Введите марку: "; cin >> s; cout << endl;
	cout << "Введите модель: "; cin >> d; cout << endl;
	cout << "Введите стоимость: "; cin >> f; cout << endl;

	Tovar t(s, d, f);
	return t;
}

void print_tovar(Tovar t)
{
	t.show();
}

void main()
{
	// без параметров
	Tovar t1;
	t1.show();

	// с параметром
	Tovar t2 ("Лада","приора", 200000);
	t2.show();

	// копирование  

	Tovar t3 = t2;
	t3.set_marka("Тойота");
	t3.set_model("селика");
	t3.set_price(400000);
	print_tovar(t3);
	t1 = make_tovar();
	t1.show();

}