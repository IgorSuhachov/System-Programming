#include <iostream>

using namespace std;

void Do_While_cycle() {
	int x{ 0 }, e;

	_asm {
	A: mov ecx, x
		mov ebx, 2

		add ecx, ebx

		mov x, ecx

		xor ecx, ecx

		cmp x, 20
		jne A
	}

	cout << "\n�����: " << x << endl;

	system("pause");
}