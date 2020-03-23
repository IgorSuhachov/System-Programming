#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int answer{ 0 };

	void Menu();
	void task1(), task2();
	void Sr1_1();
	void Calculator(), Power();
	void Sort_array();
	void Do_While_cycle(), While_cycle();

	while (true) {
		system("cls");

		Menu();

		for (int i = 0; i < 9; ++i) {
			string menu[9] = { "| \t1. Калькулятор \t\t\t\t|","| \t2. Практическая 1 \t\t\t|","| \t3. Практическая 2 \t\t\t|",
				"| \t4. Возведение в степень \t\t|","| \t5. Задачи для самостоятельной работы \t|","| \t6. Сортировка массива \t\t\t|",
				"| \t7. Цикл Do while \t\t\t|","| \t8. Цикл While \t\t\t\t|","| \t9. Выход \t\t\t\t|" };
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
					answer = 9;
				break;

			}
			else if (GetAsyncKeyState(VK_DOWN) != 0) { // control Down
				answer += 1;

				if (answer == 10)
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
					Sort_array();
					break;

				case 6:
					Do_While_cycle();
					break;

				case 7:
					While_cycle();
					break;

				case 8:
					exit(0);
					break;
				}
			}
		}
	}

	return 0;
}