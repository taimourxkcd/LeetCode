#include <bits/stdc++.h>

using namespace std;

// OR simply check if its reverse is the same as original
int main(){
	
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
	
	while(true)	{
		string word;		
		cin>>word;

		if(word.size() == 0){
			break;
		}

		for(int i =0; i< word.size(); i++){
			word[i] = toupper(word[i]);
		}

		cout<<word<<endl;

	}
	}
}