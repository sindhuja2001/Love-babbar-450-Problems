#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>

using namespace std;

void kthSmallest(int arr[], int n, int k){
	priority_queue<int> p;
	for(int i= 0; i<n; i++){
		p.push(arr[i]);
	}
	for(int i= k; i< n; i++){
		if(p.top()> arr[i]){
			continue;
		}
		else{
			p.pop();
			p.push(arr[i]);
		}
	}
	cout<< p.top();
}

int main(){
    int arr[]= {11, 2, 2, 1, 15, 5, 4};
	int n= sizeof(arr)/ sizeof(arr[0]);
	int k= 3;
	
	kthSmallest(arr, n, k);
	
	


}
