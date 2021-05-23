//Method 2- Divide and Conquer Approach

#include<iostream>

using namespace std;
struct Pair{
	int max;
	int min;
};
struct Pair Find(int arr[], int low, int high){
	struct Pair minmax, minmax_left, minmax_right;
	int mid;
	if(high== low){
		minmax.max= arr[low];
		minmax.min= arr[low];
		
		return minmax;
	}
	if(high== low+1){
		if(arr[low]> arr[high]){
		     minmax.max= arr[low];
		     minmax.min= arr[high];
	    }
	    else{
	       	minmax.max= arr[high];
		    minmax.min= arr[low];
	    }
	    return minmax;
    }
    mid= (low+high)/2;
    minmax_left= Find(arr, low, mid);
    minmax_right= Find(arr, mid+1, high);
    
    if(minmax_left.max > minmax_right.max){
    	minmax.max= minmax_left.max;
	}
	else{
		minmax.max= minmax_right.max;
	}
	
	if(minmax_left.min < minmax_right.min){
    	minmax.min= minmax_left.min;
	}
	else{
		minmax.min= minmax_right.min;
	}
	
	return minmax;
}


int main(){
	int arr[]= {1, 2, 3, 4, 5};
	int n= sizeof(arr)/sizeof(arr[0]);
	struct Pair minmax= Find(arr, 0, n-1);


   cout<<"Maximum element is: "<< minmax.max<< endl;
   cout<<"Minimum element is: "<< minmax.min<< endl;
	

	
}
