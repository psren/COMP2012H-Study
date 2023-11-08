#include<iostream>
using namespace std;
int main() {
	int array[] = { 1,1,4,5,1,4 };
	for (int i = 0; i < 6; i++) {
		cout << array[i] << "\t";
	}
	cout << endl;
	int length = sizeof(array) / sizeof(int);
	while (--length) {
		for (int i = 0; i < length; i++) {
			if (array[i] > array[i + 1]) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 6; i++) {
		cout << array[i] << "\t";
	}
	cout << endl;
}