class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) 
    {
       int row=A.size();
        int column=B.size();
        vector< vector<int> >ans(row+1,vector<int> (column+1,0));
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=column;j++){
                if(A[i-1]==B[j-1]){
                    ans[i][j]=ans[i-1][j-1]+1;
                }
                else ans[i][j]=max(ans[i][j-1],ans[i-1][j]);
            }
        }
        return ans[row][column];
        
    }
};
