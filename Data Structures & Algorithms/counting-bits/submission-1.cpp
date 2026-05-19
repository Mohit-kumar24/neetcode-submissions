class Solution {
public:

   

    vector<int> countBits(int n) {
        vector<int> v(n+1,0);
        v[0]=0;
        for(int i=1;i<=n;i++)
        {
            if(i==1){
                v[1]=1;
            }
            else{
                // Removing MSB
                v[i]=1 + v[i&(~(1<<(31 - __builtin_clz(i))))];
            }
        }
        return v;
    }
};
