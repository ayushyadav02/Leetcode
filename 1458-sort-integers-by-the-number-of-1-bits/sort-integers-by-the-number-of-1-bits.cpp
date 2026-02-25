class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> temp;

        for(auto &a : arr){
            temp.push_back({__builtin_popcount(a),a});
        }

        sort(temp.begin(),temp.end(),[](pair<int,int> &a , pair<int,int> &b){
            if(a.first==b.first) return a.second<b.second;
            return a.first<b.first;
        });
        vector<int> ans;
        for(auto [f,s] : temp){
            ans.push_back(s);
        }

    return ans;
    }
};