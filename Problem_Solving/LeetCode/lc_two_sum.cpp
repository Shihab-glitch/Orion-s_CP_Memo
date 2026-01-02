/*
 * Problem: Two Sum
 * Link: https://leetcode.com/problems/two-sum/
 * Difficulty: Easy
 * Tags: Array, Hash Table
 * 
 * Description:
 * Given an array of integers nums and an integer target, return indices of 
 * the two numbers such that they add up to target.
 * 
 * Approach:
 * Use a hash map to store each number and its index as we iterate through the array.
 * For each number, check if (target - current number) exists in the hash map.
 * If found, return both indices.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if complement exists in map
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            
            // Add current number and its index to map
            numMap[nums[i]] = i;
        }
        
        return {};  // No solution found
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = sol.twoSum(nums, target);
    
    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    cout << "Values: [" << nums[result[0]] << ", " << nums[result[1]] << "]" << endl;
    
    return 0;
}
