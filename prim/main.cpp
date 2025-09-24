#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double a, f, r, x, y;
	int p;

	cout << "Ввдеите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Меню:\n1-расчитать sh(x)\n2-расчитать x^2\n3-расчиать экспоненту exp(x)\nВыберите пункт меню: ";
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
			cout << "Такого варианта нет.\n";
			system("pause");
			return 0;
			break;
		}
	}

	cout << "f(x) = " << f << endl;
	a = fabs(x * y);
	cout << "|x*y| = " << a << endl;

	if (a < 5) {
		cout << "Для случаев, когда |x*y| < 5 решения нне предусмотрено.\n";
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

	cout << "Результат вычислений: " << r << endl;
	system("pause");
	return 0;
}