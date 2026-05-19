#define sz(x) (int)(x.size())
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(sz(s)!=sz(t)){
            return false;
        }
        unordered_map<char,int> freq;
        freq.reserve(27);
        for(const char &c : s)
        {
            freq[c]++;
        }
        for(const char &c : t)
        {
            freq[c]--;
            if(freq[c]<0){
                return false;
            }
        }
        return true;
    }
};
