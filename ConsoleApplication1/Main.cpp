#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int answer{ 0 };

	void Addition(), Subtraction();
	void Division(), Multiplication();
	void BigMultiplication();
	void task1(), task2();
	void Menu(), Initials();

	while (true) {
		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);

		Initials();

		Menu();

		for (int i = 0; i < 9; ++i) {
			string menu[9] = { "| \t1. Сложение \t\t\t|","| \t2. Вычитание \t\t\t|","| \t3. Умножение \t\t\t|","| \t4. Деление \t\t\t|","| \t5. Умножение больших чисел \t|","| \t6. Практическая 1 \t\t|","| \t7. Практическая 2 \t\t| ","| \t0. Выход \t\t\t|"," " };
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
					answer = 9;
				break;

			} else if (GetAsyncKeyState(VK_DOWN) != 0) { // control Down
				answer += 1;

				if (answer == 9)
					answer = 0;
				break;

			} else if (GetAsyncKeyState(VK_RETURN) != 0) { // control Enter
				switch (answer) {
				case 1:
					Addition();
					break;

				case 2:
					Subtraction();
					break;

				case 3:
					Multiplication();
					break;

				case 4:
					Division();
					break;

				case 5:
					BigMultiplication();
					break;

				case 6:
					task1();
					break;

				case 7:
					task2();
					break;

				case 8:
					exit(0);
					break;

				case 9:
					break;
				}
			}
		}

		if (answer !=9)
			system("pause");

		Sleep(150);
	}

	return 0;
}