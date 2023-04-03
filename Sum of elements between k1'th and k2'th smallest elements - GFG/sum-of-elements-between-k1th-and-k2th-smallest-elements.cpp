//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
       priority_queue<int>maxh1;
       for(long long i =0;i<N; i++){
           maxh1.push(A[i]);
           if(maxh1.size()>K1){
               maxh1.pop();
           }
       }
       long long t1 = maxh1.top();
       priority_queue<int>maxh2;
       for(long long i = 0;i<N;i++){
           maxh2.push(A[i]);
           if(maxh2.size()>K2){
               maxh2.pop();
           }
       }
       long long t2 = maxh2.top();
       long long sum =  0;
       for(int i =0; i<N; i++){
           if(A[i] >t1 and A[i]<t2){
               sum+=A[i];
           }
       }
       return sum;
    }
};

//{ Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}

// } Driver Code Ends