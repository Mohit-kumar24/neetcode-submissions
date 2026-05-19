class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        // From  [0,n]
        int sum=accumulate(nums.begin(),nums.end(),0);
        int m = (n)*(n+1);
        return (m/2)-sum;
    }
};
