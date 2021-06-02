#include<bits/stdc++.h>

using namespace std;
int subArray(int arr[], int n){
   int max_value= 1, min_value= 1;
   int maximum= 0;
   int flag= 0;
   
   for(int i= 0; i<n; i++){
   	    if(arr[i]> 0){
   	    	max_value= max_value* arr[i];
			min_value= min(min_value* arr[i], 1);
			flag= 1; 
		}
		else if(arr[i]== 0){
			max_value= 1;
			min_value= 1;
		}
		else{
			int temp = max_value;
			max_value= max(min_value* arr[i], 1);
			min_value= temp* arr[i];
		}
		
		if(maximum< max_value){
			maximum= max_value;
		}
   }
   if(flag== 0 && maximum== 0){
   	  return 0;
   }
   cout<< maximum;
}


int main(){
	int arr[]= {1, -2, -3, 0, 7, -8, -2};
	int n= sizeof(arr)/sizeof(arr[0]);
	subArray(arr, n);
	cout<< "Maximum product subarray is: ";
}
