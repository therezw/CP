#include <iostream>
// H/W _ 40113841054003 Reza Abedi

using namespace std;


int pow(int x,int y){
if (y>1){
	return (x*pow(x,y-1));
}

else {
    return x;
}

}

int main(){
	int i,j;
	cout<<"please enter a number:";
	
	cin>>i;
	cout<<"please enter a number:";
	
	cin>>j;
	cout<<i<<"to the power of"<<j<<"is:"<<pow(i,j);

}
