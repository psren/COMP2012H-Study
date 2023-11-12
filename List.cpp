#include<iostream>
#include"List.h"
using namespace std;
List::List() {
	Node* ptr = new Node;
	ptr->data = 0;
	ptr->next = nullptr;
	head = ptr;
}
List::~List(){
	Node* ptr;
	while (head->next!= nullptr) {
		ptr = head->next;
		delete head;
		head = ptr;
	}
	head = nullptr;
	ptr = nullptr;


}
void List::push(int data){
	Node* ptr = head;
	while (ptr->next != nullptr) {
		ptr = ptr->next;
	}
	Node* next = new Node;
	next->data = data;
	next->next = nullptr;
	ptr->next = next;
}
Node* List::pop(){
	Node* ptr;
	Node* ptr2;
	ptr = head->next;
	ptr2 = head;
	head = ptr;
	return ptr2;
}
void List::printlist() {
	 //do{
		// head = head->next;
		//cout << head->data << endl;
	 //} while (head->next != nullptr);
	Node* ptr = head;
	while(ptr->next!=nullptr){
		ptr = ptr->next;
		cout << ptr->data << ' ';
	}
	cout << endl;
}
void List::from_begin(int data) {
	Node* ptr = new Node;
	ptr->data = data;
	ptr->next = head->next;
	head->next = ptr;
}
void List::delete_end() {
	Node* cur = head;
	Node* pre = nullptr;
	while (cur->next != nullptr) {
		pre = cur;
		cur = cur->next;
	}
	//while (Ptr->next != ptr) {
	//	Ptr = Ptr->next;
	//}
	pre->next = nullptr;
	delete cur;
	//head = Ptr;
}
Node* List::find(int data) {
	Node* ptr=head;
	while (ptr->data != data) {
		ptr = ptr->next;
	}
	return ptr;
}
void List::delete_point(Node* point){
	Node* ptr = head;
//	Node* pre = nullptr;
	while (ptr->next != point) {
		ptr = ptr->next;
//		pre = cru;
	}
	ptr->next = point->next;
	delete point;
}