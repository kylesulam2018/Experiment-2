#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	double gallons,unpaid;

	cout << "Let's Compute Your Water Bill!" << endl;
	cout << endl;
	
	cout << "Enter consumption (in gallons): ";
	cin >> gallons;
	
	cout << "Enter unpaid balance: Php ";
	cin >> unpaid;
	
	if (unpaid>0)
	   cout << "Total amount due: Php "	<< (gallons*1.10)+(unpaid+20);
	else if (unpaid<0)
		 cout << "Invalid input!";
	else
		cout << "Total amount due: Php " << gallons*1.10;	    

	
	getch();
	return 0;
}