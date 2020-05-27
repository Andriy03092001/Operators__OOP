#include<iostream>
#include "Number.h"
using namespace std;


int main() {

	Number n1(11);
	Number n2(5);
	Number n3(204);

	++n1;
	n1 += n2;
	n1.print();
	n1++;

	//(n1 + n2).print();

	//n3 = n1 + n2;
	//const int index = 1;
	// n3[1] = 5
	for (int i = -2; i < 4; i++)
	{
		cout << "n3["<< i << "] = " << n3[i] << endl;
	}
	cout << n3 << endl;

	// this == right;
	if (n1 == n2) {
		cout << "+++++" << endl;
	}
	else {
		cout << "-----" << endl;
	}
	

	return 0;
}