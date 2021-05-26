//Method 1: Kadane's Algorithm

#include<bits/stdc++.h>

using namespace std;
void largestSum(int arr[], int n){
	int A= arr[0];
	int sum= 0;
	int start= 0, end= 0, s= 0;
	for(int i= 0; i<n; i++){
		sum+= arr[i];
		
		if(A< sum){
			A= sum;
			start= s;
			end= i;
		}
		if(sum<0){
			sum= 0;
			s= i+1;
		}
	}
	cout<< A << endl;
	cout<<start<<endl;
	cout<<end<<endl;
}


int main(){
	int arr[]= {4, -3, -2, 2, 2, 3, 1, -2, -3, 4, 2, -6, -3, -1, 3, 1, 2};
	int n= sizeof(arr)/ sizeof(arr[0]);
	
	largestSum(arr, n);
	
}
