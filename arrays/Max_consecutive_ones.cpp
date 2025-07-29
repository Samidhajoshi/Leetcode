/*
This is Day 4 of solving daily leetcode problems.
Problem 10:Maximum number of consecutive ones
Problem Link : https://leetcode.com/problems/max-consecutive-ones/
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount=0,currentCount=0;
        for (int num : nums) {
            if (num == 1) {
                currentCount++;
                if (currentCount > maxCount) {
                    maxCount = currentCount;
                }
            } else {
                currentCount = 0;
            }
        }

        return maxCount;
    }
};
