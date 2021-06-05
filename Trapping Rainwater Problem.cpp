#include<bits/stdc++.h>

using namespace std;

int find_left_max(int arr[], int n, int i){
	int maximum= 0;
	for(int j= 0; j<= i; j++){
		maximum= max(maximum, arr[j]);
	}
	
	return maximum;
}

int find_right_max(int arr[], int n, int i){
	int maximum= 0;
	for(int j= n-1; j>= i; j--){
		maximum= max(maximum, arr[j]);
	}
	
	return maximum;
}

int findTotalWater(int arr[], int n){
	int totalwater= 0;
	for(int i= 1; i< n-1; i++){
		int left_max= find_left_max(arr, n, i);
		int right_max= find_right_max(arr, n, i);
		
		totalwater= totalwater+ min(left_max, right_max)- arr[i];
	}
	return totalwater;
}

int main(){
	int arr[]= {3, 0, 2, 0, 4};
	int n= sizeof(arr)/ sizeof(arr[0]);
	
	findTotalWater(arr, n);
}
