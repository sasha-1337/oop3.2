#include "Window_with_Title.h"
Window_with_Title::Window_with_Title()
{
	int open = 0, 
		close = 1;
	string s = "qwerty";
	SetWeather(s);
	SetOpen(open);
	SetClose(close);
}
Window_with_Title::Window_with_Title(int o, int c)
{
	int open = o,
		close = c;
	string s = "qwerty";
	SetWeather(s);
	SetOpen(open);
	SetClose(close);
}
Window_with_Title::Window_with_Title(const Window_with_Title& w)
{
	int open = w.GetOpen(),
		close = w.GetClose();
	string s = w.GetWeather();
	SetWeather(s);
	SetOpen(open);
	SetClose(close);
}
Window_with_Title::~Window_with_Title() { }

void Window_with_Title::SetWeather(string weather)
{
	if (GetStatus() == 1)
	{
		weather = "сонячна";
		this->weather = weather;
	}
	if (GetStatus() == 0)
	{
		weather = "дощова";
		this->weather = weather;
	}
}

ostream& operator << (ostream& out, Window_with_Title& w)
{
	w.SetWeather("qwerty");
	out << " Погода: " << w.GetWeather() << endl << endl;
	return out;
}