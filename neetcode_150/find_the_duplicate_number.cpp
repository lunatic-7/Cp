#define F first
#define S second

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int i = 0;
        while(i < nums.size())
        {
            if (nums[abs(nums[i])] < 0) return abs(nums[i]);
            nums[abs(nums[i])] *= -1;
            i++;
        }

        return -1;
    }
};
