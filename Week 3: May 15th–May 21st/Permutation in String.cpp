class Solution {
public:
    bool checkInclusion(string p, string s) {
         vector<int> index;
        char ch;
        int ls,lp;
        int freqtemp[26],freqp[26];
        memset(&freqp,0,sizeof(freqp));
        ls = s.size();
        lp = p.size();
        for(int j=0;j<lp;j++)
            {
                ch = p[j];
                freqp[ch-'a']++;
            }
        for(int i=0;i<=ls-lp;i++)
        {
            memset(&freqtemp,0,sizeof(freqtemp));
            for(int j=0;j<lp;j++)
            {
                ch=s[i+j];
                freqtemp[ch-'a']++;
            }
            int flag=1;
            for(int j=0;j<26;j++)
            {
                if(freqp[j]!=freqtemp[j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
                index.push_back(i);
        }
        return !index.empty();
    }
};