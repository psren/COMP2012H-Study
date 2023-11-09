#include<iostream>
using namespace std;
int main() {
	int flag = 1;
	int array[] = { 2,0,0,4,1,2,0,5};
	for (int i = 0; i < 8; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	int length = sizeof(array) / sizeof(int);
	for (int i = 1; i < length; i++) {
		int pos = i;
		int j = i - 1;
		while (j >= 0 && array[j] > array[pos]) {
			int key = array[pos];
			array[pos] = array[j];
			array[j] = key;
			for (int i = 0; i < 8; i++) {
				cout << array[i] << " ";
			}
			cout << endl;
			pos = j;
			j--;
		}
	}
	for (int i = 0; i < 8; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}