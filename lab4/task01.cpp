#include "main.h"

void task01() {
	double r, m;

	cout << "Введите число r: ";
	cin >> r;
	cout << "Введите число m: ";
	cin >> m;

	double result;

	if (r <= m && m < 2 * r) {
		cout << "Ветка при r <= m < 2r: \n";
		result = sqrt(fabs(3 * m - 5 * r)) * exp(m / r);
	}
	else if (m > 2 * r) {
		cout << "Ветка при m > 2r: \n";
		result = sqrt(fabs(3 * m + 5 * r)) * exp(r / m);
	}
	else {
		cout << "Такой вариант не предусмотрен. \n";
		return;
	}

	cout << "t2 = " << result << endl;
	return;
}