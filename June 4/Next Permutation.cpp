* Problem : https://leetcode.com/problems/next-permutation/

* Solution : 

class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int i, j, n = size(a);

        for(i = n - 1; i > 0; i--){
            if(a[i] > a[i - 1]) break;
        }
        
        i--;
        if(i < 0){
            reverse(a.begin(), a.end());
            return;
        }

        for(j = n - 1; j >= 0; j--){
            if(a[j] > a[i]){
                swap(a[i], a[j]);
                break;
            }
        }

        reverse(a.begin() + i + 1, a.end());
        return;
    }
};