//https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n = nums.size();
    int * num = nums.data();
   switch (n) {
        case 0:
            return false;
        case 1:
            return false;
        case 2:
            return num[0] == num[1];
        }
        if(num[0] == num[n-1]){
            return true;
        }
    
    sort(num, num+n);
    for(int i =0;i<n-1;i++){
        if(num[i] == num[i+1]){
            return true;
        }
        
    }    

    // or

     return false;
    }
};