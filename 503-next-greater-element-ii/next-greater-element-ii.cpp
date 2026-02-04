class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int n=nums.size();
        vector<int> ans(n,-1);

        for(int i=n-1;i>=0;i--){
            while(s.size()>0 && s.top()<=nums[i]){
                s.pop();
            }

            if(s.size()) ans[i]=s.top();
            s.push(nums[i]);
        }

        for( int i=n-1;i>=0;i--){
            if(ans[i]==-1){
                while(s.size()>0 && s.top()<=nums[i]){
                    s.pop();
                }

                if(s.size()) ans[i]=s.top();
                 
                
            }
                s.push(nums[i]);
        }

        return ans;
    }
};