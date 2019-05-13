#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	int x,y;
	const double z=2.5;
	
	cout << "x= ";
	cin >> x;
	
	cout << "y= ";
	cin >> y;
	
	switch (x)
	{
		case 1:
			if (y>1 && y<5)
			   cout << "V= " << fixed << setprecision(2) << x*y*z;
			else if (y>=5) 
				cout << "V= " << fixed << setprecision(2) << x+y/z; 
			else
				cout <<	"V= " << fixed << setprecision(2) << x+y+z;
 			break;		 
		
		case 2:
			if (y<=5)
			   cout << "V= " << fixed << setprecision(2) << abs((x-y)/z);
			else if (y>5)
				cout << "V= " << fixed << setprecision(2) << x - sqrt(y+z); 
			break;
		
		default:
	 		cout << "V= " << fixed << setprecision(2) << x+y+z;
			break;	  		  
	}

getch();
return 0;			    
}