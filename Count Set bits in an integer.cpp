#include<bits/stdc++.h>

using namespace std;

unsigned int countSetBit(unsigned int n){
	if(n== 0){
		return 0;
		
	}
	else{
		return (n & 1) + countSetBit(n>> 1);
	}
}

int  main(){
	int i= 10;
	cout<< countSetBit(i);
}
