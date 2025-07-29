/*
  This is day of solving daily leetcode question 
  Problem 8: Rotate array to the right k times
  Problem Link :https://leetcode.com/problems/rotate-array/
  This is a question for Clock wise rotation .
  Here, I have posted 2 solutions one for clockwise other for anti clockwise(Commented Solution).
  */
//Clockwise
class Solution {
public:
    void rotate(vector<int>& nums, int k) {   // example = {1,2,3,4} , k=2  output should be ={ 3,4,1,2}
        int n=nums.size();
        k=k%n; //k=2%4 = 2;
        std::reverse(nums.begin(),nums.end()); // {4,3,2,1}
        std::reverse(nums.begin(),nums.begin()+k); // {3,4,2,1}
        std::reverse(nums.begin()+k,nums.end()); // {3,4,1,2}
    }
};
// Anti clockwise 
/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {   // example = {1,2,3,4,5} , k=2  output should be ={3,4,5,1,2}
        int n=nums.size();
        k=k%n; //k=2%4 = 2;
        std::reverse(nums.begin(),nums.begin()+k); // {2,1,3,4,5}
        std::reverse(nums.begin()+k,nums.end()); // {2,1,5,4,3}
        std::reverse(nums.begin(),nums.end()); // {3,4,5,1,2}
    }
};
*/
