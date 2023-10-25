#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	while (true) {
		int a, b, c, d, e;
		cout << "введите переменую 1:   "; // переменая номер 1
		cin >> a;
		cout << "введите переменую 2:   "; // переменая номер 2
		cin >> b;
		cout << "введите вариаент математического решения" << endl << "1 сложение" << endl << "2 вычетание" << endl << "3 умножение" << endl << "4 деление" << endl;
		cout << "ваше число:  ";
		cin >> c;
		if (c > 4) {
			cout << "число слишком большое\n";
		}
		if (c < 1) {
			cout << "число слишком маленькое\n";
		}
		if (c == 1) {
			d = a + b;
			cout << d << endl;
		}
		if (c == 2) {
			d = a - b;
			cout << d << endl;
		}
		if (c == 3) {
			d = a * b;
			cout << d << endl;
		}
		if (c == 4) {
			d = a / b;
			cout << d << endl;
		}

	}
}