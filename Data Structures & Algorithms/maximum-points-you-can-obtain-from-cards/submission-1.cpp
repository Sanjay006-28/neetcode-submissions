class Solution {
   public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxsum = 0, lsum = 0, rsum = 0;
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }
        maxsum = lsum;
        int ind = cardPoints.size() - 1;
        for (int i = k - 1; i >= 0; i--) {
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[ind];
            ind--;
            maxsum = max(maxsum, lsum + rsum);
        }
        return maxsum;
    }
};
// class Solution {
//    public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int maxSum = 0;
//         int n = cardPoints.size();
//         for (int left = 0; left <= k; left++) {
//             int curSum = 0;
//             int right = k - left;
//             for (int i = 0; i < left; i++) {
//                 curSum += cardPoints[i];
//             }
//             for (int i = n - right; i < n; i++) {
//                 curSum += cardPoints[i];
//             }
//             maxSum = max(maxSum, curSum);
//         }
//         return maxSum;
//     }
// };