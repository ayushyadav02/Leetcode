class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1, zeroCount = 0, zeroIndex = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount++;
                zeroIndex = i;
            } else {
                total *= nums[i];
            }
        }

        vector<int> ans(nums.size(), 0);

        if (zeroCount == 1) {
            ans[zeroIndex] = total;
        } 
        else if (zeroCount == 0) {
            for (int i = 0; i < nums.size(); i++) {
                ans[i] = total / nums[i];
            }
        }

        return ans;
    }
};
