#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
        int cnt,N;
        cin>>N;
        int A[N],sum=0;
	        for(int j=0;j<N;j++){
	            cin>>A[j];
	            sum+=A[j];
	        }
	        if(sum==0)
	           cout<<0<<endl;
	        else if(sum%2==0)
	           cout<<abs(sum/2)<<endl;
	        else
	           cout<<-1<<endl;
	}
	return 0;
}
