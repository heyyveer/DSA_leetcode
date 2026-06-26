class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        for(int i=0;i<image.size();i++)
        {
            reverse(image[i].begin(),image[i].end());
        }

        int m=image[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                image[i][j]^=1;
            }
        }
        return image;
    }
};