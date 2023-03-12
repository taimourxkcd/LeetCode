#include <bits/stdc++.h>
#include<iostream>
using namespace std;

 const int N = 1e7;
 int a[N];

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int size;
		cin>>size;
		string arr[size];
		for(int i = 0; i < size; i++){
			cin>>arr[i];
		}

	
		int left, right;
		cin>>left>>right;
		int count = 0;

		for(int i = left; i <= right; i++){
			string temp = arr[i];			
			if ((temp[0] == 'a' || temp[0] == 'e' || temp[0] == 'i' || temp[0] == 'o' || temp[0] == 'u') && (temp.back() == 'a' || temp.back() == 'e' || temp.back() == 'i' || temp.back() == 'o' || temp.back() == 'u')){
					count++;
			}
	
		}
		cout<<count<<endl;	

    		
	}

}