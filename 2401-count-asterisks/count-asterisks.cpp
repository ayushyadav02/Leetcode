class Solution {
public:
    int countAsterisks(string s) {
        int d = 0;
        int st = 0;
        for(char it : s){
            if(it=='|') d++;

            if(d==2) d=0;
            if(d==0 && it=='*') st++;
        }
        return st;
    }
};