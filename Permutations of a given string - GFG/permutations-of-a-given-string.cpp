//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void permute(int ind ,string s , vector<string> &ans){
	        if(ind == s.size()-1){
	            ans.push_back(s);
	            return;
	        }
	        for(int i=ind;i<s.length();i++){
	            swap(s[ind], s[i]);
	            permute(ind+1, s, ans);
	            swap(s[ind], s[i]);
	        }
	    }
		vector<string>find_permutation(string s){
		    vector<string> ans;
		    permute(0,s,ans);
		    sort(ans.begin(), ans.end());
		    ans.erase(unique(ans.begin(),ans.end()), ans.end());
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends