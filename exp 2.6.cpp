#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int x, y, z;
	
	
	do{
		
	cout << "Enter a number: "; 
	cin >> x;		
	
	if (x <= 0)
		{
		cout << " input positive integer only! Thank you!";
		break;
		}

	for (z=1; z<=x; z++)
		{
		y +=z;
		}
		cout << "The sum of all whole number from 1 to " << x << " is " << y << "." << endl;
				
	}while (x!=0);
	
	getch ();
	return 0;
}
