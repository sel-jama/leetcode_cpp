class Solution {
public:
    bool isHappy(int n) {
        vector<int> v;
        while (1) {
            string s = to_string(n);
            n=0;
            for (char c : s) {
                int d = c-'0';
                n += d * d;
            }
            if (n ==1)
                return true;
            if (find(v.begin(), v.end(), n) != v.end())
                return false;

            v.push_back(n);
        }
    }
};