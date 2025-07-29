/*
  This is Day 4 of solving daily leetecode problems.
  Problem 9: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one
  This question could be done with brute force checking frequency of all number.
  Second way is using XOR operator to complete the solution in linear time complexity.
  Logic : a^0= a; a^a =0;
  if a!b then a^b gives the Bit difference between a and b .
  so numbers appearing twice will cancel themselves and at the end our bit variable will hold the value of number appearing twice
  */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int bit=0;
       for(int i=0;i<nums.size();i++){
        bit=bit^nums[i];
       }
       return bit;
    }
};
