class Solution {
public:
    bool ispossible(vector<int>& a, int mid,int m)
    {
        int sum=0;
        
        for(int n:a)
        {
            if(sum+n>mid)
            {
                m--;
                sum=n;
                
                if(m<=0)
                    return 0;
            }
            else
                sum+=n;
        }
        
        m--;
        
        return m>=0;
    }
    
    int splitArray(vector<int>& a, int m) {
        int ans=INT_MAX;
        int l=a[0],r=0;
        
        for(int x:a)
        {
            r+=x;
            l=max(l,x);
        }
                    
        while(l<=r)
        {
            int mid=(l+r)/2;
            
            if(ispossible(a,mid,m))
            {
                ans=min(ans,mid);
                r=mid-1;
            }
            else
                l=mid+1;
        }
        
        return ans;
    }
};