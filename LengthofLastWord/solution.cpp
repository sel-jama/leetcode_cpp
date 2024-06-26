class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.length() - 1;
        int res=0;
        while(l>=0 && (s[l] == ' ' || s[l] == 9))
            l--;
        while(l >= 0 && (s[l] !=' ' && s[l]!= 9))
        {
            res++;
            l--;
        }
        return res;
    }
};