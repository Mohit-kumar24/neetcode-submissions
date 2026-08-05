class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reversed=0;
        for(int bit=31;bit>=0;bit--)
        {
            if((n>>bit)&1){
                reversed|=(1<<(31-bit));
            }
        }

        return reversed;
    }
};
