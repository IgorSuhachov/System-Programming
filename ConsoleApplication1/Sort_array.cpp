#include <iostream>

using namespace std;

void Sort_array() {
	short int n, a;

	cout << "������� ����������� �������: ";
	cin >> n;

	_asm {
		mov cx, n

		lea si, a; ����� ������ �������

		M1 :
		lodsb; ����������� � al ��������� ������ �� �������
			mov dl, al; � dl ���� ��������� ��� � - ��� ������ �� �����

			mov ah, 2; ������� 2 ������ �� ����� ������ �������

			int 21h; ����� �� ����� �������

			loop M1
	}
}