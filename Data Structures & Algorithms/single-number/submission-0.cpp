class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num=0;
        for(int tt : nums){num^=tt;}
        return num;
    }
};
