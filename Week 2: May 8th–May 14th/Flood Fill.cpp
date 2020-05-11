class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor)
            return image;
        queue<pair<int,int>> q;
        int n,m;
        n = image.size();
        m = image[0].size();
        int old_color;
        pair<int,int> p;
        old_color = image[sr][sc];
        q.push(make_pair(sr,sc));
        while(!q.empty())
        {
            p=q.front();
            q.pop();
            image[p.first][p.second] = newColor;
            if(p.first-1>=0 && image[p.first-1][p.second]==old_color)
                q.push(make_pair(p.first-1,p.second));
            if(p.first+1<n && image[p.first+1][p.second]==old_color)
                q.push(make_pair(p.first+1,p.second));
            if(p.second-1>=0 && image[p.first][p.second-1]==old_color)
                q.push(make_pair(p.first,p.second-1));
            if(p.second+1<m && image[p.first][p.second+1]==old_color)
                q.push(make_pair(p.first,p.second+1));
        }
        return image;
    }
};