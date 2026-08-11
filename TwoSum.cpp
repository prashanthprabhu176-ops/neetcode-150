/*
1. Two Sum
You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
***** Only one valid answer exists.*******
map has element and index
see if two elements sum up to give a target, then there must be a element2  = element1- target
we just need that element if that is in the map then return the indices
if not add the element in the map.
mp[arr[i]] gives the index of that element stored in the map

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        
        for(int i = 0; i < arr.size(); i++) {
            int need = target - arr[i];  
            if(mp.count(need))
                return {mp[need], i};
            mp[arr[i]] = i;
        }
        return {-1,-1};
    }
};