#include "Window_with_Title.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int Menu;
	Window a;
	Window_with_Title w;
	do {
		cout << " [1] - ������ ���� ����" << endl;
		cout << " [2] - �������� ���� ����" << endl << endl;
		cout << " [0] - ����� � ��������" << endl << endl;
		cout << " ������ �������� - "; cin >> Menu;
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
			cout << "    --�������-- \n ������ ��������� ��������! " << endl << endl;
		}
	} while (Menu != 0);
	return 0;
}

