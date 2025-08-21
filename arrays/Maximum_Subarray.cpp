/*
Day 7 of solving daily leetcode questions
Problem 16:-Maximum Subarray sum 
Problem link-https://leetcode.com/problems/maximum-subarray/
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            if(currsum>maxsum){
                maxsum=currsum;
            }
            if(currsum<0){
                currsum=0;
            }
        }
        return maxsum;
    }
};
