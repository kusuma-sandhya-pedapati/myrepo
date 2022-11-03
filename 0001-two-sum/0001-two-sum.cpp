class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int s=0,e=n-1;
        int idx1,idx2;
        while(s<e){
        if(v[s].first+v[e].first==target){
            idx1=v[s].second;
            idx2=v[e].second;
            break;
        }
        else if(v[s].first+v[e].first>target)
            e=e-1;
        else
            s=s+1;
        }
        return {idx1,idx2};
    }
};