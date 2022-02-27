class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int index = INT_MAX;
        int sum = INT_MAX;
        for(int i = 0; i < points.size(); i++)
        {
            if(points[i][0] == x || points[i][1] == y)
            {
                int k = (abs(x-points[i][0])+abs(y-points[i][1]));
                if(sum > k)
                {
                    sum = k;
                    index = i;
                }
            }            
        }
        if(index == INT_MAX)
            index = -1;
        return index;
    }
};