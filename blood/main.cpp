#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	while (true) {
		int a, b, c, d, e;
		cout << "������� ��������� 1:   "; // ��������� ����� 1
		cin >> a;
		cout << "������� ��������� 2:   "; // ��������� ����� 2
		cin >> b;
		cout << "������� �������� ��������������� �������" << endl << "1 ��������" << endl << "2 ���������" << endl << "3 ���������" << endl << "4 �������" << endl;
		cout << "���� �����:  ";
		cin >> c;
		if (c > 4) {
			cout << "����� ������� �������\n";
		}
		if (c < 1) {
			cout << "����� ������� ���������\n";
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