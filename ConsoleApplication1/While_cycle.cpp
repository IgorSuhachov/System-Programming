#include <iostream>

using namespace std;

void While_cycle() {
	int a, b, e, x{ 0 };

	cout << "\nВведите число a";
	cin >> a;

	cout << "\nВведите число b\n";
	cin >> b;

	_asm {
		mov eax, a
		mov edx, b

		A : cmp x, 5
		jge A2

		add eax, edx

		mov ecx, x
		mov ebx, 1

		add ecx, ebx

		mov x, ecx

		jmp A

		A2 : 
		mov e, eax
	}

	cout << "\nОтвет: " << e << endl;

	system("pause");
}