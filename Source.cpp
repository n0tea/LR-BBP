#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int choose;
	while (1)
	{
		cout << "�������� ������: 1 2 3 4 5" << endl;
		cin >> choose;
		if (choose == 1)
		{
			for (int i = 39; i >= 1; i = i - 2)
			{
				cout << string(i, ' ') + string((-i) + 40, 'X') << endl;
			}
		}
		if (choose == 2)
		{
			int f = 1;
			int c;
			while (f != 0)
			{
				cout << "������� ����� ��� �������������� � ���������: " << endl;
				cin >> c;
				int fact = 1;
				int c1 = c;
				while (c1 > 0)
				{
					fact = fact * c1;
					c1--;
				}
				cout << fact << endl;
				fact = 1;
				cout << "��� ���������� ������� 0, ��� ����������� - ����� ������ �����" << endl;
				cin >> f;
			}
		}
		if (choose == 3)
		{
			float perc;
			int years;
			float sFirst;
			cout << "������� ��������� �����: "<< endl;
			cin >> sFirst;
			cout << "������� ����� ���: " << endl;
			cin >> years;
			int years1 = years;
			cout << "������� ���������� ������: " << endl;
			cin >> perc;
			float istperc = perc / 100;
			while (years > 0) {
				sFirst = sFirst * (1 + istperc);
				years--;
			}
			cout << "����� " << years1 << " ��� �� ����� �����: " << sFirst << endl;
		}
		if (choose == 4)
		{
			float cost;
			float perc;
			int years;
			long sFirst;
			long plata;
			long plata1;
			cout << "������� ��������� ��������: " << endl;
			cin >> cost;
			cout << "������� ��������� �����: " << endl;
			cin >> sFirst;
			cout << "������� ����� ���: " << endl;
			cin >> years;
			int years1 = years;
			cout << "������� ���������� ������: " << endl;
			cin >> perc;
			float istperc = perc / 100;
			plata = 0;
			cost = cost - sFirst;
			int cost1 = cost / (years);
			cout << "��������� ����� = " << sFirst << endl;
			cout << "������ �� 1 ��� = " << cost << endl;
			while ((years) > 0) {
				plata1 = (cost * istperc) + cost1;
				cout << "����� �� " << years1 - (years - 1) << " ��� = " << plata1 << endl;
				plata = plata + plata1;
				cost = (cost - cost1);
				years--;
			}
			cout << "����� ����� ������ = " << plata + sFirst << endl;
		}
		if (choose == 5) 
		{
			char start;
			int funt, shil, penn, funt1, shil1, penn1, f, s, p;
			char dot;
			do {
				f = s = p = 0;
				cout << "������� ������ ��������� " << endl;
				cin >> funt >> dot >> shil >> dot >> penn;
				while (shil >= 20 or penn >= 12) {   // ����� ������������ || ��� ���, & - ��� �???
					cout << "������������ ��������, ��������� < 20, ������ < 12, ��������� �������: ";
					cin >> funt >> dot >> shil >> dot >> penn;
				}
				cout << "������� ������ ��������� " << endl;
				cin >> funt1 >> dot >> shil1 >> dot >> penn1;
				while (shil1 >= 20 or penn1 >= 12) {
					cout << "������������ ��������, ��������� < 20, ������ < 12, ��������� �������: ";
					cin >> funt1 >> dot >> shil1 >> dot >> penn1;
				}
				s = shil;
				f = funt + funt1;
				if (penn + penn1 >= 12) { s++; p = penn + penn1 - 12; }
				else { p = penn + penn1; }
				if (s + shil1 >= 20) { f++; s = s + shil1 - 20; }
				else { s = s + shil1; }
				cout << "����� �����: " << f << dot << s << dot << p << endl;
				cout << "����������?(y/n) " << endl;
				cin >> start;
			} while (start == 'y');
		}
	} 
}