#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
	int sum = 0;
	int remainder;


	cin >> n;

	while(n != 0){

		remainder = n % 10;
		n = n / 10;
		sum += remainder;
	}


	cout << sum <<endl;
	}
	
}