class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        freq.reserve(nums.size() * 2);
        for(const int &num : nums)
        {
            freq[num]++;
            if(freq[num]>1){
                return true;
            }
        }
        return false;
    }
};