#include <iostream>

using namespace std;

void Multiplication() {
	short int a, b, mult;

	cout << "Введите a: ";
	cin >> a;

	cout << "Введите b: ";
	cin >> b;

	_asm {
		xor eax, eax;

		mov ax, a;
		mov bx, b;

		imul bx;

		mov mult, ax
	}

	printf("\nРезультат:");
	printf("\n%d * %d = %d", a, b, mult);
	cout << "\nНажмите любую клавишу для перехода в меню" << endl;
	system("pause");
	system("cls");
}