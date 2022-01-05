// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string as){
        // code here 
        string z = "";
        stack<int> s;
        for(int i = 0; i <= as.length(); i++)
        {
            s.push(i+1);
            if(as.length() == i || as[i] == 'I')
            {
                while(!s.empty()){
                    z += to_string(s.top());
                    s.pop();
                }
            }
        }
        return z;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends