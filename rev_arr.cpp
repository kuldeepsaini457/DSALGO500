#include<iostream>
#include<vector>
using namespace std;
void print_arr(vector<int> &v,int n);
void inp_arr(vector<int> &v,int n);
void rev_arr(vector<int> v,int n);
int recur_rev(vector<int> v, int n,int start=0);

int main(){
	vector<int> v;
	int n;
	cout<<"Enter the number of element in an array: "; cin>>n;
	cout<<"Enter the elements of array: "; 
	inp_arr(v,n);
	cout<<endl;
	rev_arr(v,n);
	cout<<endl
	recur_rev(v,n-1);
	
	return 0;
}

void print_arr(vector<int> &v,int n){
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<endl;
}

void inp_arr(vector<int> &v,int n){
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		v.push_back(t);
	}
}
void rev_arr(vector<int> v,int n){
	int last=n-1;
	int temp;
	for(int start=0; start<last;start++,last--){
		temp=v[last];
		v[last]=v[start];
		v[start]=temp;
	}
	cout<<"Reversed array using normal iterative function: ";
	print_arr(v,n);
}
int recur_rev(vector<int> v, int n,int start){
	int temp;
	if(start>=n){
		cout<<"Reversed array using recursive function: ";	
		print_arr(v,int(v.size()));	
		return 0;
	}
	else{
		temp=v[n];
		v[n]=v[start];
		v[start]=temp;
		recur_rev(v,n-1,start+1);
		return 1;
	}
}
