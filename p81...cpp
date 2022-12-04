#include <iostream>

using namespace std;
 main(){
 	int numbers[10];
 	int m,max,min; 
 	float avg;
 	
 	for(m=0;m<10;m++){
 	cout<<"Enter the  number"<<(m+1)<<":";
 	cin>>numbers[m];
	 }
 	max=numbers[0];
 	for(m=0;m<10;m++){
 		if(numbers[m]>max){
 		max=numbers[m];
		 }
		
	 }
 	min=numbers[0];
 	for(m=0;m<10;m++){
 		if(numbers[m]<min){
 		min=numbers[m];
		 }
	}
	avg=(max+min)/2;
	cout<<"max number:"<<max<<"\n";
	cout<<"min number:"<<min<<"\n";
	cout<<"the average of maxnumber and minnumber is:"<<avg;
	 
	

}