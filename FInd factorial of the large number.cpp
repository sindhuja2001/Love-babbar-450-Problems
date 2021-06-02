#include<bits/stdc++.h>
#define max 100;

using namespace std;

int factorial(int res[], int size, int n){
	int carry= 0;
	for(int x= 0; x< size; x++){
		int product= res[x]* n + carry;
		res[x]= product %10;
		carry= product/10;
	}
	
	while(carry){
		res[size]= carry % 10;
		carry/= 10;
		size++;
	}
}

int fact(n){
	int res[max];
	int res[0]= 1;
	int size= 1;
	
	for(int i= 2; i< n; i++){
		size= factorial(res, size, n);
	}
}

int main(){
	
	fact(n);
	for(int i= n-1; i>= 0; i--){
		cout<< arr[i];
	}
}
