/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order. */




class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>indices;
        for (int i=0;i<n;i++) {
            int element=nums[i];
            for (int j=i+1;j<n;j++) {
                if(element+nums[j]==target) {
                    indices.push_back(i);
                    indices.push_back(j);
                }
            }
        }
        return indices;
        
        
    }
};


Time Complexity-O(n^2)
Space Complexity-O(1)
