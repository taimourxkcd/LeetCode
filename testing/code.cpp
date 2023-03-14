#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	
	int *a = new int[2];
	int b = 4;
	a[0] = 1;
	// *(a+1) = 2;
	int bad = 5;
	int *z = &b;
	int **p = &z;

	cout<<*a<<endl;	

	cout<<**p;	
	}