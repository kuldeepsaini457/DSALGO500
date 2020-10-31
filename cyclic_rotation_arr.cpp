#include<iostream>
#include<vector>
using namespace std;
void inp_arr(vector<int> &v,int n);
void rotate_cyclic(vector<int> v,int step);
int main(){
	vector<int> v;
	int n;
	cout<<"Enter the number of element in an array: "; cin>>n;
	cout<<"Enter the elements of array: "; 
	inp_arr(v,n);
	rotate_cyclic(v,1);//here second argument is used for the number of steps that a element have to move ahead
	return 0;
}
void inp_arr(vector<int> &v,int n){
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		v.push_back(t);
	}
}
void rotate_cyclic(vector<int> v,int step){
	int temp,temp2,n=v.size();
	while(step--){
		temp=v[0];
		for(int i=0;i<n;i++){
			temp2=v[i+1];
			v[(i+1)%n]=temp;
			temp=temp2;		
		}
	}
	for(auto i=v.begin();i<v.end();i++)
		cout<<*i<<" ";
}
