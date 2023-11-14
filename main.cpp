#include"operator.h"
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	SOME Alpha(18, "alpha");
	SOME Beta(21, "beta");
	SOME zigma = Alpha + Beta;
	cout << zigma << endl;
	Beta = operator+(zigma, Alpha);
	cout << Beta;
	SOME lammda(0, "");
	lammda += Alpha;
	operator+=(lammda, Beta);
	SOME Gamma(0, "");
	Gamma = operator+=(Gamma, Beta);
	cout << Gamma;
	cout << lammda;
	ofstream fout;
	fout.open("text.txt");
	if (fout.is_open()){
		fout << lammda;
	}
	fout.close();
	ifstream fin;
	fin.open("text.txt");
	//if (fin.is_open()) {
	//	SOME Omega(17, "some");
	//	fin >> Omega;
	//	cout << Omega << endl;
	//}



}