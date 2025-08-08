class Solution {
public:

	bool checker(int mid, vector<int>& bd, int m, int k)
	{
		int flowers = 0;
		int chk = 0;
		for (int i = 0; i < bd.size(); ++i)
		{
			if (bd[i] <= mid) chk++;
			else chk = 0;

			if (chk == k)
			{
				flowers++;
				chk = 0;
			}

			if (flowers >= m) return true;
		}
		return false;
	}

    int minDays(vector<int>& bloomDay, int m, int k) {
        if (bloomDay.size() / k >= m)
        {
        	int left = 0, right = 1e9, ans = 0;
        	while (left <= right)
        	{
        		int mid = (left + right) / 2;
        		if (checker(mid, bloomDay, m, k))
        		{
        			ans = mid;
        			right = mid - 1;
        		}
        		else left = mid + 1;
        	}

        	return ans;
        }
        return -1;
    }
};