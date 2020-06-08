class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        float m=s(coordinates[0],coordinates[1]);
            for(int i=1;i<coordinates.size();i++)
            {
                float slope=s(coordinates[i],coordinates[0]);
                if(slope!=m)
                    return false;
            }
        return true;
        
    }
    float s(vector<int>& p,vector<int>& q)
    {
        if(p[0]==q[0])
            return 100000;
        else
        {
            return (float)(q[1]-p[1])/(q[0]-p[0]);
        }
    }

};
