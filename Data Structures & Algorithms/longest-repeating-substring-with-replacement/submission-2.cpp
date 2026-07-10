class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l = 0;
        int maxlen = 0;
        int maxfre = 0;
        unordered_map<int, int> mpp;
        for(int r = 0; r < n; r++){
            mpp[s[r]]++;
            maxfre = max(maxfre, mpp[s[r]]);
            if(((r - l + 1)- maxfre) > k){
                mpp[s[l]]--;
                l++;
            }
            maxlen = max (maxlen, r - l + 1);
        }
        return maxlen;
    }
};
