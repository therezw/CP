#include <iostream>
// H/W _ Week9 _ 40113841054003 Reza Abedi

 using namespace std;
 
 main() {
 	int d[10];
 	d[0]=0;
 	d[1]=1;
 	
 	int w;
 	
 	for (w=2; w<10; w++){
 		d[w]=d[w-1]+d[w-2];
	 }
	 
	for (w=0; w<10; w++){
		
		
		cout << "Fibonatchi seroius:"<<d[w] << "\n";
	} 
}