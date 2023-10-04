class Solution {
public:
    int bs(vector<int> arr,int s,int e,int target){

        while(s<=e){
            
            int mid = s+(e-s)/2;

            if(arr[mid]>target){
                s = mid+1; 
            }

            else if(arr[mid] == target) {
                return mid;
            }
            
            else e = mid-1;
        }
    } 
    int getPivot(vector<int> arr,int n){

    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){

        if(arr[mid]>=arr[0]){
            s = mid+1;
        }

        else{
            e = mid;
        }

        mid = s +(e-s)/2;
    }
        return mid;
    }

    int search(vector<int>& nums, int target) {

        int pivot = getPivot(nums,nums.size()-1);
        
        if(target>=nums[pivot] && target<=nums.size()-1){
            bs(nums,pivot,nums.size()-1,target);
        }
        else bs(nums,0,pivot-1,target);
    }
};