#include<iostream>
#include"Bubble.h"
void main() {
	int array1[] = {1,1,4,5,1,4};
	int array2[] = {1,9,1,9,8,1,0};
	int length_1 = sizeof(array1) / sizeof(int);
	int length_2 = sizeof(array2) / sizeof(int);
	int* Sorted_1 = Bubble(array1, length_1);
	int* Sorted_2 = Bubble(array2, length_2);
	int i=0, j = 0;
	int k[13];
	int x = 0;
	while (i < length_1 && j < length_2) {
		if (Sorted_2[j] < Sorted_1[i]) {
			k[x] = Sorted_2[j];
			j++;
			x++;
		}
		else {
			k[x] = Sorted_1[i];
			i++;
			x++;
		}

	}
	if (i = length_1) {
		for (; j < length_2; j++) {
			k[x] = Sorted_2[j];
			x++;
		}
	}
	else {
		for (; i < length_1; i++) {
			k[x] = Sorted_1[i];
			x++;
		}

	}
	//for (int h = 0; h < 6; h++) {
	//	cout << array1[h] << " ";
	//}
	//cout << endl;
	//for (int h = 0; h < 6; h++) {
	//	cout << Sorted_1[h] << " ";
	//}
	//cout << endl;
	//for (int h = 0; h < 7; h++) {
	//	cout << array2[h] << " ";
	//}
	//cout << endl;
	//for (int h = 0; h < 7; h++) {
	//	cout << Sorted_2[h] << " ";
	//}
	/*cout << endl;*/
	for (int h = 0; h < 13; h++) {
		cout << k[h] << " ";
	}
}