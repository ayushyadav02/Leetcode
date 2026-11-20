
import java.util.*;

class Solution {

    public List<List<String>> groupAnagrams(String[] strs) {

        List<List<String>> ans = new ArrayList<>();

        boolean[] visited = new boolean[strs.length];

        for (int i = 0; i < strs.length; i++) {

            if (visited[i]) {
                continue;
            }

            List<String> temp = new ArrayList<>();

            temp.add(strs[i]);
            visited[i] = true;

            for (int j = i + 1; j < strs.length; j++) {

                if (!visited[j] && isAnagram(strs[i], strs[j])) {

                    temp.add(strs[j]);
                    visited[j] = true;
                }
            }

            ans.add(temp);
        }

        return ans;
    }

    public boolean isAnagram(String s, String t) {

        if (s.length() != t.length()) {
            return false;
        }

        int h[] = new int[26];

        for (int i = 0; i < s.length(); i++) {
            h[s.charAt(i) - 'a']++;
            h[t.charAt(i) - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (h[i] != 0) {
                return false;
            }
        }

        return true;
    }
}
