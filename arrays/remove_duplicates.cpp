/*
Day 3 of solving Daily leetcode problems.
Problem 6: Remove duplicates from a sorted array 
Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int k = 1;  // first element is always unique
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) { // if the adjacent elemsts are not equal
                nums[k] = nums[i]; // put the ith elemnt on the kth index
                k++;
            }
        }
        return k;
    }
};
