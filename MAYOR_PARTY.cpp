#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int PA,PB,PC;
	    cin>>PA>>PB>>PC;
	    if(PB>(PA+PC))
	        cout<<PB<<endl;
	    else
	        cout<<PA+PC<<endl;
	}
	return 0;
}
