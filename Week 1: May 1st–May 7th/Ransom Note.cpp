class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mag;
        int i;
        for(i=0;i<magazine.size();i++)
        {
            mag[magazine[i]]++;
        }
        for(i=0;i<ransomNote.size();i++)
        {
            if(mag.find(ransomNote[i])!=mag.end())
            {
                if(mag.find(ransomNote[i])->second==0)
                {
                    return false;
                }
                else
                {
                    mag[ransomNote[i]]--;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
