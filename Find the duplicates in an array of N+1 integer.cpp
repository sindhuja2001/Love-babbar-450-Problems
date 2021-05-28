#include<bits/stdc++.h>

using namespace std;
void findDuplicate(int arr[], int n){
	for(int i= 0; i<n; i++){
		arr[arr[i]% n]= arr[arr[i]% n] + n;
	}
	
	for(int i= 0; i<n; i++){
		if(arr[i]/n > 1){
			cout<< i<< endl;
		}
	}
}

int main(){
	int arr[]= {1, 2, 3, 3, 2, 3};
	int n= sizeof(arr)/ sizeof(arr[0]);
	
	findDuplicate(arr, n);
}
