* Problem : https://leetcode.com/problems/rotate-image/

* Solution : 

class Solution {
public:
    void rotate(vector<vector<int>>& M) {
        int n = size(M);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                swap(M[i][j], M[j][i]);
            }
        }

        for(int i = 0; i < n; i++){
            reverse(M[i].begin(), M[i].end());
        }
    }
};