class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> hash;
        std::vector<int> res;

        for(int i=0; i<nums.size(); ++i){
            int complement = target-nums[i];
            if (hash.find(complement)!= hash.end()){
                res.push_back(hash[complement]);
                res.push_back(i);
            }
            else
                hash[nums[i]] = i;
        }
        return res;
    }
};