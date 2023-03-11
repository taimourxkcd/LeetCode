#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		int last_digit;
		string s = "";

		cin>>n;


		while(n != 0){
			last_digit = n % 10;
			n = n / 10;
			s += to_string(last_digit);
		}

		cout << s << endl;
	}
	
}