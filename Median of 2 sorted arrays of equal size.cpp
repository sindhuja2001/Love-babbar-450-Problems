#include<bits/stdc++.h>

using namespace std;

int median(int a1[], int a2[], int n){
	int i= 0, j= 0;
	int count;
	int m1= -1, m2= -1;
	
	for(count= 0; count <= n; count++){
		if(i== n){
			m1= m2;
			m2= a2[0];
			break;
		}
		else if(j== n){
			m1= m2;
			m2= a1[0];
			break;
		}
		if(a1[i]<= a2[j]){
			m1= m2;
			m2= a1[i];
			i++;
		}
		else{
			m1= m2;
			m2= a2[j];
			j++;
		}
	}
	return (m1+m2)/2;
}

int main(){
	int a1[]= {1, 12, 15, 26, 38};
	int a2[]= {2, 13, 17, 30, 45};
	
	int n1= sizeof(a1)/ sizeof(a1[0]);
	int n2= sizeof(a2)/ sizeof(a2[0]);
	
	if(n1== n2){
		cout<< "Median of 2 arrays are: "<< median(a1, a2, n1);
	}
	else{
		cout<< "We can't find Median";
	}
}
