* Problem : https://leetcode.com/problems/maximum-subarray/

* Solution : 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, currSum = 0;

        for(int i = 0; i < size(nums); i++){
            currSum += nums[i];
            maxSum = max(currSum, maxSum);
            if(currSum < 0) { currSum = 0; }
        }

        return maxSum;
    }
};