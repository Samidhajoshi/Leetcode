/* This is Day 1 of Solving Daily leetcode problems. This is a beginner level solution and I am open to feedbacks
Problem 1: Two Sum
Problem Link: https://leetcode.com/problems/two-sum/
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
  
        int n = nums.size();   // size of the array
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {         // checks from i+1 to n to find the target sum
                if (nums[i] + nums[j] == target) { 
                    return {i, j}; 
                }
            }
        }
        return {};
    }
};
