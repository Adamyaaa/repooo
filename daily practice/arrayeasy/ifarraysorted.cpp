class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return true;
        } else {
            int count = 1; 
            int break1=0;
            for (int i = 1; i < 2*n+1; i++) {
                if (nums[(i - 1) % n] <= nums[i % n]) {
                    if (++count == n) return true;
                } else {
                    if(++break1>1) return false;
                    count=1;
                    
                }
            }
        }
        return false;
    }
};
