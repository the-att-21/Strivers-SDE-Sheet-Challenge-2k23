* Problem : https://leetcode.com/problems/merge-intervals/

* Solution : 

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& I) {
        int n = I.size();
        vector<vector<int>> ans;

        sort(I.begin(), I.end());

        for(auto &i : I){
            if(ans.empty() or ans.back()[1] < i[0])
                ans.push_back(i);
            else
                ans.back()[1] = max(ans.back()[1], i[1]);
        }

        return ans;
    }
};