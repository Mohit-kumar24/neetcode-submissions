class Solution {
public:

    int count_set_bit(int n)
    {
        if(n==0){
            return 0;
        }
        int count=0;
        while(n>0){
            if((n&1)){
                count++;
            }
            n>>=1;
        }
        return count;
    }

    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++)
        {
            v.push_back(count_set_bit(i));
        }
        return v;
    }
};
