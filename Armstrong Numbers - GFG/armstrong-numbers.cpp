//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int m = n;
        int a = n%10;
        n = n/10;
        int b = n%10;
        n = n/10;
        int c = n%10;
        
        int ans = pow(a, 3)+pow(b ,3)+pow(c,3) ;
        if( ans== m ){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends