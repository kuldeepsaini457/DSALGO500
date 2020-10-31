#include<iostream>
#include<vector>
using namespace std;
void inp_arr(vector<int> &v,int n);
void segrigate_pos_neg(vector<int> v);
int main(){
	vector<int> v;
	int n;
	cout<<"Enter the number of element in an array: "; cin>>n;
	cout<<"Enter the elements of array: "; 
	inp_arr(v,n);
	segrigate_pos_neg(v);
	return 0;
}
void inp_arr(vector<int> &v,int n){
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		v.push_back(t);
	}
}
void segrigate_pos_neg(vector<int> v){
	vector<int> vctr;
	int n=-1,p=-1;
	for(auto i=v.begin();i<v.end();i++){
		if(*i<0){
			vctr.insert(vctr.begin()+n+1,*i);
			n++;
			p++;
		}
		else if(*i>=0){
			vctr.insert(vctr.begin()+p+1,*i);
			p++;
		}
	}
	for(auto i=vctr.begin();i<vctr.end();i++){
		cout<<*i<<" ";
	}
}
