#include "main.h"

// ������� 2.1
void task1() {
	double x, y, func, c;
	int p;

	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;
	cout << "����:\n1-��������� x^2\n2-�������� ���������� exp(x)\n�������� ����� ����: ";
	cin >> p;

	switch (p) {
		case 1: 
			func = pow(x, 2); 
			break;

		case 2: 
			func = exp(x); 
			break;

		default:
			cout << "������ �������� ���.\n";
			return;
	}

	if (x > y) {
		cout << "����� x > y:\n";
		c = pow(func, 2) + pow(y, 2) + sin(y);
	}
	else if (x < y) {
		cout << "����� x < y:\n";
		c = pow(func - y, 2) + cos(y);
	}
	else {
		cout << "����� x = y:\n";
		c = pow(y - func, 2) + tan(y);
	}

	cout << "x = " << x << ";\t y = " << y << endl;
	cout << "f(x) = " << func << "\nc = " << c << endl;

	return;
}

// ������� 2.2
void task2() {
	int num;
	char group;

	cout << "������� ����� �����: ";
	cin >> num;

	if (num > 100 && num < 120) {
		group = 'A';
	}
	else if (num > 0 && num <= 100 && num % 5 == 0) {
		group = 'B';
	}
	else if (num < 0 && num % 2 == 0) {
		group = 'C';
	}
	else {
		group = 'D';
	}

	cout << "����� " << num << " ��������� � ������ " << group << endl;

	return;
}

// ������� 2.3
void task3() {
	struct Lake {
		char name[20];
		int area;
	};

	int arraySize = 7;
	Lake* lakes = new Lake[arraySize]{
		{"�����-����", 6280},
		{"��������", 9720},
		{"���������", 17700},
		{"������", 18300},
		{"������", 31500},
		{"��������� ����", 51000},
		{"���������� ����", 371000},
	};

	int area;


	cout << "������� �������(��.��): ";
	cin >> area;

	int startIndex = -1;
	for (int i = 0; i < arraySize; i++) {
		if (lakes[i].area >= area) {
			startIndex = i;
			break;
		}
	}


	cout << "������� �� ����� " << area << " ��.�� ����� ��������� �����:\n";

	for (int i = startIndex; i < arraySize; i++) {
		cout << "\t" << lakes[i].name << " - " << lakes[i].area << endl;
	}
}

// ���� ������� 2
void task02() {
	short int num;

	cout << "�������� ����� ���������: ";
	cin >> num;
	cout << endl;

	switch (num) {
		case 1:
			task1();
			break;

		case 2:
			task2();
			break;

		case 3:
			task3();
			break;

		default:
			cout << "����� ��������� ���." << endl;
			break;
	}
	return;
}