class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = static_cast<int>(nums.size());
        set<vector<int>> res;
        map<int,vector<int>> sum_comb;
        for(int i=0;i<n;i++)
        {
            sum_comb[nums[i]].push_back(i);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                // Low to High
                if((nums[i]+nums[j]+nums[n-1])<0    || (nums[i]+nums[j]+nums[0])>0){
                    continue;
                }
                // May be in middle have a term
                if(sum_comb.find(-nums[i]-nums[j])!=sum_comb.end()){
                    for(auto &idx : sum_comb[-nums[i]-nums[j]])
                    {
                        if(idx>j){
                            vector<int>v = {nums[i],nums[j],nums[idx]};
                            res.insert(move(v));
                        }
                    }
                }
            }
        }
        return vector<vector<int>> (res.begin(),res.end());
    }
};
