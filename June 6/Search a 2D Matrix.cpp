* Problem : https://leetcode.com/problems/search-a-2d-matrix/description/

* Solution : 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& M, int T) {
        int i = 0, j = M[0].size() - 1;
        int n = M.size(), m = M[0].size();

        while(i < n and j > -1){
            if(M[i][j] == T) return 1;
            if(M[i][j] > T) j--;
            else i++;
        }

        return 0;
    }
};