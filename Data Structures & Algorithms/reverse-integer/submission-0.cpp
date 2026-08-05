class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN){
            return 0;
        }
        int magn=abs(x);
        int sign=((x>=0)?1:-1);
        int count=0;
        int temp=x;
        while(temp){
            temp/=10;
            count++;
        }
        string tt=to_string(magn);
        string min_val=to_string(INT_MAX);
        std::reverse(tt.begin(),tt.end());
        if(count<10 || tt <= min_val){
            int u=stoi(tt);
            return sign*u;
        }
        return 0;
    }
};
