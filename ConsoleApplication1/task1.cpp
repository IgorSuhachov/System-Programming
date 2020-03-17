#include <iostream>
#include <bitset>

using namespace std;

void task1() {
	short a, b;

	cout << "\n\n\t¬ариант 9\n\n";

	cout << "ѕусть а Ц однобайтное беззнаковое число\n";
	cout << "”становить в Ђ1ї второй и восьмой биты этого числа.\n";
	cout << "¬ывести полученное число на экран.\n";

	cout << "\n\n¬ведите а:";
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