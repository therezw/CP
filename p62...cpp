#include <iostream>

using namespace std ;
int main() {
int  num1 , num2 , z  , h ;
cout << "please enter num1" ;
cout << endl ;
cin >> num1 ;
cout << "please enter num2" ;
cout << endl ;
cin >> num2 ;

z=0;
while ( num1 >= num2 )  
{
	z++;
	h=num1 -= num2 ;
	
}
cout << h;	
cout << endl ;
cout << z;
}