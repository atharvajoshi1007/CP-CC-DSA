#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,i;
	cin>>T;
	int N[T],X[T];
	for(i=0;i<T;i++)
	    cin>>N[i]>>X[i];
	for(i=0;i<T;i++)
	    if(N[i]<6)
	        cout<<X[i]<<endl;
	    else{
	        if(N[i]%6==0)
	            cout<<(N[i]/6)*X[i]<<endl;
	        else 
	            cout<<
	            (int(N[i]/6)*X[i])+X[i]
	                <<endl;
	    }
	return 0;
}
