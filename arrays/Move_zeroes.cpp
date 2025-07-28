/*
Day 3 of solving daily leetcode problems
Problem 7: Move Zeroes to the end
Problem link : https://leetcode.com/problems/move-zeroes/
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[k++]=nums[i];
            }
        }
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
