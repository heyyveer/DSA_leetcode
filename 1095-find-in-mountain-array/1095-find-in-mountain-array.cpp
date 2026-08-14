class Solution {
public:
    int checkpivot(MountainArray &arr){
        int start=0;
        int end=arr.length()-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr.get(mid)<arr.get(mid+1)){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return start;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        int pivot=checkpivot(mountainArr);

        int left=0;
        int right=pivot;

        // ab isme target find karenge agr mila to fir wahi return kr dega mtlb uski first occurance return karenge
        while(left<=right){
            int mid=left+(right-left)/2;

            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if(mountainArr.get(mid)<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }

        left=pivot+1;
        right=mountainArr.length()-1;

        // isme target find karenge kyunki ye wali array decreasing hogi
        while(left<=right){
            int mid=left+(right-left)/2;

            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if(mountainArr.get(mid)>target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }

        return -1;
    }
};