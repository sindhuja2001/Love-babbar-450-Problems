#include<bits/stdc++.h>

using namespace std;


void printUnion(int arr1[], int arr2[], int m, int n){
	int i= 0, j= 0;
	while(i< m && j<n){
	
		if(arr1[i]< arr2[j]){
			cout<< arr1[i++];
		}
		else if(arr2[j]< arr1[i]){
			cout<< arr2[j++];
		}
		else{              //If both the elem in an array are equal
			cout<< arr2[j];
			i++;
		}
	}
	while(i< m){
		cout<< arr1[i++]<< " ";
	}
	while(j< n){
		cout<< arr2[j++]<< " ";
		i++;
	}
}

int main(){
	int arr1[]= {1, 2, 3, 4};
	int arr2[]= {1, 2, 5, 6};
	
	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);
	
	
	printUnion(arr1, arr2, m, n);
	
}
