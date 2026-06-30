class Solution {
   public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left <= right) {
            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            if (!isalnum(s[right])) {
                right--;
                continue;
            }
            if (tolower(s[left]) == tolower(s[right])) {
                left++;
                right--;
            } else {
                return false;
            }
        }
        return true;
    }
};
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         // int n = s.size();
//         string t = "";
//         for(char ch: s){
//           if(isalnum(ch)){
//             t += tolower(ch);
//           }
//         }
//         string reversestr = t;
//         reverse(reversestr.begin(), reversestr.end());

//         return t == reversestr;
//     }
// };
