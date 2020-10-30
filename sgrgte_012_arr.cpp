#include<iostream>
#include<vector>
using namespace std;
void inp_arr(vector<int> &v,int n);
void segrigate(vector<int>&v);
int main(){
	vector<int> v;
	int n;
	cout<<"Enter the number of element in an array: "; cin>>n;
	cout<<"Enter the elements(0,1,2 only) of array:  "; 
	inp_arr(v,n);
	segrigate(v);
	cout<<"Your segregated array is: ";
	for(auto i=v.begin();i<v.end();i++)
		cout<<*i<<" ";
	return 0;
}
void inp_arr(vector<int> &v,int n){
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		v.push_back(t);
	}
}
void segrigate(vector<int>&v){
	int left=0, mid=0;
	int right=int(v.size())-1;
	while(mid<=right	){
		if(v[mid]==0){
			swap(v[left++],v[mid++]);
		}
		else if(v[mid]==1){
			mid++;
		}
		else{
			swap(v[mid],v[right--]);
		}
	}
}
