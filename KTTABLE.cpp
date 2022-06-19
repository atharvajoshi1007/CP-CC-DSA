#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n],Bi,i;
        A[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>A[i];
        }
        int cnt=0;
        for(i=1;i<=n;i++)
        {
            cin>>Bi;
            if(Bi<=(A[i]-A[i-1]))
                cnt++;
        }
        cout<<cnt<<endl;
    }
	return 0;
}
