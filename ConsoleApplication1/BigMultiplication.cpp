#include <iostream>

using namespace std;

void BigMultiplication() {
	int a, b, bigmult;

	printf("Введите a ");
	scanf_s("%i", &a);

	printf("Введите b ");
	scanf_s("%i", &b);

	_asm {
		mov eax, a
		mov ebx, b

		mul ebx

		shl edx, 16
		xchg edx, eax

		mov bigmult, edx
	}

	printf("\nРезультат:");
	printf("\n%d * %d = %d", a, b, bigmult);
	cout << "\nНажмите любую клавишу для перехода в меню" << endl;
	system("pause");
	system("cls");
}