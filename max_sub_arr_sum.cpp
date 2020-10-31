//KADANE's Algorithm
#include <iostream>
#include <vector>
using namespace std;

int main() {

	int t,n;
	cout<<"Enter the number of test cases: ";
	cin>>t;
	while(t--){
	    vector<int> v;
	    int curr_sum,max_sum,temp;
	    cout<<"Enter the number of elements of array: ";
	    cin>>n;
	    cout<<"Enter the elements of array: ";
	    for(int i=0;i<n;i++){
	        cin>>temp;
	        v.push_back(temp);
	    }
	     curr_sum=max_sum=v[0];
	    for(int i=1;i<n;i++){
	    	if(v[i]>curr_sum+v[i]){
	    		curr_sum=v[i];
			}
			else{
				curr_sum+=v[i];
			}
			if(curr_sum>max_sum)
				max_sum=curr_sum;
	    }
	    cout<<"Maximum sum  of the contiguous sub-array is: ";
	    cout<<max_sum<<endl<<endl;
	}
	return 0;
}
