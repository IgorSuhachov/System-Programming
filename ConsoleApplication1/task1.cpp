#include <iostream>
#include <bitset>

using namespace std;

void task1() {
	short a, b;

	cout << "\n\n\t������� 9\n\n";

	cout << "����� � � ����������� ����������� �����\n";
	cout << "���������� � �1� ������ � ������� ���� ����� �����.\n";
	cout << "������� ���������� ����� �� �����.\n";

	cout << "\n\n������� �:";
	cin >> a;

	cout << bitset<sizeof(a) * 4>(a) << endl;

	_asm {
		xor eax, eax

		mov ax, a
		or ax, 01000001b
	
		mov b, ax
	}

	cout << bitset<sizeof(b) * 4>(b) << endl;

	system("pause");
}