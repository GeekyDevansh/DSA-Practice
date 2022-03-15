class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int s = 0;
        int e = row*col - 1;
        
        while(s<=e)
        {
            int m = s + (e-s)/2;
            
            if(matrix[m/col][m%col] == target)
            {
                return 1;
            }
            else if (target > matrix[m/col][m%col] )
            {
                s=m+1;
            }
            else
            {
                e=m-1;
            }
        }
        return 0;
        
    }
};