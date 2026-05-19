class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        // From  [0,n]
        int ans=0;
        for(int i=0;i<n;i++){ans^=((i+1)^nums[i]);}
        return ans;
    }
};
