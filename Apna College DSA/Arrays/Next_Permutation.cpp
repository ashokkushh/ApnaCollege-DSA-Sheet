class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        int n = size-1;
        while(n){
        if(nums[n-1] >= nums[n] ){
            n--;}else{break;}
        }
        if(n){
            for(int i = size-1;i>= n;i--){
                if(nums[i] > nums[n-1]){
                    int temp = nums[n-1];
                    nums[n-1] = nums[i];
                    nums[i] = temp;
                    break;
                }
            }
        
        sort(nums.begin()+(n), nums.end());}else{sort(nums.begin(),nums.end());}
    }

};