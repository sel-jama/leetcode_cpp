class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int temp=0;
        int alen = a.length()-1;
        int blen = b.length()-1;
        while(alen>=0|| blen>=0 || temp==1){
            temp += (alen >= 0)? a[alen]-'0':0;
            temp+= (blen >= 0)? b[blen]-'0':0;
            res = char(temp%2+'0')+res;
            temp/=2;
            alen--;
            blen--;
        }
        return res;
    }
};