#include "Header.h"

using namespace std;

char menu() {
	system("PAUSE");
	system("cls");
	cout << "1. ���������� ��������\n2. �������� ��������\n3. ����� ������\n4. ���������� ����� �����\n5. ������� �����\n0. �����" << endl;
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	return cin.get();
}

stack::stack(): top(NULL), x(0) {}
void stack::push() {
	node *p = new node;
	cout << "������� �������� ��������" << endl;
	cin >> p->a;
	p->prev = top;
	top = p;
	x++;
}
int stack::pop() {
	if (x == 0) return -1;
	else {
		node *temp;
		temp = top;
		top = top->prev;
		cout << "������� " << temp->a << " �����" << endl;
		delete temp;
		x--;
	}
	return 0;
}
int stack::output() {
	if (x == 0) return -1;
	else {
		node *temp;
		temp = top;
		cout << "~~~~~" << endl;
		for (int i = 0; i < x; i++) {
			cout << setw(5) << setiosflags(ios::left) << temp->a << endl;
			temp = temp->prev;
		}
		cout << "~~~~~" << endl;
	}
	return 0;
}
int stack::clear() {
	if (x == 0) return -1;
	else {
		int temp = x;
		for (int i = 0; i < temp; i++)
			pop();
	}
	return 0;
}
int stack::get_x() {
	return x;
}
stack::~stack() {
	while (top) {
		node *temp = top;
		top = top->prev;
		delete temp;
	}
}