#include<bits/stdc++.h>

using namespace std;

void printUnion(int arr1[], int arr2[], int m, int n){
	int i= 0, j=0;
	while(i< m && j < n){
		if(arr1[i]< arr2[j]){
			i++;
		}
		else if(arr1[j]< arr2[i]){
			j++;
		}
		else{
			cout<< arr2[j]<< " ";
			i++;
			j++;
		}
	}
}

int main(){
	int arr1[]= {1, 2, 3, 4};
	int arr2[]= {1, 2, 5, 6};
	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);
	
	printUnion(arr1, arr2, m, n);
}
