#include <iostream>

using namespace std;

void Subtraction() {
	int a, b, subt;

	printf("¬ведите a: ");
	scanf_s("%i", &a);

	printf("¬ведите b: ");
	scanf_s("%i", &b);

	_asm {
		xor eax, eax;

		mov eax, a;

		sub eax, b;

		mov subt, eax;
	}

	printf("\n%d - %d = %d", a, b, subt);
}