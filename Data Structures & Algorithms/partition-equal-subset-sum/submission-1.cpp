class Solution {
   public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum & 1) {
            return false;
        } else {
            int req = sum / 2;
            vector<int> dp(req + 1);
            dp[0] = 1;
            int n = nums.size();
            for (int i = 0; i < n; i++) {
                for (int j = req; j >=0; j--) {
                    if (dp[j] and (nums[i] + j) <= req) {
                        dp[nums[i] + j]++;
                    }
                }
            }
            return dp[req] > 0;
        }
    }
};
