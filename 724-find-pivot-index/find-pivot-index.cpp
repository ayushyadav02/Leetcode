class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();


        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            nums[i]=sum;
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