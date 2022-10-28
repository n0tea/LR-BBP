// LR3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int choose = 1;
	while (choose != 0)
	{
		cout << "Vyberite zadachu: 1 2 3 4 5. CHtoby zavershit' vvedite 0" << endl;
		cin >> choose;
		if (choose == 1)
		{
			char dum;
			struct employee {
				int number;
				float salary;
			};
			employee emp1, emp2, emp3;
			cout << "(1)Vvedite nomer rabotnika i zarplatu (cherez tire). Primer: 1-1856,35" << endl;
			cin >> emp1.number >> dum >> emp1.salary;
			cout << "(2)Vvedite nomer rabotnika i zarplatu (cherez tire). Primer: 1-1856,35" << endl;
			cin >> emp2.number >> dum >> emp2.salary;
			cout << "(3)Vvedite nomer rabotnika i zarplatu (cherez tire). Primer: 1-1856,35" << endl;
			cin >> emp3.number >> dum >> emp3.salary;
			cout << "(1): |" << emp1.number << "| |" << emp1.salary << '|' << endl;
			cout << "(2): |" << emp2.number << "| |" << emp2.salary << '|' << endl;
			cout << "(3): |" << emp3.number << "| |" << emp3.salary << '|' << endl;
		}
		if (choose == 2)
		{
			enum etype { laborer, secretary, manager, accountant, executive, researcher };
			etype temp;
			char letter;
			cout << "Input first letter of position" << endl;
			cout << "(laborer, secretary, manager, accontant, executive, reseacher): ";
			cin >> letter;
			switch (letter)
			{
			case 'l': temp = laborer; break;
			case 's': temp = secretary; break;
			case 'm': temp = manager; break;
			case 'a': temp = accountant; break;
			case 'e': temp = executive; break;
			case 'r': temp = researcher; break;
			}
			switch (temp)
			{
			case 0: cout << "laborer" << endl; break;  //hotya mozhno bylo by i v pervom sviche vyvesti bez ispol'zovaniya temp
			case 1: cout << "secretary" << endl; break;
			case 2: cout << "manager" << endl; break;
			case 3: cout << "accountant" << endl; break;
			case 4: cout << "executive" << endl; break;
			case 5: cout << "researcher" << endl; break;
			}
		}
		if (choose == 3)
		{
			char dum;
			struct fraction {
				int chislitel;
				int znamenatel;
			};
			fraction fr1;
			cout << "Vведите первую дробь" << endl;
			cin >> fr1.chislitel >> dum >> fr1.znamenatel;
			fraction fr2;
			cout << "Vведите вторую дробь" << endl;
			cin >> fr2.chislitel >> dum >> fr2.znamenatel;
			fraction fr3;
			fr3.chislitel = fr1.chislitel * fr2.znamenatel + fr2.chislitel * fr1.znamenatel;
			fr3.znamenatel = fr1.znamenatel * fr2.znamenatel;
			cout << "Сумма дробей: " << fr3.chislitel << '/' << fr3.znamenatel << endl;
			int del = fr3.znamenatel;
			int fl = 0;
			if (fr3.chislitel == fr3.znamenatel) {
				cout << "После сокращения: " << 1 << endl;
			}
			else {
				while (del > 1)
				{
					if (fr3.chislitel % del == 0 and fr3.znamenatel % del == 0 and fr3.chislitel / del >= 2 and fr3.znamenatel / del >= 2) {
						fr3.chislitel = fr3.chislitel / del;
						fr3.znamenatel = fr3.znamenatel / del;
					}
					del--;
				}
				if (fr3.chislitel % fr3.znamenatel == 0) {
					cout << "После сокращения: " << fr3.chislitel / fr3.znamenatel << endl;
				}
				else {
					cout << "После сокращения: " << fr3.chislitel << '/' << fr3.znamenatel << endl;
				}
			}
		}
		if (choose == 4)
		{
			char dum;
			struct time {
				int hours;
				int minutes;
				int seconds;
			};
			time t1;
			cout << "Введите время в формате (h:m:s): ";
			cin >> t1.hours >> dum >> t1.minutes >> dum >> t1.seconds;

			long totalseconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
			cout << "Всего секунд: " << totalseconds << endl;
		}
		if (choose == 5)
		{
			char dum;
			struct time {
				int hours;
				int minutes;
				int seconds;
			};
			time t1;
			cout << "(1)Введите время в формате (h12:m59:s59): ";
			cin >> t1.hours >> dum >> t1.minutes >> dum >> t1.seconds;
			while (t1.minutes > 59 or t1.seconds > 59) {
				cout << "Не правильный формат времени: минут <= 59, секунд <= 59. Попробуйте снова (m59:s59)" << endl;
				cin >> t1.minutes >> dum >> t1.seconds;
			}
			
			time t2;
			cout << "(2)Введите время в формате (h12:m59:s59): ";
			cin >> t2.hours >> dum >> t2.minutes >> dum >> t2.seconds;
			while (t2.minutes > 59 or t2.seconds > 59) {
				cout << "Не правильный формат времени: минут <= 59, секунд <= 59. Попробуйте снова (m59:s59)" << endl;
				cin >> t2.minutes >> dum >> t2.seconds;
			}

			long seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
			long seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
			long totalseconds = seconds2 + seconds1;
			time t3;
			int days = 0;
			t3.hours = totalseconds / 3600;
			if (t3.hours > 24) {
				days = t3.hours / 24;
				t3.hours = t3.hours % 24;
			}
			int mps = totalseconds % 3600;
			t3.minutes = mps / 60;
			t3.seconds = mps % 60;
			cout << "Сумма времени: d:" << days << " + " << t3.hours << "h:" << t3.minutes << "m:" << t3.seconds << "s" << endl;
		}
	}
}