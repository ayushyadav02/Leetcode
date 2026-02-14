class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size()-1;
        int st=0 , mx=1;

        for(int i=0;i<=n;i++){
            check(s,i,i,st,mx);
            check(s,i,i+1,st,mx);

        }
        return s.substr(st,mx);
    }
     void check(string &s, int l, int r, int &st, int &mx) {
        int n = s.size();
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > mx) {
                st = l;
                mx = r - l + 1;
            }
            l--;
            r++;
        }
     }
};