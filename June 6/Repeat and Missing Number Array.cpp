* Problem : https://www.interviewbit.com/problems/repeat-and-missing-number-array/

* Solution : 

#include<bits/stdc++.h>

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    vector<int> ans(2);
    vector<int> f(n + 1);
    
    for(auto &i : A){
        f[i]++;
    }
    
    for(int j = 0; j < n + 1; j++){
        if(f[j] == 2) ans[0] = j;
        if(f[j] == 0) ans[1] = j;
    }
    
    return ans;
}
