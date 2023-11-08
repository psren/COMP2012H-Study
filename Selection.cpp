#include<iostream>
using namespace std;
int main() {
	int flag = 1;
	int array[] = { 1,9,1,9,8,1,0 };
	for (int i = 0; i < 7; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	int length = sizeof(array) / sizeof(int);
	while (length--) {
		int min = array[6];
		int pos = 6;
		for (int i = 5; i >= (6 - length); i--) {
			if (array[i] < min) {
				min = array[i];
				pos = i;
			}
		}
		int temp;
		temp = array[6 - length];
		array[6 - length] = min;
		array[pos] = temp;
	}
	for (int i = 0; i < 7; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}