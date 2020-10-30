#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void inp_arr(vector<int> &v,int n);
int maximum(vector<int> v);
int minimum(vector<int> v);
int main(){
	vector<int> v;
	int n;
	cout<<"Enter the number of element in an array: "; cin>>n;
	cout<<"\nEnter the elements of array: ";
	inp_arr(v,n);
	int maxi=maximum(v);
	int mini=minimum(v);
	cout<<"\nMaximum element in array is "<<maxi<<" and minimum element is "<<mini<<"\n";
	cout<<"Using inbuilt function of C++:\nMinimum: "<<*(min_element(v.begin(),v.end()))<<"\nMaximum: "<<*(max_element(v.begin(),v.end()));
	return 0;
}
void inp_arr(vector<int> &v,int n){
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		v.push_back(t);
	}
}
int maximum(vector<int> v){
	int size=(sizeof(v)-1)/sizeof(v[0]);
	int maxi=v[0];
	for(int i=1;i<size;i++){
		if(maxi<v[i])
			maxi=v[i];
	}
	return maxi;
}
int minimum(vector<int> v){
	int size=(sizeof(v)-1)/sizeof(v[0]);
	int mini=v[0];
	for(int i=1;i<size;i++){
		if(mini>v[i]){
			mini=v[i];
		}
	}
	return mini;
}
