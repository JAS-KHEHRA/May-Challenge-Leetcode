class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) 
    {
        vector<int> temp(2);
        vector<vector<int>> ans;
        int aptr=0;
        int bptr=0;
       int size1=A.size();
        int size2=B.size();
        while(aptr<size1 && bptr<size2)
        {
            if(A[aptr][1]>=B[bptr][0] && B[bptr][1]>=A[aptr][0])
            {
                temp[0]=max(A[aptr][0],B[bptr][0]);
                temp[1]=min(B[bptr][1],A[aptr][1]);
                ans.push_back(temp);
            }
            
            if(A[aptr][1]>B[bptr][1]) 
                bptr++;
            else aptr++;
        }
        return ans;
        
    }
};
