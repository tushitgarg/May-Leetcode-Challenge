class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int i,n;
        n = nums.size()/2;
        for(i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                m[nums[i]]++;
                if(m[nums[i]]>n)
                    return nums[i];
            }
            else
            {
                m[nums[i]]++;
            }
        }
        return nums[0];
    }
};