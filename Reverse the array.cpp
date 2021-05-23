#include<bits/stdc++.h>      //Iterative Approach    //Time Complexity: O(n)

using namespace std;
void revArray(int arr[], int start, int end){
	while(start< end){
		int temp = arr[start];
		arr[start]= arr[end];
		arr[end]= temp;
		start++;
		end--;
	}
}
void printArray(int arr[], int size){
	for(int i= 0; i< size; i++){
		
		cout<< arr[i]<< endl;
	}
}

int main(){
	int arr[]= {1, 2, 3, 4, 5};
	int size= sizeof(arr)/sizeof(arr[0]);
	
	revArray(arr, 0, size-1);
	
	cout<<"Reversed array is"<< endl;
	printArray(arr, size);
}


