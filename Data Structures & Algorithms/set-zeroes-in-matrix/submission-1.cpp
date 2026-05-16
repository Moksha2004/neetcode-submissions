class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        bool rowzero=false;
        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                if(matrix[r][c]==0){
                    matrix[0][c]=0;
                    if(r>0) matrix[r][0]=0;
                    else rowzero=true;
                }
            }
        }
        for(int r=1;r<n;r++){
            for(int c=1;c<m;c++){
                if(matrix[0][c]==0||matrix[r][0]==0) matrix[r][c]=0;

            }
        }
        if(!matrix[0][0]) for(int r=0;r<n;r++) matrix[r][0]=0;
        if(rowzero) for(int r=0;r<m;r++) matrix[0][r]=0;

    }
};
