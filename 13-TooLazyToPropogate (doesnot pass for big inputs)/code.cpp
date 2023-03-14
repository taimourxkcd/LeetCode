#include <bits/stdc++.h>
#include<numeric>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main(){

	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n ; i++){
			cin>>arr[i];
		}

		int first_digit, sec_digit, third_digit;
		cin>>first_digit>>sec_digit>>third_digit;

		int res = arr[third_digit - 1];

		if( res % 3 == 0 && res % 5 != 0){
			while(res != 0){

				cout<<res<<" ";
				res -= first_digit;
			}	
		}else if( res % 5 == 0 && res % 3 != 0) {
			while(res != 0){

				cout<<res<<" ";
				res -= sec_digit;
			}	
		}else if( res % 3 == 0 && res % 5 == 0){
			while(res != 0){

				cout<<res<<" ";
				res -= lcm(first_digit, sec_digit);
			}	
		}

		int a = 0;
		cout<<a;



  }
}