* Problem : https://leetcode.com/problems/majority-element-ii/description/

* Solution : 

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> ans;
        int n = size(nums);

        for(auto &i : nums) m[i]++;
        for(auto &i : m) if(i.second > floor(n / 3)) ans.push_back(i.first);

        return ans;
    }
};