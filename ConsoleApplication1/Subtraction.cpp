#include <iostream>

using namespace std;

void Subtraction() {
	int a, b, subt;

	printf("������� a: ");
	scanf_s("%i", &a);

	printf("������� b: ");
	scanf_s("%i", &b);

	_asm {
		xor eax, eax;

		mov eax, a;

		sub eax, b;

		mov subt, eax;
	}

	printf("\n���������:");
	printf("\n%d - %d = %d", a, b, subt);

	cout << "\n������� ����� ������� ��� �������� � ����" << endl;

	system("pause");

	system("cls");
}