#include "main.h"

int main() {
	setlocale(LC_ALL, "ru");

	short int num;

	cout << "�������� ����� �������: ";
	cin >> num;

	switch (num) {
		case 1:
			task01();
			break;

		case 2:
			task02();
			break;

		default:
			cout << "������ ������� ���." << endl;
			break;
	}

	system("pause");
	return 0;
}


// ����������� �������
// 1) x = x > 100 ? x - 100 : x;
// 2) -
// 3) 
// a - (x < y || x > z)
// b - (y < 20 || y > 90)
// c - (x != 25 && x != 14)