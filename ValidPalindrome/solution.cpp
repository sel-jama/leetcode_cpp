class Solution {
public:
    bool isPalindrome(string s) {
        int l = s.size()-1;
        int i =0;
        int flag;
        while(l>=0 && s[i] && i!=l){
            flag=0;
            if(!isalpha(s[i])  && !isdigit(s[i])){
                i++;
                flag=1;
            }
            if(!isalpha(s[l]) && !isdigit(s[l])){
                l--;
                flag=1;
            }
            if(flag)
                continue;
            if(tolower(s[i]) != tolower(s[l]))
                return false;
            i++;
            l--;
        }
        return true;
    }
};