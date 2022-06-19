#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int X,coins;
	    cin>>X;
	    if(X%5==0)
	    {
	        coins=X/5;
	        if(coins%2==0)
	            cout<<coins/2<<endl;
	        else
	            cout<<(coins/2)+1<<endl;
	    }
	    else
	        cout<<-1<<endl;
	}
	return 0;
}
