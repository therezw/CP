#include <iostream>
using namespace std;

main(){
	int a[5],b[5];
	int r,e,z;
	cout<<"enter elements of array a:"<<"\n";
	for(r=0;r<5;r++){
	cout<<"array a"<<(r+1)<<":";
	cin>>a[r];
	}
	cout<<"enter elements of array b:"<<"\n";
	for(e=0;e<5;e++){
	cout<<"array b"<<(e+1)<<":";
	cin>>b[e];}
	
	for(r=0;r<5;r++){
	 z=a[r];
	 a[r]=b[r];
	 b[r]=z;
	 
	 }
	cout<<"result of changing array's elements"<<"\n";
	for(r=0;r<5;r++){
	cout<<"array a"<<(r+1)<<":"<<a[r]<<"\n";
	}
	for(e=0;e<5;e++){
    cout<<"array b"<<(e+1)<<":"<<b[e]<<"\n";
		
	}
	
}