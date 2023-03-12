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
		int arr[size];
		for(int i = 0; i < size; i++){
			cin>>arr[i];
		}

		int temp = 0;

		for(int i = 0; i < size ; i++){
			for(int j = i+1; j < size; j++){
				if(arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				}
			}
			 
		}

			// for(int j = 0; j < size; j++){
			// 	cout<<arr[j] << " ";
			// }	

			// cout<<endl;

		for(int i=0, j=1; i< size; i++, j++){
				temp = arr[j];
				arr[j] = arr[i] + temp;
			
		}


			// for(int j = 0; j < size; j++){
			// 	cout<<arr[j] << " ";
			// }	

			// cout<<endl;

			int max = arr[0];
			for(int i = 1; i < size; i++ ){
				if(max < arr[i]){
					max = arr[i];
				}
			}

			cout<<max<<endl;
    		
	}

}