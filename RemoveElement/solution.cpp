class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v;
        for(int i:nums){
            if (i!=val)
                v.push_back(i);
        }
        copy(v.begin(), v.end(), nums.begin());
        return v.size();
    }
};