class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::set<int> s;
        for(int i:nums){
            s.insert(i);
        }
        std::copy(s.begin(), s.end(), nums.begin());
        return s.size();
    }
};