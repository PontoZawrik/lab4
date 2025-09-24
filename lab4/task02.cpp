#include "main.h"

void task1() {
	double x, y, func, c;
	int p;

	cout << "Ввдеите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Меню:\n1-расчитать x^2\n2-расчиать экспоненту exp(x)\nВыберите пункт меню: ";
	cin >> p;

	switch (p) {
		case 1: 
			func = pow(x, 2); 
			break;

		case 2: 
			func = exp(x); 
			break;

		default:
			cout << "Такого варианта нет.\n";
			return;
	}

	if (x > y) {
		cout << "Ветка x > y:\n";
		c = pow(func, 2) + pow(y, 2) + sin(y);
	}
	else if (x < y) {
		cout << "Ветка x < y:\n";
		c = pow(func - y, 2) + cos(y);
	}
	else {
		cout << "Ветка x = y:\n";
		c = pow(y - func, 2) + tan(y);
	}

	cout << "x = " << x << ";\t y = " << y << endl;
	cout << "f(x) = " << func << "\nc = " << c << endl;

	return;
}

void task02() {
	short int num;

	cout << "Выберите номер подзадачи: ";
	cin >> num;
	cout << endl;

	switch (num) {
	case 1:
		task1();
		break;

	case 2:
		break;

	default:
		cout << "Такой подзадачи нет." << endl;
		break;
	}

	return;
}