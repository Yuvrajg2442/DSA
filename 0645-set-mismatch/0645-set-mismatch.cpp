class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();

        long long sn = (n*(n+1))/2;
        long long s2n = (n*(n+1)*(2*n+1))/6;
        long long s = 0;
        long long s2 = 0;
        for(int i = 0;i<n;i++){
            s = s + nums[i];
            s2 = s2 + (nums[i]*nums[i]);
        }

        int val1 = s - sn;
        int val2 = s2 - s2n;

        val2 = val2/val1;

        int x = (val1 + val2)/2;
        int y = x - val1;

        return {x,y};

    }
};