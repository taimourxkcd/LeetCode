#include <bits/stdc++.h>
#include<iostream>
using namespace std;


// i used vectors with the left and right constraints here

	const int N = 1e7;
	int a[N];

int main(){
	
	int t;
	cin>>t;
	while(t--){
		string n;
		vector<string> v;
		int left, right;
		while(cin>>n && n !=  "~") {
			v.push_back(n);
		}

			string temp;
			int count = 0;
			for(int i = 0; i< v.size(); i++){
				temp = v[i];	
				if ((temp[0] == 'a' || temp[0] == 'e' || temp[0] == 'i' || temp[0] == 'o' || temp[0] == 'u') && (temp.back() == 'a' || temp.back() == 'e' || temp.back() == 'i' || temp.back() == 'o' || temp.back() == 'u')){
					count++;
				}

			}

			cout<<count<<endl;




		

    		
	}

}