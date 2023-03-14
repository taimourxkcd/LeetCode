#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
			int n;
	cin>>n;
	int a[n];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	int target;
	cin>>target;
	
	std::vector<int> v;


	for(int i = 0; i < n; i++){
		for(int j = 1; j < n  ; j++){
			if(a[i] + a[j] == target){
				cout<< i << "," << j <<endl;
				// cout<< "numbers " <<a[i] << " " << a[j]<<endl;
				// cout<< "j is "<<j<< endl;
				break;
			}
		}
	}
	
	}
}