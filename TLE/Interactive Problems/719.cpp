class Solution {
public:

	bool checker(int mid, vector<int>& nums, int k)
	{
		int n = nums.size();
		int i = 0, j = 1, cnt = 0;
		while (j < n)
		{
			while (i < j && nums[j] - nums[i] > mid)
			{
				i++;
			}
			cnt += j - i;
			j++;

			if (cnt >= k) return true;
		}
		return false;
	}

    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int left = 0, right = 1e6, ans = 0;
        while (left <= right)
        {
        	int mid = (left + right) / 2;
        	cout << left << " " << mid << " " << right << "\n";
        	if (checker(mid, nums, k))
        	{
        		ans = mid;
        		right = mid - 1;
        	}
        	else left = mid + 1;
        }

        return ans;
    }
}; 