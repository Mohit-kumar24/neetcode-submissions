class Solution {
public:

   

    vector<int> countBits(int n) {
        vector<int> v(n+1,0);
        v[0]=0;
        int offset=1;
        for(int i=1;i<=n;i++)
        {
            if(i==1){
                v[1]=1;
            }
            else if(offset*2==i){
                v[i]=1;
                offset*=2;
            }
            else{
                // Removing MSB
                v[i]=1 + v[i-offset];
            }
        }
        return v;
    }
};
