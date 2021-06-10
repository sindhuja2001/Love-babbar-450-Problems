#include<bits/stdc++.h>

using namespace std;

void nonRepeating(int arr[], int n, int *x, int *y){
	*x= 0;
	*y= 0;
	int  Xor= arr[0];
	int set_bit;
	for(int i= 1; i< n; i++){
		Xor ^= arr[i];
	}
	set_bit= Xor & ~(Xor-1);
	
	for(int i= 0; i< n; i++){
		if(arr[i] & set_bit){
			*x= *x ^ arr[i];
		}
		else{
			*y= *y ^ arr[i];
		}
	}
	
}

int main(){
	int arr[]= {3, 4, 8, 2, 1, 2, 8, 3};
	int n= sizeof(arr)/ sizeof(arr[0]);
	
	int *x= new int[(sizeof(int))];
	int *y= new int[(sizeof(int))];
     nonRepeating(arr, n, x, y);
     	cout<< "Non Repeating elements are: "<< *x<<" "<<  *y;
}
