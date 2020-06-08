class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) 
    {
      if(N==1 && !trust.size()) return 1;
      map<int,int> m;
        for(int i=0;i<trust.size();i++)
        {
            m[trust[i][1]]++;
        }
      int ans=-1;
      for(auto i:m)
      {
        if(i.second==N-1)
        {
          ans=i.first;
        }
        
      }

       for(int i=0;i<trust.size();i++)
        {
            if(trust[i][0]==ans)
                return -1;
         else continue;
        }
      return ans;
        
    }
};
