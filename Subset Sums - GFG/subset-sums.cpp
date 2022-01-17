// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
    vector<int> x;
public:
    void recursion(int i , vector<int>& arr, int sum, int n)
    {
        if(i == n)
        {
            x.emplace_back(sum);
            return;
        }
        recursion(i+1,arr,sum+arr[i],n);
        recursion(i+1,arr,sum,n);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        recursion(0,arr,0,N);
        sort(x.begin(),x.end());
        // Write Your Code here
        return x;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends