class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        for(int  i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            int k=i+1;
            int j=nums.size()-1;

            while(k<j){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(k<j && nums[j]==nums[j-1]) j--;
                    k++,j--;
                }else if(sum<0){
                    k++;
                }else{
                    j--;
                }
            }
        }
        return ans;
    }
};