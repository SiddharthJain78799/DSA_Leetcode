class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int bestBuy = prices[0];
        for(int i=1;i<prices.size();i++) {
            if(prices[i]>bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};
/*
class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int pd = 0;
        int mini = nums[0];
        int profit = 0;
        for(int i=1;i<nums.size();i++) {
            pd = nums[i] - mini;
            profit = max(profit , pd);
            mini = min(mini, nums[i]);
        }
        return profit;

    }
};
*/
