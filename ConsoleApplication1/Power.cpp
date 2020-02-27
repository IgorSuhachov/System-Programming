#include <iostream>

using namespace std;

void Power() {
	int a, b, c;

	cout << "\n¬ведите a: ";
	cin >> a;

	cout << "\n¬ведите b: " << endl;
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

	cout << "\n–езультат: " << c << endl;

	system("pause");
}