#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1;
        int profit = 0;
        int max_pro = 0;
        
        while(right < prices.size()){
            
            if (prices[right] > prices[left]){
                profit = prices[right] - prices[left];
                max_pro = max(max_pro, profit);
            }else{
                left = right;
            }
            right++;
        }

        return max_pro;
    }
};


int main() {
    
    Solution sol;

    int n;
    cout<<"enter the number of days";
    cin>>n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++){
        cin>>prices[i];
    }
    int result = sol.maxProfit(prices);

    cout<<"max profit:"<<result<<endl;;

    
    return 0;
}
