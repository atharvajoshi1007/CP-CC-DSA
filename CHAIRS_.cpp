#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,i;
	cin>>T;
	int X[T],Y[T];
	for(i=0;i<T;i++)
	    cin>>X[i]>>Y[i];
	for(i=0;i<T;i++)
	    if(X[i]>=Y[i])
	        cout<<X[i]-Y[i]<<endl;
	    else
	        cout<<0<<endl;
	return 0;
}
