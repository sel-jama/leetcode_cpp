#include <map>
#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::map<char, int> m = {{'(', ')'},
                                 {'{', '}'},
                                 {'[', ']'}};
        std::stack<int> stk;
        
        for(char c : s)
        {
            if(m.find(c) != m.end())
                stk.push(c);
            else{
                if(stk.empty()) return false;
                char top = stk.top();
                stk.pop();
                if(m[top] != c) return false;
            }
        }
        if(stk.size()!=0)
            return false;
        return true;
    }
};