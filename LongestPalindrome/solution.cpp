class Solution {
public:
    int longestPalindrome(string s) {
        int c=0;
        size_t l = s.size();
        for (int i=0; s[i]; i++){
            auto it = find(s.begin()+i+1, s.end(), s[i]);
            if (it != s.end()){
                s.erase(it);
                c+=2;
            }
        }
        if(c!=l)
            c++;
        return c;
    }
};