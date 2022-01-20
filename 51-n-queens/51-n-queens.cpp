class Solution {
    vector<vector<string>> ans; 
public:
    void f(int col , vector<string> z, vector<int> leftSide, vector<int>lowerDiagonal, vector<int> upperDiagonal, int n){
        if(col == n)
        {
            ans.emplace_back(z);
            return;
        }
        
        for(int row = 0; row < n; row++)
        {
            if(leftSide[row] == 0 && lowerDiagonal[col+row] == 0 && upperDiagonal[n-1+col-row] == 0)
            {
                z[row][col] = 'Q';
                leftSide[row] = 1;
                lowerDiagonal[col+row] = 1;
                upperDiagonal[n-1+col-row] = 1;
                f(col+1,z,leftSide,lowerDiagonal,upperDiagonal,n);
                z[row][col] ='.';
                leftSide[row] = 0;
                lowerDiagonal[row+col] = 0;
                upperDiagonal[n-1+col-row] = 0;
                
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> z(n);
        string s(n,'.');
        for(int i = 0; i < n; i++)
            z[i] = s;
        vector<int> leftSide(n,0);
        vector<int> lowerDiagonal((2*n)-1,0);
        vector<int> upperDiagonal((2*n)-1,0);
        f(0, z, leftSide, lowerDiagonal, upperDiagonal, n);
        return ans;
    }
};