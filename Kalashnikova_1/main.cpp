#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Калашникова А. М. УМЛ - 112\n";
	cout << "Программа для расчёта высоты полёта\n";

	double h;
	double g = 9.8;
	double t;
	cout << "Введите время полёта: ";
	cin >> t;

	h = g * t * t / 2;

	cout << "Высота падения: " << h << " м\n";

	system("pause");

	return 0;
}
