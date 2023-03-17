//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        int x = 0;
        for(int i =0 ;i<N; i++){
            x = x^Arr[i];
        }
        int cnt = 0;
        while(x){
            if(x&1)break;
            cnt++;
            x = x>>1;
        }
        int x1 = 0;
        int x2 = 0;
        for(int i = 0; i<N;i++){
            if(Arr[i]&(1<<cnt))
            x1 = x1^Arr[i];
            else x2 = x2^Arr[i];
        }
        vector<long long int >ans;
        ans.push_back(x1);
        ans.push_back(x2);
        sort(ans.begin() , ans.end());
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends