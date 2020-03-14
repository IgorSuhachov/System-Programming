#include <iostream>

using namespace std;

void Power() {
	int a, b, c;

	cout << "\nВозведение числа в степень.\n\n";

	cout << "Введите число, которое возводится в степень: ";
	cin >> a;

	cout << "\nВведите степень числа: " << endl;
	cin >> b;

	_asm {
		mov eax, a
		mov ebx, b

		dec ebx

		L1 :
		mul a
			dec ebx
			jnz L1
			mov c, eax
	}

	cout << "\nРезультат: " << c << endl;

	system("pause");
}