#include <iostream>

using namespace std;

void Multiplication() {
	short int a, b, mult;

	cout << "������� a: ";
	cin >> a;

	cout << "������� b: ";
	cin >> b;

	_asm {
		xor eax, eax;

		mov ax, a;
		mov bx, b;

		imul bx;

		mov mult, ax
	}

	printf("\n���������:");
	printf("\n%d * %d = %d", a, b, mult);
	cout << "\n������� ����� ������� ��� �������� � ����" << endl;
	system("pause");
	system("cls");
}