/*
217 Contains Duplicate
Given an integer array, check whether any value appears at least twice. This solution uses an unordered map to track the elements already seen. If an element is found in the map, a duplicate exists and the function returns true; otherwise, it returns false.
take a map which contains value and frequncy.
if mp.find(target)!= mp.end() then it exist in the map that's why just increase
its count value.
if not exists then add it to the map.
*/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(mp.find(nums[i])!= mp.end()){
                return true;
                
            }
            mp[nums[i]]++;
        }
        return false;
    }
};