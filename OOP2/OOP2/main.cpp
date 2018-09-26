#include "Header.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stack* one = new stack();
	while (true) {
		switch (menu()) {
		case '1':
			one->push();
			break;
		case '2':
			if(one->pop() == -1)
				cout << "Стек пуст" << endl;
			break;
		case '3':
			if(one->output() == -1)
				cout << "Стек пуст" << endl;
			break;
		case '4':
			cout << "Длина стека - " << one->get_x() << endl;
			break;
		case '5':
			if(one->clear() == -1)
				cout << "Стек пуст" << endl;
			break;
		case '0':
			return 0;
		}
	}
}