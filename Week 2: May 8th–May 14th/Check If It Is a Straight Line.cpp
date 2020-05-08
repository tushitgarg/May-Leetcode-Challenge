
bool find(int x1,int x2,int y1, int y2,int a , int b)
{
    if(x2==x1)
    {
        if(a==x1)
            return true;
        else
            return false;
    }
    else if(y1==y2)
    {
        if(b==y1)
            return true;
        else
            return false;
    }
    else
    {
        int slope = (y2-y1)/(x2-x1);
        if(b==(slope*(a-x1)+y1))
            return true;
        else
            return false;
    }
    
}

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()==2)
            return true;
        int x1,x2,y1,y2,i;
        x1 = coordinates[0][0];
        y1 = coordinates[0][1];
        x2 = coordinates[1][0];
        y2 = coordinates[1][1];
        i=2;
        while(i<coordinates.size() && find(x1,x2,y1,y2,coordinates[i][0],coordinates[i][1]))
        {
            ++i;
        }
        if(i<coordinates.size())
            return false;
        else
            return true;
        
    }
};