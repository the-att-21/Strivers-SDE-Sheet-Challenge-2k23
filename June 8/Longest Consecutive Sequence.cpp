* Problem : https://leetcode.com/problems/longest-consecutive-sequence/description/

* Solution : 

class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        ios::sync_with_stdio(0);cin.tie(0);
        int l = n.size(),count=1,ans=1;
        if(l==1) return 1;
        if(l==0) return 0;
        sort(n.begin(),n.end());
        for(int i=0;i<l-1;i++){
            if(n[i+1]-n[i]==1)
                count++;
            else if(n[i+1]-n[i]>1)
                count=1;
            ans=max(ans,count);
        }
        return ans;
    }
};