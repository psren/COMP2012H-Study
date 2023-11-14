#ifndef OPERATOR_H
#define OPERATOR_H
#include<iostream>
#include<string>
using namespace std;
struct SOME{
	int number;
	string name;
	SOME(int number, string name) {
		this->name = name;
		this->number = number;
	}
};
SOME operator+ (SOME & a, SOME & b);
ostream& operator<<(ostream& COUT, SOME& a);
istream& operator>>(istream& CIN, SOME& a);
SOME operator+=(SOME& a,SOME&b);
#endif