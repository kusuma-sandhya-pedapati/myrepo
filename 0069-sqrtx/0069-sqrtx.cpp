class Solution {
public:
    int mySqrt(int x) {
        long ans;
        if(x==0||x==1)   return x;
        long l=1,r=x/2;
        while(l<=r){
            long mid=(l+r)/2;
            if(mid*mid==x)    return mid;
            else if(mid*mid>x)   r=mid-1;
            else{ l=mid+1;
                  ans=mid;}
            }
        return ans;
    }
};