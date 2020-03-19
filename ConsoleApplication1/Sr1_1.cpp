#include <iostream>

using namespace std;

void Sr1_1() {
	int a, b;

	cout << "\n\nС клавиатуры вводятся два символа.\n";
	cout << "Вывести их в обратном порядке (например: '1gg1', 'assa', '-==-')\n";

	cout << "Введите первый символ:";
	cin >> a;

	cout << "Введите второй символ:";
	cin >> b;

	_asm {
		mov eax, a
		mov ebx, b

		xchg eax, ebx

		mov a, eax
		mov b, ebx
	}

	cout << "Результат:" << endl;
	cout << a << endl;
	cout << b << endl;

	// 2 ЗАДАНИЕ
	int a_1, b_1, c;

	cout << "\nИмеются 2 числа(цифры) a и b.вычислить y = 2a - b + 1" << endl;

	cout << "Введите число а: ";
	cin >> a_1;

	cout << "Введите число b: ";
	cin >> b_1;

	_asm {
		mov eax, a_1
		mov ebx, 2
		imul ebx

		mov ecx, b_1

		sub eax, ecx

		add eax, 1

		mov c, eax
	}

	cout << "Ответ = " << c;

	//3 ЗАДАНИЕ
	int a_2, b_2;

	cout << "\n\nВывести на экран сумму цифр любого друхзначного числа введенного с клавиатуры" << endl;

	cout << "Введите двухзначное число а = ";
	cin >> a_2;

	_asm {
		mov eax, a_2
		mov edx, 0
		mov ebx, 10

		div ebx

		add eax, edx

		mov b_2, eax
	}

	cout << "Ответ = " << b_2 << endl;

	//4 ЗАДАНИЕ
	int fact, d;

	cout << "\nФакториал числа\n";
	cout << "Введите число m (меньше 15): ";
	cin >> d;

	while (d > 15) {
		cout << "Введите число, меньше 15\n";
		cin >> d;
	}

	_asm {
		mov eax, 1
		mov ecx, d
		mov ebx, 1

		M :
		imul eax, ebx
			add ebx, 1

			loop M
			mov fact, eax
	}

	cout << "Факториал числа равен " << fact << "\n";

	system("pause");
}