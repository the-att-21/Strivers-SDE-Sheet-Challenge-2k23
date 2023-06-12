* Problem : https://leetcode.com/problems/find-the-duplicate-number/

* Solution : 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < size(nums) - 1; i++){
            if(nums[i] == nums[i + 1]){
                ans = nums[i];
                break;
            }
        }

        return ans;
    }
};