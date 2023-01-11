#include <iostream>

using namespace std;
main() {
	
	int rez [6];
	 int min , p ;
	 
	 for ( p=0; p<6 ; p++){ 
	 cin >> rez [p];
	 
	 	 }
	 	 
	 	 min=rez[0];
	 	 for  (p=0; p<6 ; p++){
	 	 	if (rez [p]<min){ 
	 	 	min=rez[p];
			  }
		  }
		  cout << "minimum of array number" << min ;
}