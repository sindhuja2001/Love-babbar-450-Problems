#include<bits/stdc++.h> //Efficient Approach: O(n^2)

using namespace std;

int triplet(int arr[], int n, int sum){
	sort(arr, arr+n);
	for(int  i= 0; i< n-2; i++){
		int left= i+1;
		int right= n-1;
		
		while(left< right){
			if(arr[i]+ arr[left]+ arr[right]== sum){
			      cout<< "Triplet is: "<< arr[i]<< " "<< arr[left]<< " "<< arr[right];
			
			       return true;
		    }
		    else if(arr[i]+ arr[left]+ arr[right]< sum){
		    	left++;
			}
			else{
				right--;
			}
		}
		
    }
	return false;
}

int main(){
	int arr[]= {12, 3, 4, 1, 6, 9};
	int n= sizeof(arr)/ sizeof(arr[0]);
	int sum= 24;
	
	triplet(arr, n, sum);
}
