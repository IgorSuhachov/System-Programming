#include <iostream>

using namespace std;

void BigMultiplication() {
	int a, b, bigmult;

	printf("������� a ");
	scanf_s("%i", &a);

	printf("������� b ");
	scanf_s("%i", &b);

	_asm {
		mov eax, a
		mov ebx, b

		mul ebx

		shl edx, 16
		xchg edx, eax

		mov bigmult, edx
	}

	printf("\n%d * %d = %d", a, b, bigmult);
}