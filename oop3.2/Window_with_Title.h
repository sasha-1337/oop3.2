#pragma once
#include "Window.h"
class Window_with_Title : public Window
{
private:
	string weather;
public:
	Window_with_Title();
	Window_with_Title(int, int);
	Window_with_Title(const Window_with_Title&);
	~Window_with_Title();

	string GetWeather() const { return weather; }
	void SetWeather(string weather);

	friend ostream& operator << (ostream&, Window_with_Title&);
};

