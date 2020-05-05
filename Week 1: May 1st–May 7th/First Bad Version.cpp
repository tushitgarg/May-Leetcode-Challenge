// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int start,end,mid;
        start = 1;
        end = n;
        while(start<end)
        {
            mid = (start+end)/2;
            if(isBadVersion(mid))
            {
                end = mid;
            }
            else
            {
                start = mid+1;
            }
        }
        return end;
    }
};
