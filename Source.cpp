#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int choose;
	while (1)
	{
		cout << "Vyberite zadachu: 1 2 3 4 5" << endl;
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
				cout << "Vvedite chislo dlya preobrazovaniya v faktorial:" << endl;
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
				cout << "Dlya zaversheniya vvedite 0, dlya prodolzheniya -"
					<< "lyuboe drugoe chislo" << endl;
				cin >> f;
			}
		}
		if (choose == 3)
		{
			float perc;
			int years;
			float sFirst;
			cout << "Vvedite nachal'nyj vklad: "<< endl;
			cin >> sFirst;
			cout << "Vvedite chislo let: " << endl;
			cin >> years;
			int years1 = years;
			cout << "Vvedite procentnuyu stavku: " << endl;
			cin >> perc;
			float istperc = perc / 100;
			while (years > 0) {
				sFirst = sFirst * (1 + istperc);
				years--;
			}
			cout << "CHerez" << years1 << " let na schetu budet: " << sFirst << endl;
		}
		if (choose == 4)
		{
			float cost;
			float perc;
			int years;
			long sFirst;
			long plata;
			long plata1;
			cout << "Vvedite stoimost' kvartiry: " << endl;
			cin >> cost;
			cout << "Vvedite nachal'nyj vznos: " << endl;
			cin >> sFirst;
			cout << "Vvedite chislo let: " << endl;
			cin >> years;
			int years1 = years;
			cout << "Vvedite procentnuyu stavku: " << endl;
			cin >> perc;
			float istperc = perc / 100;
			plata = 0;
			cost = cost - sFirst;
			int cost1 = cost / (years);
			cout << "Nachal'nyj vznos = " << sFirst << endl;
			cout << "Kredit na 1 god = " << cost << endl;
			while ((years) > 0) {
				plata1 = (cost * istperc) + cost1;
				cout << "Plata za " << years1 - (years - 1) << " god = " << plata1 << endl;
				plata = plata + plata1;
				cost = (cost - cost1);
				years--;
			}
			cout << "Obshchaya summa vyplat = " << plata + sFirst << endl;
		}
		if (choose == 5) 
		{
			char start;
			int funt, shil, penn, funt1, shil1, penn1, f, s, p;
			char dot;
			do {
				f = s = p = 0;
				cout << "Vvedite pervoe slogaemoe " << endl;
				cin >> funt >> dot >> shil >> dot >> penn;
				while (shil >= 20 or penn >= 12) {   // лучше использоваль || как или, & - как и???
					cout << "Nekorrektnoe znachenie, shillingov < 20, pensov < 12, povtorite popytku: ";
					cin >> funt >> dot >> shil >> dot >> penn;
				}
				cout << "Vvedite vtoroe slagaemoe " << endl;
				cin >> funt1 >> dot >> shil1 >> dot >> penn1;
				while (shil1 >= 20 or penn1 >= 12) {
					cout << "Nekorrektnoe znachenie, shillingov < 20, pensov < 12, povtorite popytku: ";
					cin >> funt1 >> dot >> shil1 >> dot >> penn1;
				}
				s = shil;
				f = funt + funt1;
				if (penn + penn1 >= 12) { s++; p = penn + penn1 - 12; }
				else { p = penn + penn1; }
				if (s + shil1 >= 20) { f++; s = s + shil1 - 20; }
				else { s = s + shil1; }
				cout << "Summa ravna: " << f << dot << s << dot << p << endl;
				cout << "Prodolzhit'?(y/n)" << endl;
				cin >> start;
			} while (start == 'y');
		}
	} 
}