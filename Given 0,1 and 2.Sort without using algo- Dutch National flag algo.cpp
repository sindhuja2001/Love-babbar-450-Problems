//Method 2: Dutch National Flag Algorithm

#include<bits/stdc++.h>
using namespace std;

void segregate(int arr[], int n){
	int low= 0;
	int mid= 0;
	int high= n-1;
	
	while(mid<= high){
		switch(arr[mid]){
			case 0: 
			   swap(arr[low++], arr[mid++]);
				
			case 1:
				mid++;
				break;
				
			case 2:
				swap(arr[mid], arr[high--]);
				break;
				
		}
				
	}
}
void printArray(int arr[], int n){
	for(int i= 0; i< n; i++){
		cout<< arr[i]<< " ";
	}
}


int main(){
	int arr[]= {0, 1, 1, 0, 1, 2, 1, 2, 0,0, 0, 1};
	int n= sizeof(arr)/ sizeof(arr[0]);
	
	segregate(arr, n);
	
	printArray(arr, n);
}
