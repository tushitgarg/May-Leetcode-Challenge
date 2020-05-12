class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low,high,mid,x;
        low = 0;
        high = nums.size()-1;
        while(low<high)
        {
            mid = low+ (high-low)/2;
            if(mid & 1)
            {
                if(nums[mid]==nums[mid-1])
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
            else
            {
                if(nums[mid]==nums[mid+1])
                {
                    low = mid+2;
                }
                else
                {
                    high = mid;
                }
            }
        }
        return nums[low];
    }
};