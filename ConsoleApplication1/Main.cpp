﻿#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int answer{ 0 };

	void Menu();
	void task1(), task2();
	void Sr1_1();
	void Calculator(), Power();

	while (true) {
		system("cls");

		Menu();

		for (int i = 0; i < 6; ++i) {
			string menu[6] = { "| \t1. Калькулятор \t\t\t\t|","| \t2. Практическая 1 \t\t\t|","| \t3. Практическая 2 \t\t\t|",
				"| \t4. Возведение в степень \t\t|","| \t5. Задачи для самостоятельной работы \t|", "| \t6. Выход \t\t\t\t|" };
			cout << endl;

			if (i == answer) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
				cout << menu[i];
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				cout << menu[i];
			}
		}

		while (true) { // Movement
			if (GetAsyncKeyState(VK_UP) != 0) { // control Up
				answer -= 1;

				if (answer == -1)
					answer = 6;
				break;

			}
			else if (GetAsyncKeyState(VK_DOWN) != 0) { // control Down
				answer += 1;

				if (answer == 7)
					answer = 0;
				break;

			}
			else if (GetAsyncKeyState(VK_RETURN) != 0) { // control Enter
				switch (answer) {
				case 0:
					Calculator();
					break;

				case 1:
					task1();
					break;

				case 2:
					task2();
					break;

				case 3:
					Power();
					break;

				case 4:
					Sr1_1();
					break;

				case 5:
					exit(0);
					break;
				}
			}
		}
	}

	return 0;
}