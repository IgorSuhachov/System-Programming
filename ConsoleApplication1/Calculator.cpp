#include <iostream>

using namespace std;

void Calculator() {
	int a, b;
	int sum, subt, bigmult;
	int rem, divis;

	cout << "\n\n������� a: ";
	cin >> a;

	cout << "\n������� b: ";
	cin >> b;

	cout << "\n��������:";
	_asm {
		xor eax, eax;

		mov eax, a;

		add eax, b;

		mov sum, eax;
	}

	printf("\n%d + %d = %d", a, b, sum);

	cout << "\n\n���������: ";
	_asm {
		xor eax, eax;

		mov eax, a;

		sub eax, b;

		mov subt, eax;
	}

	printf("\n%d - %d = %d", a, b, subt);

	cout << "\n\n�������:";
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

	printf("\n%d / %d = %d", a, b, divis);
	printf("\n�������: %d", rem);

	short int am = a;
	short int bm = b;
	short int mult;

	cout << "\n\n���������:";
	_asm {
		xor eax, eax;

		mov ax, am;
		mov bx, bm;

		imul bx;

		mov mult, ax
	}

	printf("\n%d * %d = %d", am, bm, mult);

	int a1, b1;

	cout << "\n������� ����� a � b � ��������� �� 10000 �� 200000:" << endl;
	cin >> a1 >> b1;

	while ((a1 < 9999) || (a1 > 200001) && (b1 < 9999) || (b1 > 200001)) {
		cout << "������� ����� � ���������� ���������" << endl;
		cin >> a1 >> b1;
	}

	_asm {
		mov eax, a1
		mov ebx, b1

		mul ebx

		shl edx, 16
		xchg edx, eax

		mov bigmult, edx
	}

	printf("\n���������:");
	printf("\n%d * %d = %d", a1, b1, bigmult);

	system("pause");
}