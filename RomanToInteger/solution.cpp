class Solution {
public:
    int romanToInt(string s) {
        std::map<char, int> m =
        {{'I', 1},
         {'V', 5},
         {'X', 10},
         {'L', 50},
         {'C', 100},
         {'D', 500},
         {'M', 1000}};
        
        int res=0;
        int before = 1001;
        for(char c:s){
            int now = m[c];
            if(before < now)
                res += now-before*2;
            else
                res += now;
            before = now;
        }
        return res;
    }
};