#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

Tovar::Tovar()  // конструктор без параметров
{
	marka = "";
	model = "";
	price = 0;
	cout << "Конструктор без параметров для объекта " << this << endl;
}

Tovar::Tovar(string a, string b, int c) // конструктор с параметрами
{
	marka = a;
	model = b;
	price = c;

	cout << "Конструктор c параметрами для объекта " << this << endl;
}

Tovar::Tovar(const Tovar& t) // конструктор копирования
{
	marka = t.marka;
	model = t.model;
	price = t.price;

	cout << "Конструктор копирования для объекта " << this << endl;
}

Tovar::~Tovar() //деструктор 
{
	cout << "Деструктор для объекта " << this << endl;
}

//селекторы 

string Tovar::get_marka()
{
	return marka;
}

string Tovar::get_model()
{
	return model;
}

int Tovar::get_price()
{
	return price;
}

// модификаторы

void Tovar::set_marka(string a)
{
	marka=a;
}

void Tovar::set_model(string b)
{
	model = b;
}

void Tovar::set_price(int c)
{
	price = c;
}

// метод для просмотра атрибутов
void Tovar::show()
{
	cout << "Марка: " << marka << endl;
	cout << "Модель: " << model << endl;
	cout << "Стоимость: " << price << endl;
}

	