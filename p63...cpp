#include <iostream>

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