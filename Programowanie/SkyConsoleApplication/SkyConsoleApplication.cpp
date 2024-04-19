#include <iostream>
#include <windows.h>
#include <conio.h>

void task1()
{
	srand(time(0));
	int consoleWidth = 30;
	int consoleWidth = 34;

	getConsolResolution(consoleWidth, consoleHeight);
	showConsoleCursor(false);
	srand(time(0));

	while (true)
	{
		int x = rand() % consoleWidth;
		int y = rand() % consoleHeight;

	}

}

int main()
{
	task1;
}