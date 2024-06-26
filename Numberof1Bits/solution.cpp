class Solution {
public:
    int hammingWeight(int n) {
        bitset<64> bit(n);
        int c = bit.count();
        // int c=0;
        // for(int i=0; i<bit.size();++i){
        //     if(bit[i])
        //         c++;
        // }
        return c;
    }
};