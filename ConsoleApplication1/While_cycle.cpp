#include <iostream>

using namespace std;

void While_cycle() {
	int a, b, e, x{ 0 };

	cout << "\n������� ����� a";
	cin >> a;

	cout << "\n������� ����� b\n";
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

	cout << "\n�����: " << e << endl;

	system("pause");
}