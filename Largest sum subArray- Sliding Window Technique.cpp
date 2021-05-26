#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;
int largestElem(int arr[], int n, int k){
	int windowSum= 0, maxSum= 0;
	for(int i= 0; i< k; i++){
		windowSum += arr[i];
	}
	for(int j= k; j< n; j++){
		windowSum+= arr[j]- arr[j-k];
		maxSum= max(windowSum, maxSum);
	}
	return maxSum;
}

int main(){
	int arr[]= {1, 9, -1, -2. 7, 3, -1, 2};
	int n= sizeof(arr)/ sizeof(arr[0]);
	int k= 4;
	
	largestElem(arr, n, k);
	
}
