#include<iostream>
using namespace std;
int* Bubble(int* array,int length) {
	int flag = 1;
	for (int i = 0; i < 6; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	//int length = sizeof(array) / sizeof(int);
	while (--length && flag) {
		flag = 0;
		for (int i = 0; i < length; i++) {
			if (array[i] > array[i + 1]) {
				flag = 1;
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 6; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	return array;
}