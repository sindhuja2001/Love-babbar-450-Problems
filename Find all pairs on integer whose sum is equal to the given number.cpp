#include<bits/stdc++.h>             //Time Complexity: O(n^2)

using namespace std;

int allPairs(int arr[], int sum, int n){
	int i= 0;
	for(int i= 0; i<n; i++){
		for(int j= i+1; j<n; j++){
			if(arr[i] + arr[j]== sum){
				cout<< "(" << arr[i]<< ","<< arr[j]<< ")";
			}
		}
	}
}

int main(){
	int arr[]= {2, 3, 4, -2, 6, 8, 9, 11};
	int n= sizeof(arr)/ sizeof(arr[0]);
	int sum= 6; 
	
	allPairs(arr, sum, n);
}
