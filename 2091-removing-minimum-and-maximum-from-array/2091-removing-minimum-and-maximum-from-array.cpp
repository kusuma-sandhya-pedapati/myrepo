class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        for(int k=0;k<n;k++){
            if(nums[i]<nums[k])    i=k;
            if(nums[j]>nums[k])    j=k;
        }
        return min({max(i+1,j+1),max(n-i,n-j),(i+1+n-j),(n-i+j+1)});
    }
};