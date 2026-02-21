class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        unordered_map<int,int> mp;
         if (k == 0) {
            for (int i = 1; i < n; i++) {
                if (nums[i] == 0 && nums[i - 1] == 0)
                    return true;
            }
            return false;
        }
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem==0 && i>0) return true;
            if(mp.find(rem)!=mp.end()){
                if(i-mp[rem] >=2)return true;
            } 
           else{ mp[rem] = i;}
        }

        

        return false;
    }
};