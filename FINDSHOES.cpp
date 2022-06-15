#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N,M;
	    cin>>N>>M;
	    
	    if(M>=N)
	        cout<<N<<endl;
	    else
	        cout<<N+(N-M)<<endl;
	}
	return 0;
}
