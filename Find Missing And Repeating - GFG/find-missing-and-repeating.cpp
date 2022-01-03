// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        unordered_map<int,int> x;
        int k[2];
        for(int i = 0; i < n; i++)
            x[*(arr + i)]++;
        for(int i = 1; i <= n; i++)
        {
            if(x[i] > 1)
                k[0] = i;
            if(x[i] < 1)
                k[1] = i;
        }
        int *ptr = k;
        return ptr;
    }
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends