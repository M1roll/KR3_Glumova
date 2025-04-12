#include <iostream>
#include <vector>

struct Node {
	char data;
	Node* next;
};

void Push_back(Node* &head1, char c) {
	Node* node = new Node(); 
	node->data = c;
	node->next = nullptr;

	if (head1 == nullptr) {
		head1 = node;
		return;
	}

	Node* node1 = head1;
	while (node1->next != nullptr) {
		node1 = node1->next;
	}
	node1->next = node;
}

void Insert(Node* &head, Node* head1, Node* head2) {
	
	while (head2 != nullptr) {
		Push_back(head, head2->data);
		head2 = head2->next;
	}
	while (head1 != nullptr) {
		Push_back(head, head1->data);
		head1 = head1->next;
	}
}

void Clean(Node*& head) {
	while (head != nullptr) {
		Node* ptr = head;
		head = head->next;
		delete ptr;
	}
}
int main() {
	Node* head = nullptr;
	Node* head1 = nullptr;
	Node* head2 = nullptr;
	for (char i = 'a'; i <= 'e'; i++) {
		Push_back(head1, i);
	}
	for (char i = 'f'; i <= 'k'; i++) {
		Push_back(head2, i);
	}

	Insert(head, head1, head2);
	Node* Curr = head;
	while (Curr != nullptr) {
		std::cout << Curr->data;
		Curr = Curr->next;
	}
	Clean(head);
	Clean(head1);
	Clean(head2);
	return 0;
}