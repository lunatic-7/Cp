class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());

        int sz = nums1.size();

        double ans;

        if (sz & 1) ans = (double) nums1[sz / 2];
        else ans = ((double) nums1[(sz / 2) - 1] + (double) nums1[(sz / 2)]) / (double) 2;

        return ans;
    }
};