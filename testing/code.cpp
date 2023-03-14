#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int sum = 0;
		for(int i = 0; i < s.size() ; i++){

			 if( s[i] == toupper(s[i]) ){
			 	s[i] = tolower(s[i]);
			 	sum += (int) s[i]; 
			}else{
			 	s[i] = toupper(s[i]);
			 	sum -= (int) s[i];  
			}
		}

		sum = abs(sum);

		int flag =0;

		for(int i = 2; i < sum; i++){
			if(sum % i == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
				cout<<"1"<<endl;

			}else{
				cout<<"0"<<endl;

			}

		
		
		
	}
}