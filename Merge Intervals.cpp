#include<bits/stdc++.h>

using namespace std;
struct Interval{
	int start, end;
};

bool compareElem(Interval I1, Interval I2){
	return(I1.start < I2.start);
}

void mergeInterval(Interval arr[], int n){
	if(n<= 0){
		return;
	}
	
	stack<Interval> s;
	sort(arr, arr+n, compareElem);
	
	s.push(arr[0]);
	
	for(int i= 1; i<n; i++){
		Interval top= s.top();
		
		if(top.end < arr[i].start){
			s.push(arr[i]);
		}
		else if(top.end < arr[i].end){
			top.end= arr[i].end;
			s.top();
			s.push(arr[i]);
		}
	
	}
	cout<< "Merged Intervals are: ";
	while(!s.empty()){
			Interval t= s.top();
			cout<< "["<< t.start<< ","<< t.end<< "]";
			s.pop();
	}
}

int main(){
	Interval arr[]= {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
	int n= sizeof(arr)/ sizeof(arr[0]);
	
	mergeInterval(arr, n);
}
