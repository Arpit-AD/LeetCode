// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    if(n == 1 || n == 2 || n == 3 || n == 4 || n == 5)
	        return n;
	   set<ull > x;
	   x.insert(1);
	   n--;
	   while(n)
	   {
	       auto z = x.begin();
	       ull k = *z;
	       x.erase(z);
	       x.insert(2*k);
	       x.insert(3*k);
	       x.insert(5*k);
	       n--;
	   }
	   return *x.begin();
	   
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends