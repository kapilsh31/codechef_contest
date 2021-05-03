#include <iostream>
using namespace std;

int find(int n){
    int c=0,r;
    while(n!=0){
        r=n%10;
        n=n/10;
        if(r==4){
            c+=1;
        }
        
    }
    return c;
}

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<find(n)<<endl;
	}
	return 0;
}
