#include "main.h"

void task01() {
	double r, m;

	cout << "������� ����� r: ";
	cin >> r;
	cout << "������� ����� m: ";
	cin >> m;

	double result;

	if (r <= m && m < 2 * r) {
		cout << "����� ��� r <= m < 2r: \n";
		result = sqrt(fabs(3 * m - 5 * r)) * exp(m / r);
	}
	else if (m > 2 * r) {
		cout << "����� ��� m > 2r: \n";
		result = sqrt(fabs(3 * m + 5 * r)) * exp(r / m);
	}
	else {
		cout << "����� ������� �� ������������. \n";
		return;
	}

	cout << "t2 = " << result << endl;
	return;
}