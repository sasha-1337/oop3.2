#include "Window.h"
Window::Window()
{
	open = 0;
	close = 1;
	Window_Status = 2;
}
Window::Window(const Window& a)
{
	open = a.open;
	close = a.close;
	Window_Status = a.Window_Status;
}
Window::~Window() { }

bool Window::Init(int status)
{
	if (status == 1)
	{
		SetOpen(status);
		return true;
	}
	if (status == 0)
	{
		SetClose(status);
		return true;
	}
	else
		return false;
}

istream& operator >> (istream& in, Window& w)
{
	w.SetOpen(0);
	w.SetClose(1);
	do {
		cout << "[1] - Відчинити вікно " << endl;
		cout << "[0] - Зачинити вікно " << endl;
		cout << " Стан - ? "; in >> w.Window_Status;
		cout << endl;
	} while (!w.Init(w.Window_Status));
	return in;
}

ostream& operator << (ostream& out, const Window& a)
{
	out << string(a);
	return out;
}

Window::operator string() const
{
	stringstream s;

	if (open == 1) { s << " Вікно відчинене - " << open << endl; }
	if (close == 0) { s << " Вікно зачинене - " << close << endl; }

	return s.str();
}

Window& Window::operator = (Window& w)
{
	open = w.open;
	close = w.close;
	return w;
}