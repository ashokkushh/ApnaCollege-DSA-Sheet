class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base :: sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int* num = nums.data();
        int lar = num[0];
        int n = nums.size();
        for(int i =1;i<n;i++){
              lar = (num[i] > lar) ? num[i] : lar;
        }
        if(lar <= 0){
            return lar;
        }
        int maxsum =INT_MIN;
        int sum =0;
        for(int i =0;i<n;i++){
             sum += num[i];
             maxsum = max(sum,maxsum);
             if(sum < 0){sum = 0;}
           
        }
        return maxsum;
        
    }
};