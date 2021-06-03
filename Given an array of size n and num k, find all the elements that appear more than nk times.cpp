#include<bits/stdc++.h>    //Hashing : O(n)

using namespace std;
void find(int arr[], int n, int k){
	int x= n/k;
	
	unordered_map<int , int> freq;
	for(int i= 0; i< n; i++){
		freq[arr[i]]++;
	}
	
	for(auto i: freq){
		if(i.second > x){
			cout<< i.first<< endl;
		}
	}
}

int main(){
	int arr[]= {3, 1, 2, 2, 1, 2, 3, 3};
	int n= sizeof(arr)/ sizeof(arr[0]);
	int k= 4;
	
	cout<< "Elements are: "<< find(arr, n, k);
}
