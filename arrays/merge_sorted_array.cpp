/*
Day 1 of Solving Daily leetcode problems.
Problem 2: Merge two sorted arrays
Problem link: https://leetcode.com/problems/merge-sorted-array/
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;         // Last index of elements for nums1 
        int j = n - 1;        // Last index of elements for nums2
        int k = m + n - 1;    //Last index for nums1

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];       // we are assembling elemts from the end
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        while (j >= 0) {  // if elements of nums2 are left after above iteration
            nums1[k--] = nums2[j--];
        }
    }
};
// Final Time complexity O(m+n)
