#include <iostream>
// H/W _ Week9 _ 40113841054003 Reza Abedi
 using namespace std;
 
  const int z=10;
  
    main() {
  	 int v[z];
  	 int u,r,lop,l;
  	 
  	  for (u=0; u<z; u++)
	    {
  		cout << "Please enter value ["<<u<<"]:";
  		 cin >> v[u];
	    }
	    
	    cout << "please enter another value:";
  		 cin >> l;
  		v[10]=l;
	  for(u=0; u<z;u++)
	  {
		for (r=0; r<(z-u); r++)
		{
			
			if (v[r]>v[r+1])
			{
				lop=v[r];
				v[r]=v[r+1];
				v[r+1]=lop;
			}
		}
	  }
	  
	cout <<"Array after sort:";
	for(u=0; u<z; u++)
	{
		cout << "  "<< v[u];
    	} 
}