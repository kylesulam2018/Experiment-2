#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int a, answer;
	
	while(a = 1)
	{

		cout << "Enter a number: "; 
		cin >> a;
		
		if(a>0)
		{
			answer = (a*(a+1))/2;
			cout << "The sum of all whole numbers from 1 to "<< a << " is " << answer << ".\n";	
		}
		else
		{
			cout << "Thank you!";	
			break;	 
		}
}
	getch();
	return 0;
}