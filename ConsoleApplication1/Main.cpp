#include <iostream>

using namespace std;

int main(int answer) {
	system("color 2");

	setlocale(LC_ALL, "rus");

	void Addition(), Subtraction();
	void Division(), Multiplication();
	void BigMultiplication();
	void task1(), task2();

	cout << " ****   **  **  **  **   ****   **  **  ******  *****\n";
	cout << "**  **   ** **   ****   **  **  **  **  **      **  **\n";
	cout << "**        ****    **    ******   *****  ****    *****\n";
	cout << "**  **      **   ****   **  **      **  **      **  **\n";
	cout << " ****     ***   **  **  **  **      **  ******  *****\n\n";

	cout << "**  **  *******  ****   *****   **\n";
	cout << "**  **  **      **  **  **  **  **\n";
	cout << "** ***  **      **  **  ******  ****\n";
	cout << "*** **  **      **  **  **      **  **\n";
	cout << "**  **  **       ****   **      *****\n\n";

	cout << " ****   ******  **  **   ****              **      **    ****\n";
	cout << "**  **  **  **  * **   **   **           ****    ****   **  **\n";
	cout << "   **   **  **  ****   **       *****      **      **    ****\n";
	cout << " **     **  **  ** **  **   **             **      **   **  **\n";
	cout << "******  **  **  **  **   ****              **      **    ****\n\n";

	cout << "--------------------------------------------------------------\n";
	cout << "--------------------------------------------------------------\n";
	cout << "**   **  ******  **  **  **  **\n";
	cout << "*** ***  **      **  **  ** *  *\n";
	cout << "** * **  ****    ******  ***** *\n";
	cout << "**   **  **      **  **  ** *  *\n";
	cout << "**   **  ******  **  **  **  **\n";
	cout << "--------------------------------------------------------------\n";
	cout << "--------------------------------------------------------------\n\n";

	cout << "1. Сложение" << endl;
	cout << "2. Вычитание" << endl;
	cout << "3. Умножение" << endl;
	cout << "4. Деление" << endl;
	cout << "5. Умножение больших чисел" << endl;
	cout << "6. Задание 1" << endl;
	cout << "7. Задание 2" << endl;
	cout << "0. Выход" << endl;

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
		break;
	}

	return 0;
}