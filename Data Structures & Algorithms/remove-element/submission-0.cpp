class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        vector<int> temp;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != val){
                nums[cnt] = nums[i];
                cnt++;
            }
        }
      
        return cnt;
    }
};