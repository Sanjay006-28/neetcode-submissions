class Solution {
   public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxSum = 0;
        int n = cardPoints.size();
        for (int left = 0; left <= k; left++) {
            int curSum = 0;
            int right = k - left;
            for (int i = 0; i < left; i++) {
                curSum += cardPoints[i];
            }
            for (int i = n - right; i < n; i++) {
                curSum += cardPoints[i];
            }
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }
};