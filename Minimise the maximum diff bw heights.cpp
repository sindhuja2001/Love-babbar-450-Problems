
#include <bits/stdc++.h>
using namespace std;


int getMinDiff(int arr[], int n, int k) {
        
        sort(arr, arr+n);
        
        
        int ans= arr[n-1] - arr[0];
        int min_value, max_value;
        
        for(int i= 0; i<n-1; i++){
            int min_value= min(arr[0]+ k, arr[i+1]-k);
            int max_value= max(arr[n-1]-k, arr[i]+ k);
            
            if(min_value< 0){
                continue;
            }
            ans= min(ans, max_value- min_value);
        }
        return ans;
}



int main() {
    int arr[]= {1, 15, 10};
    int n= sizeof(arr)/ sizeof(arr[0]);
    int k= 3;
    getMinDiff(arr, n, k);
    
    
} 
