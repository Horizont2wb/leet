#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

 

*/

class Solution {
    public:
    std::vector <int> twoSum(std::vector<int>& nums, int target){

        std::unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement)) {

                return {numMap[complement], i};

            }
            numMap[nums[i]] = i;
        }

        return {}; // No solution found

    }


};

int main(){

    std::vector <int> nums = {3,2,4};
    int target = 6;
    Solution sol;

    sol.twoSum(nums, target);


    return 0;
}