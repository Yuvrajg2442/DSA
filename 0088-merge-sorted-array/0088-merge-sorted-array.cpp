class Solution {

private:

void swapifGreater(vector<int>& nums1, vector<int>& nums2, int ind1, int ind2){
    if(nums1[ind1]>nums2[ind2]){
        swap(nums1[ind1],nums2[ind2]);
    }
}
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = n+m;
        int gap = (len/2) + (len%2);

        while(gap>0){
            int left = 0;
            int right = left + gap;
            while(right<len){

                if(left<m && right>=m){
                    swapifGreater(nums1,nums2,left,right-m);
                }
                else if(left>=m){
                    swapifGreater(nums2,nums2,left-m,right-m);
                }
                else{
                    swapifGreater(nums1,nums1,left,right);
                }
                left++;
                right++;
            }
            if(gap==1)
                break;
            else
                gap = (gap/2) + (gap%2);
        }
         for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};