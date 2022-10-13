#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int choose;
	while (1)
	{
		cout << "Выберите задачу: 1 2 3 4 5" << endl;
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
				cout << "Введите число для преобразования в факториал: " << endl;
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
				cout << "Для завершения введите 0, для продолжения - любое другое число" << endl;
				cin >> f;
			}
		}
		if (choose == 3)
		{
			float perc;
			int years;
			float sFirst;
			cout << "Введите начальный вклад: "<< endl;
			cin >> sFirst;
			cout << "Введите число лет: " << endl;
			cin >> years;
			int years1 = years;
			cout << "Введите процентную ставку: " << endl;
			cin >> perc;
			float istperc = perc / 100;
			while (years > 0) {
				sFirst = sFirst * (1 + istperc);
				years--;
			}
			cout << "Через " << years1 << " лет на счету будет: " << sFirst << endl;
		}
		if (choose == 4)
		{
			float cost;
			float perc;
			int years;
			long sFirst;
			long plata;
			long plata1;
			cout << "Введите стоимость квартиры: " << endl;
			cin >> cost;
			cout << "Введите начальный взнос: " << endl;
			cin >> sFirst;
			cout << "Введите число лет: " << endl;
			cin >> years;
			int years1 = years;
			cout << "Введите процентную ставку: " << endl;
			cin >> perc;
			float istperc = perc / 100;
			plata = 0;
			cost = cost - sFirst;
			int cost1 = cost / (years);
			cout << "Начальный взнос = " << sFirst << endl;
			cout << "Кредит на 1 год = " << cost << endl;
			while ((years) > 0) {
				plata1 = (cost * istperc) + cost1;
				cout << "Плата за " << years1 - (years - 1) << " год = " << plata1 << endl;
				plata = plata + plata1;
				cost = (cost - cost1);
				years--;
			}
			cout << "Общая сумма выплат = " << plata + sFirst << endl;
		}
		if (choose == 5) 
		{
			char start;
			int funt, shil, penn, funt1, shil1, penn1, f, s, p;
			char dot;
			do {
				f = s = p = 0;
				cout << "Введите первое слогаемое " << endl;
				cin >> funt >> dot >> shil >> dot >> penn;
				while (shil >= 20 or penn >= 12) {   // лучше использоваль || как или, & - как и???
					cout << "Некорректное значение, шиллингов < 20, пенсов < 12, повторите попытку: ";
					cin >> funt >> dot >> shil >> dot >> penn;
				}
				cout << "Введите второе слагаемое " << endl;
				cin >> funt1 >> dot >> shil1 >> dot >> penn1;
				while (shil1 >= 20 or penn1 >= 12) {
					cout << "Некорректное значение, шиллингов < 20, пенсов < 12, повторите попытку: ";
					cin >> funt1 >> dot >> shil1 >> dot >> penn1;
				}
				s = shil;
				f = funt + funt1;
				if (penn + penn1 >= 12) { s++; p = penn + penn1 - 12; }
				else { p = penn + penn1; }
				if (s + shil1 >= 20) { f++; s = s + shil1 - 20; }
				else { s = s + shil1; }
				cout << "Сумма равна: " << f << dot << s << dot << p << endl;
				cout << "Продолжить?(y/n) " << endl;
				cin >> start;
			} while (start == 'y');
		}
	} 
}