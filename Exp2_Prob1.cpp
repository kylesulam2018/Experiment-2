#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int hours;
	char package;

	cout << "A = Package A: P995/mo with 10hrs of access" << endl;
	cout << "B = Package B: P1495/mo with 20 hrs of access" << endl;
	cout << "C = Package C: P1995/mo with unlimited access" << endl;
	cout << "---------------------------------------------" << endl;

	cout <<"Please enter your package type (A-C): ";
	cin>> package;
	cout <<"How many hours you have used : ";
	cin>> hours;

	switch (package)
	{
	case 'a':
	case 'A':
		if (hours<=10)
			cout << "Total Amount Due: " << 995 << " Php";
		else
			cout << "Total Amount Due: " << 995+((hours-10)*20) << " Php";
		break;
	case 'b':
	case 'B':
		if (hours<=20)
			cout << "Total Amount Due: " << 1495 << " Php";
		else
			cout << "Total Amount Due: " << 1495+((hours-20)*10) << " Php";
		break;
	case 'c':
	case 'C':
		cout << "Total Amount Due: " << 1995 << " Php";
		break;
	default:
		cout << "Invalid Input";
	}
	getch();
	return 0;
}