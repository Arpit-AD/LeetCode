class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double a = coordinates[0][0], b = coordinates[0][1];
        double ans;
        for(int i = 1; i < coordinates.size(); i++)
        {
            double p = coordinates[i][0], q= coordinates[i][1];
            double slope;
            if(p-a == 0)
                slope = INT_MAX;
            
            else slope = (q-b)/(p-a);
            
            if(i == 1)
                ans = slope;
            else if(ans != slope)
                return false;
                
        }   
            return true;
    }
};