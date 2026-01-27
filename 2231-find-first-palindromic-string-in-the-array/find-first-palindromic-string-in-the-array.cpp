class Solution {
public:
    bool ispalindrome(string s){
        int  i=0;
        int  j=s.length()-1;
        while(j>=i){
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;

    }
    string firstPalindrome(vector<string>& words) {

        for(auto &s:words){
            if(ispalindrome(s)) return s;

        }
        return "";
        
    }
};