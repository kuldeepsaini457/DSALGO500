#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void inp_arr(vector<int> &v,int n);
int kth_maximum(vector<int> v,int k);
int kth_minimum(vector<int> v,int k);
int main(){
	vector<int> v;
	int n,k_max,k_min;
	cout<<"Enter the number of element in an array: "; cin>>n;
	cout<<"\nEnter the elements of array: ";
	inp_arr(v,n);
	cout<<"\nWhich kth maximum number you want to find: ";cin>>k_max;
	cout<<"Which kth minimum number you want to find: ";cin>>k_min;
	int kth_maxi=kth_maximum(v,k_max);
	int kth_mini=kth_minimum(v,k_min);
	cout<<"\n"<<k_max<<"th maximum element in array is "<<kth_maxi<<" and\n"<<k_min<<"th minimum element is "<<kth_mini<<"\n";
	return 0;
}
void inp_arr(vector<int> &v,int n){
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		v.push_back(t);
	}
}
int kth_maximum(vector<int> v,int k_max){
	int size=(sizeof(v)-1)/sizeof(v[0]);
	sort(v.begin(),v.end());
	return v[size-k_max];
}
int kth_minimum(vector<int> v,int k_min){
	int size=(sizeof(v)-1)/sizeof(v[0]);
	sort(v.begin(),v.end());
	return v[k_min-1];
}
