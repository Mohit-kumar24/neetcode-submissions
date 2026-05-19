class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =  static_cast<int>(nums.size());
        vector<int> output(n);
        vector<long long> prefix(n,1);
        vector<long long>suffix(n,1);
        for(int i=1;i<n;i++)
        {
            
            prefix[i]=prefix[i-1]*nums[i-1];
            suffix[n-1-i] = suffix[n-i]*nums[n-i];
        }

        for(int i=0;i<n;i++)
        {
            output[i]=prefix[i]*suffix[i];
        }
        return output;
    }
};
