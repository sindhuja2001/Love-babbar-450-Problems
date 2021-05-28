#include<bits/stdc++.h>

using namespace std;

void merge(int a1[], int a2[], int m, int n){
	for(int i= n-1; i>= 0; i--){
		int j;
	    int last= a1[m-1];
	
	    for(j= m-2; j>= 0 && a1[j]> a2[i]; j--){
		    a1[j+1]=a1[j];
	    }
		
		if(j != m-2 || last > a2[i]){
			a1[j+1]= a2[i];
			a2[i]= last;
		}
	    
	}
}

int main(){
	int a1[]= {1, 5, 9, 10, 15, 20};
	int a2[]= {2, 3, 8, 13};
	
	
	int m= sizeof(a1)/ sizeof(a1[0]);
	int n= sizeof(a2)/ sizeof(a2[0]);
	
	merge(a1, a2, m, n);
	
	for(int i= 0; i< m; i++){
		
		cout<<a1[i]<< " ";
	} 
	for(int i= 0; i<n; i++){
		cout<<a2[i]<< " "; 
	}
}
