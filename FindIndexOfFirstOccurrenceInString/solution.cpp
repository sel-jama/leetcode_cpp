class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<haystack.length(); i++){
            int j =0;
            int a=i;
            while(needle[j] && haystack[a] && needle[j] == haystack[a]){
                j++;
                a++;
            }
            if (!needle[j])
                return i;
        }
        return -1;
    }
};