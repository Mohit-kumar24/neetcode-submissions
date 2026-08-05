class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit=0;
        vector<int> min_val(n);
        vector<int> max_val(n);
        for(int i=0;i<n;i++)
        {
            if(i==0){
                min_val[i]=prices[i];
            }
            else{
                min_val[i]=min(min_val[i-1],prices[i]);
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(i==(n-1)){
                max_val[i]=prices[i];
            }
            else{
                max_val[i]=max(max_val[i+1],prices[i]);
            }
        }

        for(int i=0;i<n;i++)
        {
            max_profit=max(max_profit,max_val[i]-min_val[i]);
        }
        return max_profit;
    }
};
