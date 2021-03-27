#pragma once
#include <iostream>
#include <sstream>
#include <Windows.h>

using namespace std;

class Window
{
private:
	int open, close;
	int Window_Status;
public:
	Window();
	Window(const Window&);
	~Window();

	int GetOpen() const { return open; }
	int GetClose() const { return close; }
	int GetStatus() const { return Window_Status; }

	void SetOpen(int open) { this->open = open; }
	void SetClose(int close) { this->close = close; }
	void SetStatus(int Window_Status) { this->Window_Status = Window_Status; }

	bool Init(int status);
	friend istream& operator >> (istream&, Window&);
	friend ostream& operator << (ostream&, const Window&);
	operator string() const;
	Window& operator = (Window&);
};

