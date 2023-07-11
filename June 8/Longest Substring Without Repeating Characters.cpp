* Problem : https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

* Solution : 

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> f;
        int left = 0;
        int right = 0;
        int ans = 0;
        
        while(right < s.size()){
            f[s[right]]++;
            
            if(f[s[right]] > 1){
                while(f[s[right]] > 1){
                    f[s[left]]--;
                    left++;
                }
            }
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};