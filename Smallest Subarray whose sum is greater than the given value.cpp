#include<bits/stdc++.h>

using namespace std;
int smallestSubarray(int arr[], int n, int x){
	int sum= 0, len= n, start= 0;
	for(int i= 0; i< n; i++){
		sum+= arr[i];
		
		while(sum> x){
			len= min(len, i-start+1);
			sum= sum- arr[start];
			start++;
		}
	}
}

int main(){
	int arr[]= {6, 3, 4, 10, 4, 3, 7, 9};
	int n= sizeof(arr)/ sizeof(arr[0]);
	int x= 51;
	smallestSubarray(arr, n, x);
}
