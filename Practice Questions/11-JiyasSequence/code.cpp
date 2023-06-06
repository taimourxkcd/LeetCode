#include <bits/stdc++.h>

using namespace std;

// OR simply check if its reverse is the same as original
int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		if( n % 10 == 2 || n % 10 == 3 || n % 10 == 5 ){
			cout<<"Jiya likes this no"<<endl;
		}else{
			cout<<"Jiya does not like this no"<<endl;

		}	
	}
}