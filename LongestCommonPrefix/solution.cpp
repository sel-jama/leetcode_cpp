class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";

        sort(strs.begin(), strs.end(), [](const std::string &a, const std::string &b) {
            return a.size() < b.size();
        });

        std::string prefix = strs[0]; 

        for (size_t i = 0; i < prefix.size(); ++i) {
            char c = prefix[i];
            for (size_t j = 1; j < strs.size(); ++j) {
                if (i >= strs[j].size() || strs[j][i] != c) {
                    return prefix.substr(0, i);
                }
            }
        }

        return prefix;
    }
};