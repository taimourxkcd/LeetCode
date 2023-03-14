#include <bits/stdc++.h>

using namespace std;

// OR simply check if its reverse is the same as original
int main(){
	
	int t;
	cin >> t;
	while(t--){
	string s;
	int count = 0;

	cin >> s;

	for(int i = 0, j = s.size() - 1 ; i < s.size() / 2; i++, j--){
			

			if(s[i] == s[j]  ){
				count++;
			}
		
		}	


		if(count == s.size() / 2){
			cout<<"it is a palindrome"<<endl;
		}else{
			cout<<"not a palindrome"<<endl;
		}
	
	}
	
}