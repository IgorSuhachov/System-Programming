#include <iostream>

using namespace std;

void Division() {
	int a, b, divis, rem;

	printf("Введите a: ");
	scanf_s("%i", &a);

	printf("Введите b: ");
	scanf_s("%i", &b);

	_asm {
		xor eax, eax
		xor ebx, ebx
		xor edx, edx

		mov eax, a
		mov edx, 0
		mov ebx, b

		div ebx

		mov divis, eax
		mov rem, edx
	}

	printf("\nРезультат:");
	printf("\n%d / %d = %d", a, b, divis);
	printf("\nОстаток: %d", rem);
	cout << "\nНажмите любую клавишу для перехода в меню" << endl;

	system("pause");

	system("cls");
}