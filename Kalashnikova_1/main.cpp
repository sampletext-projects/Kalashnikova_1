#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "��������� ������� \n";
	cout << "��������� ��� \n";

	double h;
	double g = 9.8;
	double t;
	cout << "������� ����� �����: ";
	cin >> t;

	h = g * t * t / 2;

	cout << "������ �������: " << h << " �\n";

	system("pause");

	return 0;
}
