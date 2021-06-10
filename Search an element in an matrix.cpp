#include<bits/stdc++.h>

using namespace std;

int search(int arr[4][4], int n,  int s){
	int i= 1, j= n-1;
	
	while(i< n && j>= 0){
		if(arr[i][j]== s){
			cout<< "Found"<< i<< j;
			return 1;
		}
		else{
			if(s< arr[i][j]){
				j--;
			}
			else{
				i++;
			}
		}
	}
	
	
}

int main(){
	int arr[4][4]= {{10, 20, 30, 40},
	             {12, 23, 32, 45},
				 {14, 28, 34, 47}, 
				 {16, 29, 36, 50}};
	
				 
	int s= 34;
				 
	search(arr,4, s);
}
