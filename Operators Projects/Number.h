#pragma once
#include<iostream>
using namespace std;

class Number {
public:
	void setNumber(int number);
	int getNumber();
	Number();
	Number(int number);
	void print();

	//Operators:
	//this == right
	bool operator == (const Number& right) const;
	bool operator != (const Number& right) const;
	Number& operator ++();
	Number& operator ++(int);
	Number& operator +=(Number& right);
	Number operator +(Number& right);
	int operator [](int index) const;
	int operator <<(int);
	friend ostream& operator<<(ostream &output, const Number &number);
private:
	int _number;
};

