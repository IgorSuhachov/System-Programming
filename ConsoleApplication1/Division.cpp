#include <iostream>

using namespace std;

void Division() {
	int a, b, divis, rem;

	printf("������� a: ");
	scanf_s("%i", &a);

	printf("������� b: ");
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

	printf("\n���������:");
	printf("\n%d / %d = %d", a, b, divis);
	printf("\n�������: %d", rem);
}