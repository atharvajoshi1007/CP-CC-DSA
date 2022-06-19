#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int X,Y;
	    cin>>X>>Y;
	    if(Y%X==0)
	        cout<<(Y/X)-1<<endl;
	    else
	        cout<<(Y/X)<<endl;
	    
	}
	
	return 0;
}
