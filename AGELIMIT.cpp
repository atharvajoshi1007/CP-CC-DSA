#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N,i;
	cin>>N;
	int X[N],Y[N],A[N];
	for(i=0;i<N;i++)
	    cin>>X[i]>>Y[i]>>A[i];
	for(i=0;i<N;i++){
	    if(A[i]<Y[i])
	        if(A[i]>=X[i])
	            cout<<"YES"<<endl;
	        else
    	        cout<<"NO"<<endl;
    	else
	        cout<<"NO"<<endl;
	}
	return 0;
}
