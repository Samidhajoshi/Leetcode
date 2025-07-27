/*
Day 2 of solving daily leetcode problems
Problem 4: Best Time to Buy and SeLl Stocks
Problem link:- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
I approached this problem Using two ways first was a brute force in which the time limit exceeded due to time complexity of O(n)
Second approach was using kadane's algo which made the problem a maximum sub array problem.
I am posting here the second way
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int current_profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            int diff = prices[i] - prices[i - 1];
            current_profit = max(0, current_profit + diff); 
            max_profit = max(max_profit, current_profit);
        }

        return max_profit;
    }
};
