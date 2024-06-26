class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int d = distance(nums.begin(),upper_bound(nums.begin(), nums.end(), target));
        if(find(nums.begin(), nums.end(), target) != nums.end())
            return --d;
        return d;
    }
};