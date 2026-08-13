/*
347.Top K Frequent Elements
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

First we take hash map to store the frequency of each digit in the vector input
then take pair of vectors and reverse the value pair 
and sort it to decresing order and take ans vector to push_back k elements using for loop till k.
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int num:nums){
            mp[num]++; 
        }
        vector<pair<int,int>>freq;
        for(auto it:mp){
            freq.push_back({it.second,it.first});
        }
        sort(freq.rbegin(),freq.rend());
        vector<int>ans;
        for(int i = 0; i<k;i++){
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};