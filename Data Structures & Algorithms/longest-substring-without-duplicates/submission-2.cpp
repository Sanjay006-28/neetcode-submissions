class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxlen = 0;
        int l = 0;
        unordered_map<char, int> mpp;
        for (int r = 0; r < n; r++) {
            if (mpp.find(s[r]) != mpp.end()) {
                l = max(l, mpp[s[r]] + 1);
            }
            mpp[s[r]] = r;
            maxlen = max(maxlen, r - l + 1);
        }
        return maxlen;
    }
};

// Using set data structure
// class Solution {
//    public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size();
//         int maxlen = 0;
//         int l = 0;
//         unordered_set<char>st;
//         for(int r = 0; r < n; r++){
//             while(st.count(s[r])){
//                 st.erase(s[l]);
//                 l++;
//             }
//             st.insert(s[r]);
//             maxlen = max(maxlen, r - l + 1);
//         }
//         return maxlen;
//     }
// };
// class Solution {
//    public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size();
//         int maxlen = 0;
//         for (int i = 0; i < n; i++) {
//             unordered_set<int> st;
//             for (int j = i; j < n; j++) {
//                 if(st.count(s[j])){
//                     break;
//                 }
//                 st.insert(s[j]);
//                 maxlen = max(maxlen, j - i + 1);
//             }
//         }
//         return maxlen;
//     }
// };
