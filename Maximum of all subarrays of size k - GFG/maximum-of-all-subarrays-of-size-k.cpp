// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> z;
        priority_queue<pair<int,int>> pq;
        int l = 0, r = 0;
        for(int l = 0, r = 0; r < n; )
        {
            if(r-l+1 < k) {
                pq.push({arr[r],r});
                r++;
            }
            else{
                pq.push({arr[r],r});
                int x = pq.top().first;
                z.push_back(x);
                while(!pq.empty()){
                    if(pq.top().second <= l){
                        pq.pop();
                    }
                    else{
                        break;
                    }
                
                }
                l++; r++;
            }
        }
        return z;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends