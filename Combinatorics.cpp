// Combinatorics.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <math.h>


double fact(double x) {
	if (x == 1 || x == 0) return 1;
	return x * fact(x - 1);
}

double par(double x,...) {
	if (x == 1 || x == 0) return 1;
	return x * fact(x - 1);
}

unsigned long long bcl(int n, int k)
{
	if (k>n / 2) k = n - k;
	if (k == 1)  return n;
	if (k == 0)  return 1;
	unsigned long long r;
	if (n + k >= 90) {
		r = bcl(n - 1, k);
		r += +bcl(n - 1, k - 1);
	}
	else {
		r = 1;
		for (int i = 1; i <= k;++i) {
			r *= n - k + i;
			r /= i;
		}
	}
	return r;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	for (;;)
	{
		int y;
		int k, n, v, g = 1;
		unsigned long long f;
		cout << "Выбор задачи:" << endl;
		cout << "1 - Размещение с повторением" << endl;
		cout << "2 - Размещение без повторений" << endl;
		cout << "3 - Сочетание с повторением" << endl;
		cout << "4 - Сочитание без повторений" << endl;
		cout << "5 - Перестановки c повторением" << endl;
		cout << "6 - Перестановки без повторений" << endl;
		cout << "7 - Подсчет факториала" << endl;
		cout << "8 - Подсчет бинома Ньютона" << endl;
		cin >> y;
		switch (y)
		{
		case 1: { cout << "Введите элемент k: " << endl;
			cin >> k;
			cout << "Введите элемент n: " << endl;
			cin >> n;
			f = pow(n, k);
			cout << "Результат: " << f << endl;
			break;
			}
		case 2: { cout << "Введите элемент k: " << endl;
			cin >> k;
			cout << "Введите элемент n: " << endl;
			cin >> n; 
			f = fact(n)/fact(n-k);
			cout << "Результат: " << f << endl;
			break;
			}
		case 3: { cout << "Введите элемент k: " << endl;
			cin >> k;
			cout << "Введите элемент n: " << endl;
			cin >> n;
			f = fact(n + k - 1)/(fact(k)*fact(n-1));
			cout << "Результат: " << f << endl;
			break;
			}
		case 4: { cout << "Введите элемент k: " << endl;
			cin >> k;
			cout << "Введите элемент n: " << endl;
			cin >> n;
			f = fact(n) / (fact(n - k)*fact(k));
			cout << "Результат: " << f << endl;
			break;
			}
		case 5: { cout << "Введите элемент n: " << endl;
			cin >> n;
			cout << "Введите количество всех перестановок с повторениями k: " << endl;
			cin >> k;
			for (int t=0; t < k; t++){
				cout << "Введите элемент: ";
				cin >> v;
				g *= fact(v);
			}
			f = fact(n) / g;
			cout << "Результат: " << f << endl;
			break;
		}
		case 6: { cout << "Введите число перестановок: " << endl;
			cin >> k;
			f = fact(k);
			cout << "Результат: " << f << endl;
			break;
		} 
		case 7: { cout << "Введите число фактариал которого вы хотите посчитать: " << endl;
			cin >> k;
			f = fact(k);
			cout << "Результат: " << f << endl;
			break;
		}
		case 8: { cout << "Введите элемент n: " << endl;
			cin >> n;
			cout << "Введите элемент k: " << endl;
			cin >> k;
			f = bcl(n, k);
			cout << "Результат: " << f << endl;
			break;
		}
		}
	}
    return 0;
}

