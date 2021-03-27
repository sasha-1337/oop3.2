#include "Window_with_Title.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int Menu;
	Window a;
	Window_with_Title w;
	do {
		cout << " [1] - Ввести стан вікна" << endl;
		cout << " [2] - Показати стан вікна" << endl << endl;
		cout << " [0] - Вийти з програми" << endl << endl;
		cout << " Введіть значення - "; cin >> Menu;
		cout << endl;
		switch (Menu)
		{
		case 1:
			cin >> w;
			break;
		case 2:
			a = w;
			cout << a;
			cout << w;
			break;
		case 0:
			break;
		default:
			cout << "    --Помилка-- \n Введіть правильне значення! " << endl << endl;
		}
	} while (Menu != 0);
	return 0;
}

