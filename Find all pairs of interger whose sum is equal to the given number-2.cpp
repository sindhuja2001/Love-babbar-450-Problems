#include<bits/stdc++.h>

using namespace std;

void allPairs(int arr[], int sum, int n){
	int low= 0;
	int high= n-1;
	
	while(low<= high){
		if(arr[low]+arr[high] == sum){
			cout<< "("<< arr[low]<< ","<< arr[high]<< ")";
		}
		if(arr[low]+arr[high]< sum){
			low++;
		}
		else{
			high--;
		}
	}
}

int main(){
	int arr[]= {1, 5, 7, -1, 5};
	int n= sizeof(arr)/ sizeof(arr[0]);
	sort(arr, arr+n);
	
	int sum= 6;
	allPairs(arr, sum, n);
}
