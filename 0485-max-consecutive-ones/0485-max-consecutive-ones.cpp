class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, count_max = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]==1) {
                count++; 
                count_max = max(count_max, count); 
            }
            else {
                count = 0; // reset count if we hit a 0
            }
        
        }

        return count_max;
    }
};