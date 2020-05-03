class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int> jewels;
        int i,j,count = 0;
        for(i=0;i<J.length();i++)
        {
            jewels[J[i]]++;
        }
        for(i=0;i<S.length();i++)
        {
            if(jewels.find(S[i])!=jewels.end())
            ++count;
        }
        return count;
    }
};
