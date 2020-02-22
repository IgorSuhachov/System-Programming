#include <iostream>

using namespace std;

int main() {
	system("color 2");

	setlocale(LC_ALL, "rus");
	
	int answer;

	void Addition(), Subtraction();
	void Division(), Multiplication();
	void BigMultiplication();
	void task1(), task2();
	void Menu();
	
	while(true) {
		Menu();

		cin >> answer;
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

		case 0:
			exit(0);
			break;

		default:
			cout << "Неверный пункт меню" << endl;
		}
	}

	return 0;
}