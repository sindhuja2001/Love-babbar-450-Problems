#include<bits/stdc++.h>

using namespace std;

int zeroSum(int arr[], int n){

	int sum= 0;
	for(int i= 0; i< n; i++){
		sum+= arr[i];
		if(sum== 0){
            return true;			
		}
    }
    return false;
}

int main(){
	int arr[]= {4, 2, -3, 1 , 6};
	int n= sizeof(arr)/ sizeof(arr[0]);
	if(zeroSum(arr, n)){
		cout<<"Found the array";
	}
	else{
		cout<<"Not found";
	}
	
	
	
}
