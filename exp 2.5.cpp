#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
cout << "* Fibonacci Sequence*" << endl;
cout <<  endl << endl;

int w, x = 0, y =1, z;
cout << "Fibonacci Numbers: " << endl;
for (w=0; w < 22; w++)
{
if (x == 10946)
{
cout << x << ".";
break;
}

cout << x << ", ";
z =  x+y;
x=y;
y=z;
}
getch();
return 0;
}




