#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
  
 char a;
 int x,y ;
 cout << "Package A: For P995/mo 10 hrs of access are provided. Addtional hours are P20/hr. " <<endl;
 cout << "Package B: For P1495/mo 20 hrs of access are provided. Addtional hours are P10/hr. " <<endl;
 cout << "Package C: For P1995/mo unlimited access are provided.  " <<endl;
 cout << endl << endl;
 cout << "Choose a Package" << endl;
 switch (a)
 {
 	case 'A':
 	cout << " For P995/mo 10 hrs of access. Additional hours are P20/hr" <<endl;
 	cout << "Additional hour/s:  " << endl;
 	cin >> x;
 	cout << "Additional hour/s" << "   P" << y* 10 << endl;
 	cout << "Total payment" << "  =  "<< "  P" << 995 + x*10 <<endl;
 	break;
case 'B':
	cout << " For P1495/mo 20 hrs of access. Additional hours are P20/hr" <<endl;
 	cout << "Additional hour/s:  " << endl;
 	cin >> y;
 	cout << "Additional hour/s" << "   P" << y* 20 << endl;
 	cout << "Total payment" << "  =  "<< "  P" << 1495 + y*20 <<endl ;
 	break;
case 'C':
	cout << " For P1995/mo unlimited access. " <<endl;
 	cout << "total payment =  P1995"<< endl;
 	break;
 	
}
getch();
return 0;
}
