class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int ans = 0;

        // skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // count last word
        while (i >= 0 && s[i] != ' ') {
            ans++;
            i--;
        }

        return ans;
    }
};
