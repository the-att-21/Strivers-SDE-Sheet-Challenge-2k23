* Problem : https://leetcode.com/problems/sort-colors/

* Solution : 

class Solution {
public:
    void sortColors(vector<int>& n) {
        int hi = n.size() - 1;
        int lo = 0;
        int mid = 0;
        
        while(mid<=hi){
            if(n[mid] == 1) mid++;
            
            else if(n[mid] == 0){
                swap(n[mid++] , n[lo++]);
                
            }else{
                swap(n[mid] , n[hi--]);
            }
        }
    }
};