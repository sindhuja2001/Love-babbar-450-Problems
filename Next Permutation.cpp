#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>

using namespace std;
void nextPermutation(int arr[], int n){
	if(arr== NULL || n<= 1) return;
	int i= n-2;
	while(i>= 0 && arr[i]>= arr[i+1]) i--;
	if(i>=0){
		int j= n-1;
		while(arr[j] <= arr[i]) j--;
		swap(arr, i, j);
	}
	reverse(arr, i+1, n-1);
}
void swap(int arr[], int i, int j){
	int temp= arr[i];
	arr[i]= arr[j]; 
	arr[j]= temp;
}
void reverse(int arr[], int i, int j){
	while(i< j){
		swap(arr, i++, j--);
	}
}

int main(){
	int arr[]= {1, 3, 2};
	int n= sizeof(arr)/ sizeof(arr[0]);
	nextPermutation(arr, n);
}
