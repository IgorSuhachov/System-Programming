#include <iostream>

using namespace std;

void Multiplication() {
	short int a, b, mult;

	cout << "¬ведите a: ";
	cin >> a;

	cout << "¬ведите b: ";
	cin >> b;

	_asm {
		xor eax, eax;

		mov ax, a;
		mov bx, b;

		imul bx;

		mov mult, ax
	}

	printf("\n–езультат:");
	printf("\n%d * %d = %d", a, b, mult);
}