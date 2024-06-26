class Solution {
public:
    int myAtoi(string s){
        int r;
        try{
            r=stoi(s);
            return r;
        }
        catch(std::invalid_argument &e){
            return 0;
        }
        catch(std::out_of_range &e){
            int i;
            for(i=0;isspace(s[i]);i++);
            if(i<s.size() && s[i]=='-')
                return INT_MIN;
            else
                return INT_MAX;
        }
        return 0;
    }
};