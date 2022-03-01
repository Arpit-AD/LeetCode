// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        int len = arr.length();
        int temp[26]={0};
        for(int i=0;i<len;i++)
        {
            temp[int(arr[i])-97]++;
        }
        for(int i=1;i<26;i++)
        {
            temp[i] = temp[i-1]+temp[i];
        }
        char output[len];
        for(int i = len-1;i>=0;i--)
        {
            output[temp[(int(arr[i])-97)]-1] = arr[i];
            temp[int(arr[i])-97]--;
        }
        for(int i=0;i<len;i++)
        {
            arr[i] = output[i];
        }
        return arr;
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}
  // } Driver Code Ends