class Solution {
  
public:
   void dfs(vector<vector<int>>& image, int r, int c, int newcolor,int oldcolor)
   {
     if(r<0 || c<0 || r>=image.size() || c>=image[0].size() || oldcolor!=image[r][c] ) 
       return;
     
     image[r][c]=newcolor;
     dfs(image,r+1,c,newcolor,oldcolor);
     dfs(image,r-1,c,newcolor,oldcolor);
     dfs(image,r,c+1,newcolor,oldcolor);
     dfs(image,r,c-1,newcolor,oldcolor);
    
   }  
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
      
        if(image[sr][sc]==newColor) return image;
        dfs(image,sr,sc,newColor,image[sr][sc]);
        return image;
        
    }
  
};
