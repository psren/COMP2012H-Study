#include<iostream>
#include"List.h"
using namespace std;

int main() {
	List list;
	list.push(1);
	list.push(9);
	list.push(1);
	list.push(9);
	list.push(8);
	list.push(1);
	list.push(0);
	list.push(5);
	list.push(1);
	list.push(0);
	list.from_begin(4);
	list.from_begin(1);
	list.from_begin(5);
	list.from_begin(4);
	list.from_begin(1);
	list.from_begin(1);
	list.from_begin(7);
	list.delete_point(list.find(7));
	list.printlist();
	list.delete_end();
	list.delete_end();
	list.delete_end();
	list.printlist();
	list.~List();
}