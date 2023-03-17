//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    vector<int>ans;
	    for(int i = 2;i<=N; i++){
	        while(N%i== 0){
	            ans.push_back(i);
	            N=N/i;
	        }
	    }
	    sort( ans.begin(), ans.end() );
        ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends