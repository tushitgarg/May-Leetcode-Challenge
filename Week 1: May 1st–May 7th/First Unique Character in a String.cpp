class Solution {
public:
    int firstUniqChar(string s) {
        if(s=="")
            return -1;
        unordered_map<char,int> m;
        int i,index;
        for(i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        index=0;
        while(m[s[index]]>1)
        {
            index++;
        }
        if(index!=s.length())
            return index;
        else
            return -1;
    }
};