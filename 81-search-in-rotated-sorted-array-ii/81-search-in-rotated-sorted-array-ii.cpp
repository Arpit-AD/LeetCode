class Solution {
public:
     bool fun(vector<int>& nums, int start, int end, int target)
    {
        if(start>end) return false;
        
        int mid=start+(end-start)/2;
        if(nums[mid]==target) return true;
        
        if(nums[start]<nums[mid])  //first half sorted
        {
            if(target>=nums[start] && target<=nums[mid]) return fun(nums,start,mid-1,target);
            else return fun(nums,mid+1,end,target);
        }
        
        if(nums[mid]<nums[end]) //second half sorted
        {
            if(target>=nums[mid] && target<=nums[end]) return fun(nums,mid+1,end,target);
            else return fun(nums,start,mid-1,target);
        }
        
        //additional case:  when bothhalves of array are not sorted -> check in both
		//this case will occur only when there will be repetetions in the array
        return fun(nums,start,mid-1,target) || fun(nums,mid+1,end,target);
    }
    bool search(vector<int>& nums, int target) {
        //either half will be sorted
        
        return fun(nums,0,nums.size()-1,target);
    }
};