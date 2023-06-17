* Problem : https://leetcode.com/problems/majority-element/description/

* Solution : 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = size(nums);

        for(auto &i : nums) m[i]++;
        for(auto &i : m) if(i.second > n / 2) return i.first;

        return 0;
    }
};