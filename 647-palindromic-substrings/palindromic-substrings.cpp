class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            count(s, i, i, cnt);     
            count(s, i, i + 1, cnt); 
        }
        return cnt;
    }

    void count(string &s, int l, int r, int &cnt) {
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            cnt++;
            l--;
            r++;
        }
    }
};
