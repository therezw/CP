#include <iostream> 
#include <iomanip>   // std::setw
// H/W _ Week7 _ 40113841054003 Reza Abedi
using namespace std;
 
 int main ()
 
{
int k , z , o , b ; 
cout << "enter max range :" ;
cin >> b ;
for ( k = 1 ; k <= b ; k++){
	o = 0 ;
	for ( z = 2 ; z <= k / 2 ; z++){
		if ( k % z ==0 ){ 
		o++;
		break;
		}
}
if ( o== 0 && k!= 1)
cout << k << setw(3) ;
}
return 0 ;
}
