//Efficient Approach: O(n)

#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int subseq(int arr[], int n){
	unordered_set<int> s;
	int ans= 0;
	
	for(int i= 0; i< n; i++){
		s.insert(arr[i]);
		
	}
	for(int i= 0; i< n; i++){
		if(s.find(arr[i]- 1)== s.end()){    //If the current element is the starting elem
			int j= arr[i];
			while(s.find(j)!= s.end()){        //If the curr elem != previous elem
				j++;
			}
			ans= max(ans, j- arr[i]);
		}
		
	}
	return ans;
}

int main(){
	int arr[]= {1, 9, 3, 10, 4, 20, 2};
	int n= sizeof(arr)/ sizeof(arr[0]);
	cout<< "Longest Common Subsequence is: "<< subseq(arr, n);
}
