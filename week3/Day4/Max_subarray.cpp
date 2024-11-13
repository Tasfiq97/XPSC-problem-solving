class Solution
{
public:
    long long maximumSumSubarray(vector<int> &arr, int k)
    {
        // code here
        int l = 0;
        int r = 0;
        long long int sum = 0;
        long long int ans = 0;
        while (r < arr.size())
        {
            sum += arr[r];
            if (r - l + 1 == k)
            {
                ans = max(ans, sum);
                sum -= arr[l];
                l++, r++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};