#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int answer{ 0 };

	void task1(), task2();
	void Menu(), Initials();
	void Calculator(), Power();

	while (true) {
		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);

		Initials();

		Menu();

		for (int i = 0; i < 5; ++i) {
			string menu[5] = { "| \t1. Калькулятор \t\t|","| \t2. Практическая 1 \t|","| \t3. Практическая 2 \t|",
				"| \t4. Возведение в степень |","| \t5. Выход \t\t|" };
			cout << endl;

			if (i == answer) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				cout << menu[i];
			} else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				cout << menu[i];
			}
		}

		while (true) { // Movement
			if (GetAsyncKeyState(VK_UP) != 0) { // control Up
				answer -= 1;

				if (answer == -1)
					answer = 5;
				break;

			} else if (GetAsyncKeyState(VK_DOWN) != 0) { // control Down
				answer += 1;

				if (answer == 5)
					answer = 0;
				break;

			} else if (GetAsyncKeyState(VK_RETURN) != 0) { // control Enter
				switch (answer) {
				case 1:
					Calculator();
					break;

				case 2:
					task1();
					break;

				case 3:
					task2();
					break;

				case 4:
					Power();
					break;

				case 5:
					exit(0);
					break;
				}
			}
		}

		if (answer !=5)
			system("pause");

		Sleep(150);
	}

	return 0;
}