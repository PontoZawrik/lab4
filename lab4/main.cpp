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