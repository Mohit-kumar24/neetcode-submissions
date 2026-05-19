class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        set<pair<int,int>,greater<>> top_k;
        for(int &num : nums)
        {
            freq[num]++;
        }
        for(auto &[num , cnt] : freq)
        {
            top_k.insert({cnt,num});
        }
        vector<int> res;
        auto it_f=next(top_k.begin(),k);
        for(auto it=top_k.begin();it!=it_f;it++)
        {
            res.push_back(it->second);
        }
        return res;
    }
};
