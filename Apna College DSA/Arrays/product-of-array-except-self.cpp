class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
        int size = nums.size();
        vector<int> pr(size,1);
        int * prA = pr.data();
        int* num = nums.data();
        int lp = 1;
        for(int i=1;i<size;i++){
            lp *= num[i-1];
            prA[i] = lp;
        }
        int rp = 1;
        for(int i = size-2;i>=0;i--){
            rp = rp*num[i+1];
            prA[i] *= rp;
        }
        
    return pr;

    }

};