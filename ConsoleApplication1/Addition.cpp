#include <iostream>

using namespace std;

void Addition() {
	int a, b, sum;

	printf("Введите a: ");
	scanf_s("%i", &a);

	printf("Введите b: ");
	scanf_s("%i", &b);

	_asm {
		xor eax, eax;

		mov eax, a;

		add eax, b;

		mov sum, eax;
	}

	printf("\nРезультат:");
	printf("\n%d + %d = %d", a, b, sum);
	cout << "\nНажмите любую клавишу для перехода в меню" << endl;
	system("pause");
	system("cls");
}