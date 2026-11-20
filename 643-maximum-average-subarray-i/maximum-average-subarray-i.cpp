class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0 ;
        for(int i =0 ; i<k; i++){
            sum+=nums[i];
        }

        double maxi = (double)sum / k;

        for(int i = k ; i<nums.size(); i++){
            sum = sum - nums[i-k] + nums[i];
            double b = (double)sum / k;
            maxi = max(maxi , b); 
        }

        return maxi;
    }
};