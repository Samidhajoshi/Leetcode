/*
Day 2 of Solving Daily leetcode problems
Problem 3:- Container with most water 

Today I am sharing two approaches to the problem.
First is a brute force approach which exceeded the time limit . Time complexity O(n^2) due to nested loop 
And second is the optimised two pointer approach with time complexity O(n).

*/
// Approach 1 : brute Force approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int marea=0;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
              int  ar=min(height[i],height[j])*(j-i);
                marea=max(marea,ar);

            }
        }
        return(marea);
    }
};

// Approach 2: Time complexity O(n) using two pointer approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;  // positioning to start
        int right = height.size() - 1;  // positioning to end
        int marea = 0;

        while (left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;
            int area = h * w;
            marea=max(marea,area);

            
            if (height[left] < height[right]) {  // moving smaller one inward 
                left++;
            } else {
                right--;
            }
        }
        return marea;
    }
};
