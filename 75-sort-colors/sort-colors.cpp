class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                swap(nums[i],nums[left]);
                left++;
            }
        }
        for(int j=nums.size()-1;j>=0;j--){
            if(nums[j]==2){
                swap(nums[j],nums[right]);
                right--;
            }
        }
    }
};