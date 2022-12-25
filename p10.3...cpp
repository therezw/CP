#include <iostream>

using namespace std;
 
 int bmm(int r, int f){
 	if (f==0){
 	return r;
	 }
	else{
	return bmm(f,r%f);
	}
 }


int main() {
int x,y;
cout<<"please enter a number:";
cin>>x;

cout<<"please enter a number:";
cin>>y;

cout<<"gcd of"<<x<<"&"<<y<<"is"<<bmm(x,y);
}