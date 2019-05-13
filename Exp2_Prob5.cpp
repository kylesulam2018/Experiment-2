#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int x, y, z, a;
	x = 0;
	y = 1;

	cout << "Fibonacci numbers: \n";
	for (a=0; a<=21; a++)
	{
		if (a < 2)
		{
			z = a;
			cout << z << ", ";
		}
		else 
		{
			z = x + y;
			x = y;
			y = z;
			cout << z << ", ";
	}
	}
	getch();
	return 0;
}