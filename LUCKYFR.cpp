#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int cnt=0;
	    string n;
	    cin>>n;
	    for(int i=0;i<n.length();i++)
	    {
	        if(n[i]=='4')
	        {
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
