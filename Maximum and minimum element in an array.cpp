//Method 1: Simple Linear Approach     //Time Complexity: O(n)

#include<iostream>

using namespace std;


struct Pair{
	int max;
	int min;
};
struct Pair Find(int arr[], int n){
	
	struct Pair minmax;
	
	if(n== 1){
		minmax.max= arr[0];
		minmax.min= arr[0];
		
		return minmax;
	}
	if(arr[0]> arr[1]){
		minmax.max= arr[0];
		minmax.min= arr[1];
	}
	else{
		minmax.max= arr[1];
		minmax.min= arr[0];
	}
	for(int i= 2; i< n; i++){
		if(arr[i]> minmax.max)
			minmax.max= arr[i];
	
		else(arr[i]< minmax.min)
			minmax.min= arr[i];
		
		
	}
	return minmax;
	
}

int main(){
	int arr[]= {1, 3, 5, 7, 9};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	struct Pair minmax= Find(arr, n);
	
	cout<<"Maximum Element is: "<< minmax.max<< endl;
	cout<<"Minimum Element is: "<< minmax.min<< endl;
	
	return 0;
} 
