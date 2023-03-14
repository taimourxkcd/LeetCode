#include <bits/stdc++.h>

using namespace std;

// this program converts a binary to digit form

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		
		int digit = 0;
		long long power2 = 1;
		long long sum = 0;

		for(int i = n - 1; i >= 0; --i){

			digit = static_cast<int>(s[i]) - static_cast<int>('0');
			sum += digit * power2;			
			power2 = power2 * 2;

	}

	cout<<sum<<endl;


  }
}