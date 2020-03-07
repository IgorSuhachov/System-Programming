#include <iostream>
#include <bitset>

using namespace std;

void task1() {
	short a, b;

	cout << "\n\n\tВариант 9\n\n";

	cout << "Пусть а – однобайтное беззнаковое число\n";
	cout << "Установить в «1» второй и восьмой биты этого числа.\n";
	cout << "Вывести полученное число на экран.\n";

	cout << "\n\nВведите а:";
	cin >> a;

	cout << bitset<sizeof(a) * 4>(a) << endl;

	_asm {
		xor eax, eax

		mov ax, a
		or ax, 01000001b
	
		mov b, ax
	}

	cout << bitset<sizeof(b) * 4>(b) << endl;

	system("pause");
}