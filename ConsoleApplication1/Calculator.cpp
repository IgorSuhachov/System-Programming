#include <iostream>

using namespace std;

void Calculator() {
	int a, b, a1, b1;
	int sum, subt, bigmult;
	int rem, divis;

	cout << "\n\nВведите a: ";
	cin >> a;

	cout << "\nВведите b: ";
	cin >> b;

	cout << "\nСложение:";
	_asm {
		xor eax, eax;

		mov eax, a;

		add eax, b;

		mov sum, eax;
	}

	printf("\n%d + %d = %d", a, b, sum);

	cout << "\n\nВычитание: ";
	_asm {
		xor eax, eax;

		mov eax, a;

		sub eax, b;

		mov subt, eax;
	}

	printf("\n%d - %d = %d", a, b, subt);

	cout << "\n\nДеление:";
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
	printf("\nОстаток: %d", rem);

	short int am = a;
	short int bm = b;
	short int mult;

	cout << "\n\nУмножение:";
	_asm {
		xor eax, eax;

		mov ax, am;
		mov bx, bm;

		imul bx;

		mov mult, ax
	}

	printf("\n%d * %d = %d", am, bm, mult);

	cout << "\n\nВведите числа a и b в диапазоне от 10000 до 200000:" << endl;

	cout << "Первое число: ";
	cin >> a1;

	cout << "\n\nВторое число: " << endl;
	cin >> b1;

	while ((a1 < 9999) || (a1 > 200001) && (b1 < 9999) || (b1 > 200001)) {
		cout << "Введите числа в правильном диапазоне" << endl;

		cout << "Первое число: ";
		cin >> a1;

		cout << "\n\nВторое число: " << endl;
		cin >> b1;
	}

	_asm {
		mov eax, a1
		mov ebx, b1

		mul ebx

		shl edx, 16
		xchg edx, eax

		mov bigmult, edx
	}

	printf("\nРезультат:");
	printf("\n%d * %d = %d\n", a1, b1, bigmult);

	system("pause");
}