#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,i;
	cin>>T;
	int A[T],B[T];
	for(i=0;i<T;i++)
	    cin>>A[i]>>B[i];
	for(i=0;i<T;i++)
	    if((A[i]+B[i])%2==0)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	return 0;
}
