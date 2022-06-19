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
	    (Y<=(X+200) && Y>=X) ? cout<<"YES"<<endl :cout<<"NO"<<endl ;
	}
	return 0;
}
