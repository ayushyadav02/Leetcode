class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        
        vector<vector<int>> g(n);
        vector<int> in(n, 0);
        
        for (auto e : pre) {
            g[e[1]].push_back(e[0]);
            in[e[0]]++;
        }
        
        queue<int> q;
        
        for (int i = 0; i < n; i++) {
            if (in[i] == 0)
                q.push(i);
        }
        
        int cnt = 0;
        
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            cnt++;
            
            for (int y : g[x]) {
                in[y]--;
                if (in[y] == 0)
                    q.push(y);
            }
        }
        
        return cnt == n;
    }
};
