/*
This is Day 5 of solving daily leetcode questions.
Problem 12:Majority Element
Problem link: https://leetcode.com/problems/majority-element/description/

Approach: If we sort an array the majority element(element with frequency >n/2) will always be at n/2 position.
*/
class Solution {

public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
}

};
