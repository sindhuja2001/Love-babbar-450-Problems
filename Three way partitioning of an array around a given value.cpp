//Simple Approach: O(n)
#include<bits/stdc++.h>

using namespace std;

void threeWayPartitioning(int arr[], int n, int left, int right){
	int start= 0, end= n-1;
	
	for(int i= start; i<= end;){
		if(arr[i]< left){
			swap(arr[i++], arr[start++]);
			
		}
		else if(arr[i] > right){
			swap(arr[i], arr[end--]);
		}
		else{
			i++;
		}
	}
}

int main(){
	int arr[]= {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
	int n= sizeof(arr)/ sizeof(arr[0]);
	
	threeWayPartitioning(arr, n, 10, 20);
	
	for(int i= 0; i< n; i++){
		cout<< arr[i]<< " ";
	}
}
