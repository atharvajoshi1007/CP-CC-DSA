#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int A,B,C,D;
	    cin>>A>>B>>C>>D;
	    if(A!=B)
	        (min(A,B)==A) ? A=A+C : B=B+C;
	    else
	        B=B+C;
	    if(A!=B)
	        (min(A,B)==A) ? A=A+D : B=B+D;
	    else
	        B=B+C;
	    if(A!=B) 
	        (max(A,B)==A) ? cout<<"N"<<endl : cout<<"S"<<endl;
	    else
	        cout<<"N"<<endl;
	}
	return 0;
}
