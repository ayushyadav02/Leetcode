class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();


        for(int i=1;i<n;i++){
            
            nums[i]+=nums[i-1];
        }
        

            int ls=0;
            int rs=0;
        for(int i=0;i<n;i++){

           ls = (i == 0) ? 0 : nums[i - 1];
            rs = nums[n -1] - nums[i ];
            if(ls==rs){
                return  i;
            }

        }

        return -1;

    }
};