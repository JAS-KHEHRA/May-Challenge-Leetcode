class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        if(r==0 || c==0) return 0;
        vector< vector<int> > sol ( r, vector<int>(c,0));
        int ans=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==0 || j==0)
                {
                    if(matrix[i][j]==1)
                    {
                        sol[i][j]=1;
                    }
                }    
                    else
                    {
                        if(matrix[i][j]==1)
                      {
                        sol[i][j]= 1 + min({sol[i-1][j-1],sol[i-1][j],sol[i][j-1]});
                            
                      }
                        
                    }
                
             }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<sol[i][j]<<" ";
                ans+=sol[i][j];
            }
            cout<<endl;
        }
        return ans;
    }
};
