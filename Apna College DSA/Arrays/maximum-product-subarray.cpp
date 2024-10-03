class Solution {
public:
    int maxProduct(vector<int>& nums) {
        ios_base:: sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
         int* num =  nums.data();
        int max_num = num[0];
        int min_num = num[0];
        int result = num[0];
        int n = nums.size();
       
        for(int i =1;i<n;i++){
            if(num[i]== 0){
            max_num = num[i];
            min_num = num[i];
            }
            if(num[i]< 0){
                swap(max_num,min_num);
            }

            max_num = max(num[i],( max_num*num[i]));
            min_num = min(num[i], (min_num*num[i]));
            result = max(result, max_num);
        }

        return result;
    }
};