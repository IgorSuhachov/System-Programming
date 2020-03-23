#include <iostream>

using namespace std;

void Sort_array() {
	short int n, a;

	cout << "Введите размерность массива: ";
	cin >> n;

	_asm {
		mov cx, n

		lea si, a; адрес начала массива

		M1 :
		lodsb; загружается в al очередной символ из массива
			mov dl, al; в dl надо загрузить для ф - ции вывода на экран

			mov ah, 2; функция 2 вывода на экран одного символа

			int 21h; вывод на экран символа

			loop M1
	}
}