class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int n = s.size();
        int maxlen = 0;
        unordered_set<char> st;
        for (int r = 0; r < n; r++) {
            while (st.count(s[r])) {
                st.erase(s[l]);
                l = s[l] + 1;
                l++;
            }
            st.insert(s[r]);
            maxlen = max(maxlen, r - l + 1);
        }
        return maxlen;
    }
};
