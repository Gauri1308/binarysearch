#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProfit(vector<int>& prices){
     if (prices.empty() || prices.size() == 1) {
        return 0;
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int price : prices) {
        // Update the minimum price if the current price is lower
        minPrice = min(minPrice, price);

        // Update the maximum profit if selling at the current price yields a higher profit
        maxProfit = max(maxProfit, price - minPrice);
    }

    return maxProfit;
}
int main(){
 vector <int> price={1,4,6,2,8};
 int result= maxProfit(price);

  cout<<price<<endl;
  return 0;
}