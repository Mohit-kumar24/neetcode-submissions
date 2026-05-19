class Solution {
public:
    int getSum(int a, int b) {
        // 1 + 1 = 0 + (10) -> (10) + 00
        // a + b = a^b + 2*(a&b) 
        int ans=a^b;
        int carry=a&b;
        // cout << carry << endl;
        while(carry != 0 ){
            // Number to be added
            b=carry<<1;
            carry=ans&b;
            ans^=b;
            // cout << ans <<" " << b << endl;
        }

        return ans;
    }
};
