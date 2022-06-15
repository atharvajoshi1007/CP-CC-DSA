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
        if(N%2==0){
	        int A[N],sum=0;
	        for(int j=0;j<N;j++){
	            cin>>A[j];
	            sum+=A[j];
	        }
	        if(sum==0)
	            cout<<0;
	        else
	            {
	                cnt=0;
	                for(int i=0;i<N;i++)
	                {
	                    if(A[i]<0)
	                        cnt++;
	                }
	                cout<<abs(N/2-cnt)<<endl;

	            }
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
