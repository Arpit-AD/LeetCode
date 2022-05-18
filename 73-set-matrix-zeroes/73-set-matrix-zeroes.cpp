class Solution {
public:
    void setZeroes(vector<vector<int>>& z) {
        vector<vector<int>> matrix;
        matrix = z;
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                if(z[i][j]==0)
                {
                    for(int k = 0; k < matrix.size(); k++)
                       {matrix[k][j] = 0;}
        
                    for(int k = 0; k < matrix[i].size(); k++)
                       { matrix[i][k] = 0;}
                }
            }
        }
        z = matrix;
    }
};