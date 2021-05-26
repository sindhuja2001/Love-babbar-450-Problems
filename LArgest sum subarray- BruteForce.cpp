#include<bits/stdc++.h>


using namespace std;
int largestSum(int arr[], int n, int k){
	int maxSum= 0;
	for(int i= 0; i< n-k+1; i++){               //to avoid extending the size
		int windowSum= 0;
		for(int j= i; j< i+k; j++)  {                 //to calculate that window 
			windowSum= arr[j];
		}       
		if(windowSum> maxSum){
			maxSum= windowSum;
		}
	}
	cout<< "Maximum sum is: "<< maxSum<< endl;
}

int main(){
	int arr[]= {1, 9, -1, -2, 7, 3, -1, 2};
	int n= sizeof(arr)/ sizeof(arr[0]);
	int k=4;
	
	largestSum(arr, n, k);
	
}
