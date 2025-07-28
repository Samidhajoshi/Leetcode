/*
This is Day 3 of solving Daily leetcode problems.
Problem 5: Check if the Array is sorted and rotated 
Problem link - https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
Time Complexity O(n)
*/
// In this approach we are checking how many time the array is breaking it's ascending order
class Solution {
public:
    bool check(vector<int>& nums) {
        int c=0; // Count variable Initialized by 0
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){ // if the previous element is greater then the current element c++ 
                c++;
            }
        }
        if(nums[nums.size()-1]>nums[0]){
            c++; // check the last and first element
        }
        if(c<=1){return true;}
    return false;
    }
};
