class Solution {
public:
    string frequencySort(string s) 
    {
      unordered_map<char,int> m;
        for(auto c:s)
        {
            m[c]++;
        }
         vector< pair<char,int> > a(m.begin(),m.end());
        sort(a.begin(),a.end(),[](pair<char,int> &p1, pair<char,int> &p2){
             return p1.second>p2.second;
        });
        string res="";
        for(auto  i:a)
        {
            for(int j=0;j<i.second;j++)
            {
                res+=i.first;
            }
            
        }
        return res;
        
        
    }
};
