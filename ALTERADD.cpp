#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
        int A,B;
        cin>>A>>B;
        int diff=B-A;
	    if(diff%3==2)
	       cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}
