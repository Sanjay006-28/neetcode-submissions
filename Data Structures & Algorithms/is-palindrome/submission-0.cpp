class Solution {
public:
    bool isPalindrome(string s) {
        // int n = s.size();
        string t = "";
        for(char ch: s){
          if(isalnum(ch)){
            t += tolower(ch);
          }
        }
        string reversestr = t;
        reverse(reversestr.begin(), reversestr.end());
        
        return t == reversestr;
    }
};
