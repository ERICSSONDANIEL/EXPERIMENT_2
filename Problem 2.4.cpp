#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int x, y;
	cout << "Different Counting..." << endl;
	
	for (x = 1; x <= 30; x++)
	{
	if (x <= 10)
	cout << x << ", ";
else if (x > 11)
	{
	if (x % 2 == 1)
	cout << x+1 << ", ";
	}
	}
	getch ();
	return 0;
}
