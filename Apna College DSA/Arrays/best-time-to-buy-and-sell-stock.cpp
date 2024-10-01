
 auto init =[]() { ///Lambda function:
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
 }();
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int pr = 0;
        int min = INT_MAX;

        for(int i =0;i<size;i++){
            if(min > prices[i]){
                min = prices[i];
            }else{
                if(pr < (prices[i]-min)){
                     pr = (prices[i]-min);
                 }
            }
        //     for(int j =i+1;j<size;j++){
        //         if(pr < (prices[j]-prices[i])){
        //             pr = (prices[j]-prices[i]);
        //         }
        // }
    }
    return pr;
    }
};