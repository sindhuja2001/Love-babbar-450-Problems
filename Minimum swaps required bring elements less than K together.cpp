#include<bits/stdc++.h>

using namespace std;

int minSwap(int arr[], int n, int k){
	int good= 0;
	for(int i= 0; i<n; i++){
		if(arr[i]<= k){
			good++;
		}
		
	}
	
	int bad= 0;
	for(int i= 0; i< good; i++){
		if(arr[i]> k){
			bad++;
		}
	}
	int minimum= bad;

	for(int i= 0, j= good; j< n; ++i, ++j){
	
		if(arr[j]> k){
			bad++;
		} 
		if(arr[i]> k){
			bad--;
		}
		i++;
		minimum= min(minimum, bad);
	}
	return minimum;
	
}
int main(){
	int arr[]= {2, 1, 5, 6, 3};
	int n= sizeof(arr)/ sizeof(arr[0]);
	int k= 3;
	cout<< minSwap(arr, n, k);
	
}
