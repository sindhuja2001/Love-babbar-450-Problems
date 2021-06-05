#include<bits/stdc++.h>   //Simple approach: O(n^3)

using namespace std;

int triplet(int arr[], int n, int sum){
	for(int i= 0; i< n; i++){
		for(int j= i+1; j< n; j++){
			for(int k= j+1; k< n; k++){
				if(arr[i]+ arr[j] + arr[k]== sum){
					cout<<arr[i]<<" "<< arr[j]<< " "<< arr[k];
					
					return true;
				}
			}
		}
	}
	return false;
}

int main(){
	int arr[]= {12, 3, 4, 1, 6, 9};
	int n= sizeof(arr)/ sizeof(arr[0]);
	int sum= 24;
	triplet(arr, n, sum);
}
