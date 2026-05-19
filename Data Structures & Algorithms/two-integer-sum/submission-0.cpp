class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;
        int n=static_cast<int>(nums.size());
        for(int i=0;i<n;i++)
        {
            if(freq.find(target-nums[i])==freq.end()){freq[nums[i]]=i;}
            else{
                vector<int> v={freq[target-nums[i]],i};
                return v ;
            }
        }
        return {};
    }
};
