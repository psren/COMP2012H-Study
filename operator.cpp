#include"operator.h"
#include<iostream>
#include<string>
using namespace std;
SOME operator +(SOME& a, SOME& b) {
	string name = a.name + b.name;
	int number = a.number + b.number;
	SOME c(number,name);
	return c;
}
ostream& operator<<(ostream& COUT, SOME& a) {
	COUT << "name of given SOME is " << a.name << endl;
	COUT << "number:" << a.number << endl;
	return COUT;
}
istream& operator>>(istream& CIN, SOME& a) {
	cout << "please enter the number: ";
	CIN >> a.number;
	cout << "please enter the name: ";
	CIN >> a.name;
	return CIN;
}
SOME operator +=(SOME& a, SOME& b) {
	a.number += b.number;
	a.name += b.name;
	return a;
}

