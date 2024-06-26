using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int i = 0;
        int j = s.length() - 1;
        int l =j;
        while(i <= l/2){
            if (s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};