#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,cnt=0,rem;
	    cin>>n;
	    while(n!=0)
	    {
	        rem=n%10;
	        if(rem==4)
	        {
	            cnt+=1;
	        }
	        n=n/10;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
