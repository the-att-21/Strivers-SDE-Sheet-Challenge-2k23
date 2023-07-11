* Problem : https://leetcode.com/problems/two-sum/description/

* Solution : 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = size(nums);
        map<int, int> mp;

        for(int i = 0; i < n; ++i){
            mp[nums[i]] = i;
        }

        for(int i = 0; i < n; ++i){
            auto it = mp.find(target - nums[i]);
            if(it != mp.end() and i != it->second) return {i, it -> second};
        }

        return {0, 0};
    }
};