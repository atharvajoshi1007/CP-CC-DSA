#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    string S;
	    cin>>S;
	    for(int i=0;i<N;i=i+2)
	    {
	        if((S.substr(i,2)) == "00")
	            cout<<"A";
	        else if((S.substr(i,2)) == "01")
	            cout<<"T";
	        else if((S.substr(i,2)) == "10")
	            cout<<"C";
	        else
	            cout<<"G";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
