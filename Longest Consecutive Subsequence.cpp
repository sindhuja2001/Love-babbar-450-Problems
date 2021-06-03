  //Method 1: Naive Approach: O(nlogn)
  
#include<bits/stdc++.h>

using namespace std;

int subseq(int arr[], int n){
	sort(arr, arr+n);
	int count= 0, ans= 0;
	vector<int> v;
	v.push_back(arr[0]);
	
	for(int i= 1; i<n; i++){
		if(arr[i]!= arr[i-1]){
			v.push_back(arr[i]);
		}
	}
	for(int i= 0; i< v.size(); i++){
		if(i> 0 && v[i]== v[i-1] + 1){
			count++;
		}
		else{
			count= 1;
		}
		ans= max(ans, count);
	}
	return ans;
	
}

int main(){
	int arr[]= {1, 9, 3, 10, 4, 20, 2};
	int n= sizeof(arr)/ sizeof(arr[0]);
	
	
	
	cout<< "Longest consecutive sequence is: "<< subseq(arr, n);
}
