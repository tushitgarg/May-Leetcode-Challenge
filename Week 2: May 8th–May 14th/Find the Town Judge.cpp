class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
       vector<int> v(N+1);
        for(auto i:trust)
        {
            v[i[1]]++;
            v[i[0]]--;
        }
        for(int i=1;i<=N;i++)
        {
            if(v[i]==N-1)
                return i;
        }
        return -1;
    }
};