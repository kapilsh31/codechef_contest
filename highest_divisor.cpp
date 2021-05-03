

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,max=0;
	cin>>n;
	for(int i=1; i<11; i++){
	    if(n%i==0){
	     if(max<i){
	         max=i;
	     }
	     else{
	         continue;
	     }
	    }
	}
	std::cout << max << std::endl;
	return 0;
}
