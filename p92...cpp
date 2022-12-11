#include <iostream>
// H/W _ Week9 _ 40113841054003 Reza Abedi

 using namespace std;
 
   const int t=10;
   
    main() {
  	 int f[t];
  	 int h,Min;
  	 
  	 for (h=0; h<t; h++)
	   {
  		cout << "Please enter value ["<<h<<"]:";
  		 cin >> f[h];
	   }
	   
	Min=f[1]; 
	 for (h=0; h<10; h++)
	 {
		    if (f[h]<Min)
		  {
		    Min=f[h+1];
		  } 
		  
	 } 
	 
	 	cout << "Minimum value is : "<< Min;
	     }	