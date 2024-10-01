class Solution {
public:
    int trap(vector<int>& height) {
    ios_base ::sync_with_stdio(false), cin.tie(0), cout.tie(0);    
        int l = 0;
        int r = 0;
        int tw = 0;
        int n = height.size();
        vector<int> lm(n), rm(n);
        lm[0] = height[0];
        for(int i =1;i<n;i++){
            lm[i] = max(lm[i-1],height[i]);
        }
        rm[n-1] = height[n-1];
        for(int i = n-2;i>=0;i--){
           rm[i] = max(rm[i+1],height[i]);
        }
        for(int i=1;i<n-1;i++){
            int l = lm[i];
            int r = rm[i];
            if(min(l,r) - height[i] >0){
                tw +=  (min(l,r) - height[i]);
            }
         }
         return tw;
    }
};