#include <iostream>
// H/W _ Week7 _ 40113841054003 Reza Abedi
using namespace std ;
int main() {

int  n , t , f ;

cout << "please enter n:";
cin >> n ;

f = 0;

for (t = 1 ; t <= n ; t++)	{
	
	if ( n%t == 0)
	
	f +=t ;
	}
	cout << f ;
}
