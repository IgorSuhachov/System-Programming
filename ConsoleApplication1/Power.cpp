#include <iostream>

using namespace std;

void Power() {
	int a, b, c;

	cout << "\n������� a: ";
	cin >> a;

	cout << "\n������� b: " << endl;
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

	cout << "\n���������: " << c << endl;

	system("pause");
}