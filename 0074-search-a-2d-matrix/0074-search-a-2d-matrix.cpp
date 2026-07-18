class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int y=matrix.size();
        int x=matrix[0].size();
        int right=x*y-1;
        int left=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            int row=mid/x;
            int col=mid%x;
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return false;
    }
};