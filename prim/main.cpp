#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double a, f, r, x, y;
	int p;

	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;
	cout << "����:\n1-��������� sh(x)\n2-��������� x^2\n3-�������� ���������� exp(x)\n�������� ����� ����: ";
	cin >> p;

	switch (p) {
		case 1: {
			f = sinh(x);
			cout << p << endl;
			break;
		}
		case 2: {
			f = pow(x, 2);
			break;
		}
		case 3: {
			f = exp(x);
			break;
		}
		default: {
			cout << "������ �������� ���.\n";
			system("pause");
			return 0;
			break;
		}
	}

	cout << "f(x) = " << f << endl;
	a = fabs(x * y);
	cout << "|x*y| = " << a << endl;

	if (a < 5) {
		cout << "��� �������, ����� |x*y| < 5 ������� ��� �������������.\n";
		system("pause");
		return 0;
	}
	else {
		if (a == 5) {
			r = sin(x) + tan(y);
		}
		else {
			if (a > 10) {
				r = fabs(f) + log(y);
			}
			else {
				r = exp(f + y);
			}
		}
	}

	cout << "��������� ����������: " << r << endl;
	system("pause");
	return 0;
}