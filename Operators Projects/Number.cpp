#include "Number.h"
#include<string>

void Number::setNumber(int number)
{
	_number = number;
}

int Number::getNumber()
{
	return _number;
}

Number::Number()
{
	_number = 0;
}

Number::Number(int number)
{
	_number = number;
}

void Number::print()
{
	cout << "Number: " << _number << endl;
}

bool Number::operator==(const Number& right) const
{
	if (this->_number == right._number) {
		return true;
	}
	else
	{
		return false;
	}
}

bool Number::operator!=(const Number& right) const
{
	return (this->_number != right._number);
}

Number& Number::operator++()
{
	this->_number += 1;
	return *this;
}

Number& Number::operator++(int)
{
	Number oldNumber(*this);
	++* this;
	return oldNumber;
}

Number& Number::operator+=(Number& right)
{
	this->_number += right.getNumber();
	return *this;
}

Number Number::operator+(Number& right)
{
	Number result(this->_number + right.getNumber());
	return result;
}

int Number::operator[](int index) const
{
	string numStr = to_string(_number); // "123"
	if (index < 0 || index >= numStr.length()) {
		return 0;
	}
	else {
		return numStr[index] - '0';
	}
}


ostream& operator<<(ostream& output, const Number& number)
{
	output << "Number: " << number._number << endl;
	return output;
}
