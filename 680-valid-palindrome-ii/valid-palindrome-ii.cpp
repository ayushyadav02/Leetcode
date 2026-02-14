class Solution {
public:

    bool checkpalindrome(string s,int l,int r){
        while(l<=r){
            if(s[l]==s[r]){
                l++;r--;
            }else{
                return false;
            }
        }
        return true;
    };
    bool validPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
         while(l<=r){
            if(s[l]==s[r]){
                l++;r--;
            }else{
                bool ans1=checkpalindrome(s,l+1,r);
                bool ans2=checkpalindrome(s,l,r-1);
                return ans1||ans2;
            }
        }

        return -1;

    }
};