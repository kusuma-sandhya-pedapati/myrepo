class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int i=0,j=0;
        int p,q;
        int n=nums.size();
        for(int k=0;k<n;k++){
            if(nums[i]<nums[k])    i=k;
            if(nums[j]>nums[k])    j=k;
        p=min(max(i+1,j+1),max(n-i,n-j));
        q=min((i+1+n-j),(n-i+j+1));
        }
        return min(p,q);
    }
};