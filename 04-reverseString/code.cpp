#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	string reverse = "";

	cin >> s;

	int temp = s.size();

	while(temp != 0){
		reverse += s[temp-1];
		temp--;		
	}

	cout<<reverse<<endl;

	
}