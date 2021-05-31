#include<bits/stdc++.h>    //Simple solution won't work if the duplicate elements are present in the same array

using namespace std;

void commonElem(int a1[], int a2[], int a3[], int n1, int n2, int n3){
	int i, j, k= 0;
	int prev1, prev2, prev3;
	
	prev1= prev2= prev3= INT_MIN;
	
	while(i< n1 && j<n2 && k< n3){
		while(a1[i]== prev1 && i<n1){
			i++;
		}
		while(a2[j]== prev2 && j<n2){
			j++;
		}
		while(a3[k]== prev3 && k<n3){
			k++;
		}
		if(a1[i]== a2[j] && a2[j]== a3[k]){
			cout<< a1[i]<< " ";
			prev1= a1[i];
			prev2= a2[j];
			prev3= a3[k];
			i++;
			j++;
			k++;
		}
		else if(a1[i]< a2[j]){
			prev1= a1[i];
			i++;
		}
		
		else if(a2[j]< a3[k]){
			prev2= a2[j];
			j++;
		}
		
		else{
			prev3= a3[k];
			k++;
		}
		
		
	}
}

int main(){
	int a1[]= {1, 5, 10, 20, 40, 80};
	int a2[]= {6, 7, 20, 80, 100};
	int a3[]= {3, 4, 15, 20, 30, 70, 80, 120};
	
	int n1= sizeof(a1)/ sizeof(a1[0]);
	int n2= sizeof(a2)/ sizeof(a2[0]);
	int n3= sizeof(a3)/ sizeof(a3[0]);
	cout<< "Most common elements are: ";
	commonElem(a1, a2, a3, n1, n2, n3);
}
