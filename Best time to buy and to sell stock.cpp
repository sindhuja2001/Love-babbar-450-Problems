#include<bits/stdc++.h>

using namespace std;
int maxProfit(int prices[], int start, int end){
	if(end<= start){
		return 0;
	}
	int profit= 0;
	
	for(int i= start; i< end; i++){
		for(int j= i+1; j<= end; j++){
			if(prices[j] > prices[i]){
				int curr_profit= prices[j]- prices[i]+ maxProfit(prices, start, i-1)+
				                  maxProfit(prices, j+1, end);
				profit= max(profit, curr_profit);
			}
		}
	}
	
	return profit;
}

int main(){
	int prices[]= {100, 180, 260, 310, 40, 535, 695};
	int n= sizeof(prices)/sizeof(prices[0]);
	
	maxProfit(prices, 0, n-1);
}
