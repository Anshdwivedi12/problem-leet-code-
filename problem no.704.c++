class Solution {
public:
    int search(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        int l=0;
        int n=nums.size();
        int e=n-1;
    
        while(l<=e){
             int mid=(l+e)/2;
            if(nums[mid]<t){
                l=mid+1;
            }
            else if(nums[mid]>t){
                e=mid-1;
            }
            else{
                return mid;
            }

        }
        return -1;

        
    }
};
