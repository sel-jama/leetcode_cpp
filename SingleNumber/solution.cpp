class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = nums.size();
        for(int i=0; i < l; i+=2){
            if (i== l-1)
                return nums[i];

            if (nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return 0;

        // int foundTwin;
        // for(int i=0; i < nums.size(); i++){
        //     foundTwin = 0;
        //     for (int j = i+1; j < nums.size(); j++){
        //         if (nums[i] == nums[j]){
        //             nums.erase(nums.begin()+j);
        //             foundTwin = 1;
        //         }
        //     }
        //     if (!foundTwin)
        //         return nums[i];
        // }
        // return 0;
    }
};