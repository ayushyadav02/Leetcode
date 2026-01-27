class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int a = word1.size() - 1;
        int b = word2.size() - 1;
        int i = 0, j = 0;

        while (i <= a || j <= b) {
            if (i <= a) {
                s += word1[i];
                i++;
            }
            if (j <= b) {
                s += word2[j];
                j++;
            }
        }
        return s;
    }
};
