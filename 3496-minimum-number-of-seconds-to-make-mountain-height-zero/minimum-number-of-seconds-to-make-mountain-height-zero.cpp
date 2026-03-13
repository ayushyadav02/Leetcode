class Solution {
public:
    
    bool can(long long T, int H, vector<int>& w){
        long long total = 0;
        
        for(long long t : w){
            // solve t * x(x+1)/2 <= T
            // x(x+1) <= 2T/t
            
            long long val = (2 * T) / t;
            
            long long x = (sqrt(1 + 4 * val) - 1) / 2;
            
            total += x;
            if(total >= H) return true;
        }
        
        return total >= H;
    }
    
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        
        long long low = 0;
        long long high = 1e18;
        
        long long ans = high;
        
        while(low <= high){
            long long mid = (low + high) / 2;
            
            if(can(mid, mountainHeight, workerTimes)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};