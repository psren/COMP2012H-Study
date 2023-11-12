#ifndef LIST_H
#define LIST_H
#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
class List {
private:
	Node* head;
public:
	List();
	~List();
	void push(int data);
	Node* pop();
	void printlist();
	void from_begin(int data);
	void delete_end();
	Node* find(int data);
	void delete_point(Node* point);

};
#endif // !LIST_H
