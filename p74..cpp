#include <iostream>
using namespace std ;
// H/W _ Week7 _ 40113841054003 Reza Abedi
int main() {
	int num1 , num2 , z , gcd ;
	
	cout << "please enter two integer values:";
	
	cin >> num1 >> num2;
	for (z = 1; z <= num1 && z <= num2 ; z++)
	{ 
	  if(num1 % z == 0 && num2 % z == 0)
	  gcd = z ;
	   
	   
	}
	 if ( num1 % num2 ==0);
	cout << "gcd of" << num1 << " and" << num2 << "is " << gcd;
	
}
