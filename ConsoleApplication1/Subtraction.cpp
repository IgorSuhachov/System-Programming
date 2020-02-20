#include <iostream>

using namespace std;

void Subtraction() {
	int a, b, subt;

	printf("Введите a: ");
	scanf_s("%i", &a);

	printf("Введите b: ");
	scanf_s("%i", &b);

	_asm {
		xor eax, eax;

		mov eax, a;

		sub eax, b;

		mov subt, eax;
	}

	printf("\nРезультат:");
	printf("\n%d - %d = %d", a, b, subt);

	cout << "\nНажмите любую клавишу для перехода в меню" << endl;

	system("pause");

	system("cls");
}