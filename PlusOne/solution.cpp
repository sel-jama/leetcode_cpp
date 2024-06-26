class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l = digits.size()-1;
        if (digits[l] == 9){
            if(l==0){
                digits[0]=1;
                digits.push_back(0);
            }
            else{
                while(l>=0 && digits[l]==9){
                    digits[l]=0;
                    l--;
                }
                if (l<0)
                    digits.insert(digits.begin(), 1);
                else
                    digits[l]+=1;
            }
        }
        else
            digits[l]+=1;
        return digits;
    }
};