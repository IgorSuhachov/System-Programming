#include <iostream>

using namespace std;

void Addition() {
	int a, b, sum;

	printf("¬ведите a: ");
	scanf_s("%i", &a);

	printf("¬ведите b: ");
	scanf_s("%i", &b);

	_asm {
		xor eax, eax;

		mov eax, a;

		add eax, b;

		mov sum, eax;
	}

	printf("\n–езультат:");
	printf("\n%d + %d = %d", a, b, sum);
}